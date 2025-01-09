# TRAFFIC SIMULATION USING C++ 
_(**NOTE**: This project is still in development.)_

This Traffic Simulation project is designed to help learn and implement concepts of **Object-Oriented Programming (OOP)** and **Multithreading** in **C++**. The goal of this project is to simulate real-world traffic systems, including roads, signals, and intersections, in a simplified yet realistic manner. 

Currently, the project is in its initial phase, with features being implemented and refined incrementally. This simulation currently only runs on terminal.



https://github.com/user-attachments/assets/986ecccc-3d90-4676-805e-c3b8e4d97e3f



## IMPLEMENTED FEATURES:-
1) **Modular structure and seperation of concerns**
   * The project follows a clean file hierarchy and modular organisation.
     
     ```bash
      ├── include/  
      │   ├── car.h  
      │   ├── trafficlight.h  
      │   ├── simulation.h  
      │   ├── road.h  
      ├── src/  
      │   ├── car.cpp  
      │   ├── trafficlight.cpp  
      │   ├── simulation.cpp  
      │   ├── road.cpp  
      ├── tests/  (Currently empty; reserved for future unit tests)  
      ├── build.bat  (Build script to compile the project)  
     ```
 
2) **Single car and Traffic signal simulation.**
    * The current implementation includes a single car moving along a road controlled by a traffic signal.

3) **Signal Switching**
    * The traffic signal switches every 500ms using a thread to simulate real-world signal timing.

4) **Graceful Termination**
    * An atomic variable is used to allow the simulation to run continuously until the user presses CTRL + C to terminate the session.
      
5) **Car Movement**
    * The car increments its position by 1 block at a time. (Speed parameter is yet to be implemented.)
     
6) **Cycle Continuation**
    * When the car reaches the end of the road, it respawns at the start, creating a continuous cycle.


## **Technologies Used:-**
1) **Programming Language:** C++
2) **Multithreading:** Currently used to stimulate the toggling of a single signal
3) **Atomic:** For safe termination of the simulation.
4) **Git:** Used for source code management.
5) **Build Tools**: `build.bat` script to compile all files together.


## **Setup Instructions:-**
1) **Clone the repository:**
       * git clone `https://github.com/yourusername/traffic-simulation.git`.
2) **Move to the root directory**.
3) **Build the project:**
       * Modify the `build.bat` file as per your requirements and build the project.
4) **Run the simulation**.


## **Usage Instructions:-**
1) **Run the Simulation:**
    * After successfully compiling the files, execute the simulation.exe file to start the simulation.
     
2) **Customize Signal Timing:**
    * To modify the toggling time of the traffic light, edit the relevant parameter in the `src/simulation.cpp` file. (Default: 500ms)

3) **Adjust Road Length:**
    * To change the length of the road, update the appropriate variable in the `src/road.cpp` file.
    * _Note_: A future update will allow users to specify the road length dynamically at runtime.


## **Features Currently Being Worked On:-**
1) **Multiple Cars on a Single Road:**
    * Simulate multiple cars moving on the same road, each with unique characteristics.

2) **Speed Assignment:**
    * Assign constant speed values to each car to simulate varying traffic dynamics.

3) **Overtaking Algorithm:**
    * Develop logic to allow cars to overtake slower vehicles while maintaining safe distances.

4) **Collision Prevention:**
    * Implement a mechanism to detect and prevent collisions, ensuring realistic and safe traffic flow.
