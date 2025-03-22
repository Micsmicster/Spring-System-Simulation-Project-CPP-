# CPTR 142: Project III – Spring-Mass-Damper Simulation

## Project Description
This project simulates the behavior of a **spring-mass-damper system** by modeling the motion of a mass attached to a spring with damping. The system is governed by a **second-order differential equation**, and numerical methods are used to compute its response over time. In this coding assignment we are tasked to code in C++ and use git to save our work.



### Features
- Add new springs with specific **spring constant (k), damping coefficient (c), and mass (m)**.
- Simulate the motion of the system based on user-defined **time step (Δt) and total duration (s)**.
- Display all stored spring systems.

### Main Menu Options
- 1. Add a new spring (enter values for k, c, and m).
- 2. Display all stored springs.
- 3. Simulate the motion for a given duration of **time step (Δt) and total duration (s)**.
- 4. Exit the Program

### Simulation Parameters
- The program asks for a time step (Δt) and total simulation duration.
- The simulation computes displacement over time using Euler’s method.
- Recommended Time Step (Δt ≤ 0.1s) to ensure accurate results.

### File Structure

/student142_project-1

│── src/

│   ├── main.cpp          # Entry point of the program

│   ├── spring.cpp        # Spring class implementation

│   ├── spring_system.cpp # Manages multiple springs

│   ├── file_handler.cpp # Handles file input/output

│── include/

│   ├── spring.h          # Spring class header

│   ├── spring_system.h   # SpringSystem class header

│   ├── file_handler.h # File Handling header

│── Makefile              # Compilation automation (if provided)

│── README.md             # Project documentation

### Known Issues & Bugs
- Large time steps (Δt > 0.1s) may cause numerical instability.
- The program does not validate invalid user inputs well.
- The numerical method used (Euler’s Method) introduces small approximation errors.

### Future Improvements
- Implement graphical plots to visualize spring motion.
- Improve error handling for invalid inputs.
- Allow users to input initial displacement and velocity.
- Allow users to solve for k, c, or mass if they are unkown.
- Allow users to use file handling features


---

## How to Run the Program

### 1. Compile the Program
#### Using Makefile (if available)
Run the following command in the terminal:

make

## Run Test Inputs

Example 1: Adding a Valid Spring

Input:

1
Enter spring constant (k): 50
Enter damping coefficient (c): 5
Enter mass (kg): 10

Output:

Spring added successfully!

Example 2: Invalid Input for Spring Constant

Input:

1
Enter spring constant (k): abc
Invalid input. Please enter a positive number.
Enter spring constant (k): -20
Invalid input. Please enter a positive number.
Enter spring constant (k): 50
Enter damping coefficient (c): 5
Enter mass (kg): 10

Output:

Invalid input. Please enter a positive number.
Invalid input. Please enter a positive number.
Spring added successfully!

Example 3: Displaying All Springs

Input:

2

Output (if springs exist):

Spring 1 - k: 50, c: 5, mass: 10
Spring 2 - k: 30, c: 3, mass: 8

Output (if no springs exist):

No springs in the system.

Example 4: Running a Simulation

Input:

3
Enter time step: 0.1
Enter total simulation time: 5

Output:

Simulation started...
[Simulation data prints here based on your implementation]
Simulation completed!

Example 5: Invalid Input for Time Step

Input:

3
Enter time step: abc
Invalid input. Please enter a positive number.
Enter time step: -1
Invalid input. Please enter a positive number.
Enter time step: 0.1
Enter total simulation time: 5

Output:

Invalid input. Please enter a positive number.
Invalid input. Please enter a positive number.
Simulation started...
[Simulation data]
Simulation completed!



Example 6: Invalid Menu Choice

Input:

9

Output:

Invalid choice, please enter a number between 1-4.

Example 8: Exiting the Program

Input:

4

Output:

Exiting program...



## Project Summary

- This Spring-Mass-Damper Simulation project showcases my ability to implement object-oriented programming (OOP) in C++ while utilizing numerical methods to simulate physical systems. It includes features like dynamic spring addition, simulation of motion using Euler’s method, input validation, and file handling.

- Throughout this project, I worked extensively on designing the system architecture, writing efficient C++ code, handling user input validation, and implementing numerical simulations. I also utilized GitLab for version control and collaboration.

- This project demonstrates my problem-solving skills, proficiency in C++, and ability to write structured, maintainable code. Future improvements could include graphical plots, improved numerical methods, better error handling, and more efficint file handling.

- 🔗 GitHub Repository: https://github.com/Micsmicster/Spring-System-Simulation-Project-CPP- 
- 🔗 LinkedIn Profle: https://www.linkedin.com/in/krittanatt-bhummabhuti-82b72a332/

- Feel free to check out the project or reach out to me for collaborations or discussions! 🚀
