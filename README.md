# elma_project
Note: This is the development process notes README file, for the gascar README file please refer to https://github.com/fyiyu091/elma_project/blob/master/elma_project/README.md.

The final project for embedded class
My original goal of the final project is to convert the Elma to with Java.
The successes for me will be that the converted Java Elma can produces all the results that the current C++ Elma can.
In order to achieve that I will need the Elma base code, Java libraries, online sources.

Here are my current five milestones:
1. Talk with the Professor about the feasibility of the project idea.
2. Create the Java environment.
3. Start with the manager, process and channel classes.
4. Create the statemachine class.
5. Achieve the http data communication.

# 03/17/2019 important updates #
My initial idea was to convert C++ elma to Java, at this point, I have achieved following tasks:
   1. Installed the latest Java for my host machine.
   2. Pulled and built the openjdk docker image.
      - pull openjdk image
      - In order to pull the image successfully, I had to change the DNS to 8.8.8.8 in the docker image.
   3. Ran some initial Java test code on the openjdk docker image.
      - Ran some simple print out code to make sure that the image is working as expected.

However, after seeing Professor's stopwatch example from the last lecture, I feel like I'd want to swtich my project to some more fun ideas (involving some GUI) instead of just converting the whole system to another language. 
Therefore, I am re-define my project and here are my new five milestones:
1. Download the elma_project repository.
2. Learn the NCURSES programming from the website.
3. Creating a statemachine model for a little GUI model.
4. Implement the GUI part of the game.
5. Finish the whole project and test the programs. 

# 03/18/2019 updates #
The intial gaming idea: 
   1. Create a 16*16 game area matrix.
   2. Randomly pops out a target object inside the matrix.
   3. Move the cursor to the object and score one.
The useful summary from NCURSES study:
   - stdscr at the current (y,x) co-ordinates.
   - the keypad() initialization function can enable the arrow keys.
   - mvaddch() to move the cursor to a given point.
   - start_color() to add color to the GUI.
   - init_pair(1, COLOR_RED, COLOR_BLACK) to set up a pair of colors.
   - ch = getch() & ch == KEY_LEFT to get the arrow keys.
   - function getyx() can be used to find out the present cursor co-ordinates.

# 03/19/2019 updates #
The statemachine design details.
The states: 
   - off state, start event will transit to active state.
   - active state, move the car model around with 'wasd' keys, 'q' will transits to the off state.
   - fillgas state, to add gas to the car model.

# 03/21/2019 updates #
The project is being commited, it should be the final form besides some minor adjustment possibly.
