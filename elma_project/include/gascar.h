#ifndef _ELMA_GAS_CAR_H
#define _ELMA_GAS_CAR_H

#include "elma/elma.h" // Note installation directory for elma

#include "active.h"
#include "off.h"
#include "fillgas.h"
//#include "win.h"
#include "user_interface.h"

namespace gascar {

    using namespace std::chrono;
    using namespace elma;    

    //! A GasCar class, that inherits from StateMachine
    class GasCar : public StateMachine {

        public:
        //! Make a new Gascar 
        GasCar();

        void active_entry_status();

        void fillgas_entry_status();

        void off_entry_status();
        
        void off_park_status();

        int currentgaslevel();
        
        std::string currentmessage();

        int gas_level;

        private:

        // When overriding the StateMachine class, put state declarations here.
        ActiveState active;
        OffState off;
        FillgasState fillgas;
        //WinState win;

        // Other private variables
        std::string current_msg;
        

    };

}

#endif