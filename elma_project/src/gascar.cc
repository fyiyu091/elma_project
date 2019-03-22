#include <chrono>
#include <vector>

#include "gascar.h"

using namespace std::chrono;
using namespace elma;
using namespace gascar;

// Need to create my own statemachine
// State defines how each state interact with each other
// the winagame state machine to take care of all the calculation and transitions
GasCar::GasCar() : StateMachine("gascar") {

    set_initial(off);
    set_propagate(false);
    add_transition("start", off, active);
    add_transition("addgas", active, fillgas);
    add_transition("restart", fillgas, active);
    add_transition("park", active, off);
}



void GasCar::active_entry_status() {
     current_msg = "the car is started \npress 'a' to move left\npress 'w' to move up\npress 's' to move down\npress 'd' to move right\npress 'f' to add gas";
}

void GasCar::fillgas_entry_status() {
     current_msg = "press 'a' to add gas to the car!!!\npress 'r' to restart the car";
}

void GasCar::off_park_status() {
     current_msg = "the car is parked, press 'z' to start the car";
}

void GasCar::off_entry_status() {
     gas_level = 10;
     current_msg = "the car is at off, press 'z' to start the car";
}

int GasCar::currentgaslevel() {
    return gas_level;
}

std::string GasCar::currentmessage() {
    return current_msg;
}