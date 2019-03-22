#ifndef _ELMA_GAS_CAR_ACTIVE_H
#define _ELMA_GAS_CAR_ACTIVE_H

#include "gascar.h"

namespace gascar {

    using namespace std::chrono;
    using namespace elma;

    class GasCar;  // Declare containing class so it can be refered to here
                      // before it is defined in stopwatch.h 

    //! The active state of the gascar
    class ActiveState : public State {        

        public:
        //! Build a new active state
        ActiveState() : State("active") {}
        
        //! Perform actions required when switching to active state
        //! \param e The event that triggered the transition    
        void entry(const Event& e);
        void during() {}    
        void exit(const Event&) {}

        GasCar& gascar();        

    };

}

#endif