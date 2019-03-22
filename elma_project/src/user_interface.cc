#include <unistd.h>
#include "gascar.h"

using namespace gascar;

//the user_interface to deal with all the UI and leave the calculation and so on to the statemachine
UserInterface::UserInterface(GasCar& gc) : Process("user input"), _gascar(gc) {
    initscr();   // Start ncurses
    cbreak();
    start_color();
    keypad(stdscr, TRUE);
    init_pair(1, COLOR_BLUE, COLOR_WHITE);
    init_pair(2, COLOR_RED, COLOR_YELLOW);
    attron(COLOR_PAIR(1));
    timeout(1);  // Timeout for waiting for user input
    noecho();    // Do not echo user input to the screen
    curs_set(FALSE); // Do not show the cursor
    column = 20;
    row = 20;
};

void UserInterface::display_message(int x, int y, std::string msg) {
    mvprintw(x,y,"%s", msg.c_str());
}


void UserInterface::display_gas_level(int x, int y, int g) {
    mvprintw(x,y,"the current gas level is %d (watch your gas level!!!)", g
    );
}

void UserInterface::update() {

    if (_gascar.currentgaslevel() == -1) {
       clear();
       attron(COLOR_PAIR(2));
       mvprintw(20,25,"no car can run without resource!!!\n");
       mvprintw(21,40,"quit");
       halt(); 
    }
    
    int c = getch();
    switch (c) {
        case 'z':
        if ( _gascar.current().name() == "off" ) {
        clear();
        emit(Event("start"));
        mvprintw(row,column,"*");
        }
        break;

        case 'f':
        clear();
        emit(Event("addgas"));
        break;

        case 'p':
        clear();
        emit(Event("park"));
        break;

        case 'r':
        if ( _gascar.current().name() == "fillgas" )  {
        clear();
        emit(Event("restart"));
        mvprintw(row,column,"*");
        }
        break;

        case 'q':
        std::cout << "\nquit\n";
        halt();
        break;
    }

    if ( _gascar.current().name() == "active" ) {
        switch (c) {
        case 'a':
        clear();
        _gascar.gas_level = _gascar.gas_level - 1;
        column--;
        mvprintw(row,column,"*");
        break;
        case 'w':
        clear();
        _gascar.gas_level = _gascar.gas_level - 1;
        row--;
        mvprintw(row,column,"*");
        break;
        case 's':
        clear();
        _gascar.gas_level = _gascar.gas_level - 1;
        row++;
        mvprintw(row,column,"*");
        break;
        case 'd':
        clear();
        _gascar.gas_level = _gascar.gas_level - 1;
        column++;
        mvprintw(row,column,"*");
        break;
        }
    }

    if ( _gascar.current().name() == "fillgas" ) {
        switch (c) {
        case 'a':
        clear();
        _gascar.gas_level = _gascar.gas_level + 1;
        break;
        }
    }

    display_gas_level(0,0,_gascar.currentgaslevel());
    display_message(1,0,_gascar.currentmessage());

}