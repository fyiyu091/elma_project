#ifndef _ELMA_GAS_CAR_OFF_H
#define _ELMA_GAS_CAR_OFF_H

#include "gascar.h"

namespace gascar {

    using namespace std::chrono;
    using namespace elma;

    class GasCar; // Declare containing class so it can be refered to here
                     // before it is defined in stopwatch.h

    //! A State class to represent the state in which the gascar is off
    class OffState : public State {

        public:
        //! Construct a new off state
        OffState() : State("off") {}

        //! Perform actions required when switching to off state
        //! \param e The event that triggered the transition
        void entry(const Event& e);
        void during() {}
        void exit(const Event& e) {}

        //! \return A reference to the containing finite state machine object
        GasCar& gascar();

    };

}

#endif