#include <iostream>
#include <chrono>
#include <vector>

#include "gascar.h"

using namespace std::chrono;
using namespace elma;
using namespace gascar;

GasCar&ActiveState:: gascar() { return (GasCar&) state_machine(); }

void ActiveState::entry(const Event& e) {
    if ( e.name() == "start" ||  e.name() == "restart") {
        // Get into the off state
        gascar().active_entry_status();
    } else if ( e.name() == "placeholder" ) {
        // Get into the victory state
        //winagame().lap();
    }
}

