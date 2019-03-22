#include <iostream>
#include <chrono>
#include <vector>

#include "gascar.h"

using namespace std::chrono;
using namespace elma;
using namespace gascar;

GasCar&FillgasState:: gascar() { return (GasCar&) state_machine(); }

void FillgasState::entry(const Event& e) {
    if ( e.name() == "addgas" ) {
        // Get into the off state
        gascar().fillgas_entry_status();
    } else if ( e.name() == "win" ) {
        // Get into the victory state
        //winagame().lap();
    }
}

