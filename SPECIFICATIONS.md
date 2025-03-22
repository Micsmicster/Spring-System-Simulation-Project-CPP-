# CPTR 142: Project III Specifications

The specifications outline the project design specifications and project management.  
This is done **BEFORE CODING!**  

Here are the things to include in this document:  

- **Complete UML diagrams** of classes, member variables, member functions, and relationships between classes.  
  - What structures and menus will be required?  
- **Procedural Flow Diagram** — The logical flow of your program  
- **Anticipated challenges** and how you will address them  
- **Project Management Plan**  
  - Name **individual group member tasks/responsibilities**.  
  - Split up the tasks and implementation into portions per group member.  
  - **Timeline** of individual and group delivery dates.  

---

## **Spring System Simulation - Project Specifications**  

### **1. UML Diagrams**  

#### **Class Diagram**  
**Classes:**  

- **Spring**  
  - Attributes:  
    - `double k` (Spring constant)  
    - `double c` (Damping coefficient)  
    - `double mass` (Mass attached to spring)  
  - Methods:  
    - `Spring(double k, double c, double mass)` (Constructor)  
    - `double computeTransferFunction(double frequency)`  
    - `void display()`  

- **SpringSystem**  
  - Attributes:  
    - `std::vector<Spring> springs`  
  - Methods:  
    - `void addSpring(double k, double c, double mass)`  
    - `void simulate(double timeStep, double totalTime)`  
    - `void displayAllSprings()`  

---

### **2. Structures and Menus**  
- **Main Menu:**  
  - Add a new spring  
  - Display all springs  
  - Run Simulation  
  - Save Data
  - Exit  

---

### **3. Procedural Flow Diagram**  

1. User selects an option from the menu.  
2. Based on selection:  
   - **Add new spring**: Prompt user for `mass`, `c` (Damping Coefficient), and `k` (Spring Rate) values.   
       - If **insufficient information is given**, warn the user.  
   - **Display all springs**: Extract all data stored in the file and output it to the user.
   - **Run Simulation**: The program will ask the user for the time step and the simulation time. Once they are given, each of the saved springs will be used to calculate the oscillation over a given period of time for the simulation. Once everything has been calculated, the results will be displayed to the user.
   - **Save Data**: Saves Data onto a text file.
   - **Exit**: Exit the program
3. Loop until the user exits.  

---

### **4. Anticipated Challenges & Solutions**  

- **Complex numerical calculations** → Use appropriate formulas and test outputs.  
- **User input validation** → Ensure only valid numeric values are accepted.  
- **Dynamic memory management** → Properly allocate and deallocate memory.  

---

### **5. Project Management Plan**  

#### **Tasks & Responsibilities**  
- **Specification and README** - (Mickey)  
- **Menu and User Interface** - (Mickey)  
- **Class Desgin** - (Mickey)
- **Functions** - (Mickey)
- **Simulation Logic** - (Mickey and Brennan)  
- **File Handling** - (Mickey and Jordan)
- **Equations** - (Brennan)
- **UML and Flow Diagrams** - (Jordan)
- **Exceptions** - (Jordan)  
- **Presentation** - (Mickey and Jordan)

#### **Timeline**  
- **9 March 2025:** Finalize UML and design.  
- **10-12 March 2025:** Implement core functionality.  
- **13 March 2025:** Finalize, Debug, and Test code, Finish Presentation



---
