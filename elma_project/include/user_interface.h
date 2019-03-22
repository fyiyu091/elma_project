#include <iostream>
#include <chrono>
#include <vector>
#include <ncurses.h>
#include <string.h>

#include "gascar.h"

namespace gascar {

    using namespace std::chrono;
    using namespace elma;
    using namespace gascar;

    //! A user interface for the a gascar object
    class UserInterface : public Process {

        public:

        //! Create a new gascar user interface using curses
        //! \param gc A reference to a gascar object
        UserInterface(GasCar& gc);

        void init() {}
        void start() {}

        //! Display the message at the given x,y position on the screen

        void display_message(int x, int y, std::string msg);

        void display_gas_level(int x, int y, int g);

        //! Update the user interface by (a) reading keyboard input and (b) writing to the screen
        void update();
        void stop() {}

        private:
        GasCar& _gascar;
        int column;
        int row;

    };

}