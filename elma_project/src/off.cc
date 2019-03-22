#include <iostream>
#include <chrono>
#include <vector>

#include "gascar.h"

using namespace std::chrono;
using namespace elma;
using namespace gascar;

GasCar&OffState:: gascar() { return (GasCar&) state_machine(); }

void OffState::entry(const Event& e) {
    if (e.name() == "park") {
        gascar().off_park_status();
    }
    else {
    gascar().off_entry_status();
    }
}
