# elma_project
The final project for embedded class
My goal of the final project is to convert the Elma to with Java.
The success for me will be that the converted Java Elma can do all the things that the current C++ Elma can.
In order to achieve that I will need the Elma base code, Java libraries, online sources.

Here are my current five milestones:
1. Talk with the Professor about the feasibility of the project idea.
2. Create the Java environment.
3. Start with the manager, process and channel classes.
4. Create the statemachine class.
5. Achieve the http data communication.

################################
# 03/17/2019 important updates #
################################
My original idea was to convert C++ elma to Java, at this point, I have achieved following tasks:
   1. Installed the latest Java for my host machine.
   2. Pulled and built the openjdk docker image.
      - pull openjdk image
      - In order to pull the image successfully, I had to change the DNS to 8.8.8.8 in the docker image.
   3. Ran some initial Java test code on the openjdk docker image.
      - Ran some simple print out code to make sure that the image is working as expected.

However, after seeing Professor's stopwatch example from the last lecture, I feel like I'd want to swtich my project to
some more fun ideas (involving some GUI) instead of just converting the whole system to another language. 
Therefore, I am re-define my project and here are my new five milestones:
1. Download the elma_project repository.
2. Learn the NCURSES programming from the website.
3. Creating a statemachine model for a little GUI game.
4. Implement the GUI part of the game.
5. Finish the whole project and test the programs. 