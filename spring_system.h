#ifndef SPRINGSYSTEM_H
#define SPRINGSYSTEM_H

#include <vector>
#include "spring.h"
#include <fstream>

class SpringSystem {
private:
    vector<Spring> springs;

public:
    // Add Spring
    void addSpring(double k, double c, double mass);

    // Display All Springs
    void displayAllSprings();

    // Simulate Spring Motion
    void simulate(double timeStep, double totalTime);
    // Save & Load from File
    void saveToFile(string filename);
   
};

#endif  // SPRINGSYSTEM_H
