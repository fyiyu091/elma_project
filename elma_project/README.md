GasCar elma project
===

[Elma](http://klavinslab.org/elma) is an event loop manager designed to teach embedded and reactive systems programming. This repository contains an example Elma project, showing how to use many Elma features, as well as illustrating how to arrange the files and directories in an Elma project.

The source code for this project is available [on github](https://github.com/klavinslab/elma_project).

[GasCar](https://github.com/fyiyu091/elma_project) is a project that uses the Elma system to simulate the gascar model. 

Installation
---

    git clone https://github.com/fyiyu091/elma_project
    cd elma_project
    docker run -v $PWD:/source -it klavins/elma:latest bash
    make
    make docs

Execution
---
To run the gascar, type

    bin/gascar

The gascar is controlled via the keyboard, via these keys:
- **z**: start the gascar (to active state)
- **w**: move up
- **s**: move down
- **d**: move right
- **a**: move left
- **q**: quit
- **f**: to fillgas state
- **a**: add gas
- **r**: back to active state

Architecture
---
- The gascar project is essentially a statemachine that has three states: off, active and fillgas.
- Initially, the gascar model will starts at off state, event "start(press z)" will trigger the model to active state with 10 units of gases.
- In the active state, you can use "wsad" to move the car("*"), note each movement will burn down one unit gas. Event "addgas(press f)" will trigger the model to fillgas state. 
- In the fillgas state, you can press 'a' to add gas. Event "restart(press r)" will trigger the model back to active state.
- Besides, event "park(press p)" will trigger the model from active to off state.
- In any of the three states, you can press "q" to exit the gascar model simulation. 
- Warning: Movement while the gas is at 0 level will prompt the error message on the screen and exit the model, so please remember to add gas!

Results
---
- The code can simulate the car model behaviours as described above. 
- Each state will have their own unique message displayed and different operational keys. 
- The following are the different state screenshots. 

![offstate](https://github.com/fyiyu091/elma_project/blob/master/elma_project/docs/offstate.PNG)
1. The off state
* the initializtion of the car model
* "the current gas level is XX (watch your gas level!!!)"
* "the car is at off, press 'z' to start the car"

2. The active state
    "the current gas level is XX (watch your gas level!!!)"
    "the car is started"
    "press 'a' to move left"
    "press 'w' to move up"
    "press 's' to move down"
    "press 'd' to move right"
    "press 'f' to add gas"
    (the "*" stands for the gascar)

3. The fillgas state
    "the current gas level is XX (watch your gas level!!!)"
    "press 'a' to add gas to the car!!!"
    "press 'r' to restart the car"

Acknowledgements
---
- Appreciate Professor Eric Klavins and TA Justin, Henry for teaching the embedded software engineering class.

References
---
[Ncurses](http://www.tldp.org/HOWTO/NCURSES-Programming-HOWTO/)
[doxygen](http://www.doxygen.nl/index.html)
