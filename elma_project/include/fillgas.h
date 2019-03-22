#ifndef _ELMA_GAS_CAR_FILLGAS_H
#define _ELMA_GAS_CAR_FILLGAS_H

#include "gascar.h"

namespace gascar {

    using namespace std::chrono;
    using namespace elma;

    class GasCar;  // Declare containing class so it can be refered to here
                      // before it is defined in stopwatch.h 

    //! The fillgas state of the gascar
    class FillgasState : public State {        

        public:
        //! Build a new fillgas state
        FillgasState() : State("fillgas") {}

        //! Perform actions required when switching to fillgas state
        //! \param e The event that triggered the transition  
        void entry(const Event& e);
        void during() {}      
        void exit(const Event&) {}

        GasCar& gascar();        

    };

}

#endif