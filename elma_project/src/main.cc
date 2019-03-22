#include <iostream>
#include <chrono>
#include <vector>
#include <ncurses.h>

#include "gascar.h"

using namespace std::chrono;
using namespace elma;
using namespace gascar;

int main() {

    Manager m;
    GasCar gascar;
    UserInterface ui(gascar);

    m.schedule(ui, 10_ms)
     .schedule(gascar, 10_ms)     
     .init()
     .run();

    endwin();     
     
}