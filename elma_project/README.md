GasCar elma project
===

[Elma](http://klavinslab.org/elma) is an event loop manager designed to teach embedded and reactive systems programming. This repository contains an example Elma project, showing how to use many Elma features, as well as illustrating how to arrange the files and directories in an Elma project.

[GasCar](https://github.com/fyiyu091/elma_project) is a project that uses the Elma system to simulate the gascar model. 

Installation
---

    git clone https://github.com/fyiyu091/elma_project
    cd elma_project
    cd elma_project (to project directory)
    docker run -v $PWD:/source -it klavins/elma:latest bash
    make
    make docs

Execution
---
To run the gascar model, type

    bin/gascar

The gascar is controlled via the keyboard, via these keys:
- **z**: start the gascar (to active state)
- **w**: move up
- **s**: move down
- **d**: move right
- **a**: move left (in active state)
- **q**: quit
- **f**: to fillgas state
- **a**: add gas (in fillgas state)
- **r**: back to active state
- **p**: park to off state

Architecture
---
- The gascar project is essentially a statemachine that has three states: off, active and fillgas.
- Initially, the gascar model will starts at off state, event "start(press z)" will trigger the model to active state with 10 units of gases.
- In the active state, you can use "wsad" to move the car(simplified by "*"), note each movement will burn down one unit gas. Event "addgas(press f)" will trigger the model to fillgas state. 
- In the fillgas state, you can press 'a' to add gas. Event "restart(press r)" will trigger the model back to active state.
- Besides, event "park(press p)" will trigger the model from active to off state.
- In any of the three states, you can press "q" to exit the gascar model simulation. 
- Warning: Movement while the gas is at 0 level will prompt the error message on the screen and exit the model, so please remember to add gas!

Results
---
- The code can simulate the car model behaviours as described above. 
- Each state will have their own unique message displayed and different operational keys. 
- The following are the different state screenshots. 


- off_state
> ![off_state](https://github.com/fyiyu091/elma_project/blob/master/elma_project/docs/offstate.PNG)

- active_state 
> ![active_state](https://github.com/fyiyu091/elma_project/blob/master/elma_project/docs/activestate.PNG)

- fillgas_state 
> ![fillgas_state](https://github.com/fyiyu091/elma_project/blob/master/elma_project/docs/fillgasstate.PNG)

- park_off_state
> ![off_park_state](https://github.com/fyiyu091/elma_project/blob/master/elma_project/docs/park_off.PNG)


Acknowledgements
---
- Special appreciation to Professor Eric Klavins and TAs Justin, Henry for teaching the embedded software engineering class.
- The gascar project is based on the elma system and the elma C++ docker image.

References
---
- [Ncurses](http://www.tldp.org/HOWTO/NCURSES-Programming-HOWTO/)
- [Doxygen](http://www.doxygen.nl/index.html)
