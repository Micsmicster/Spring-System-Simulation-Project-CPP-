#ifndef SPRING_H
#define SPRING_H

#include <iostream>
#include <cmath>

using namespace std;

class Spring {
private:
    double k;      // Spring constant
    double c;      // Damping coefficient
    double mass;   // Mass attached to the spring

public:
    // Constructor
    Spring(double k, double c, double mass);

    // Compute Transfer Function
    double computeTransferFunction(double frequency);
    double getK() const;     // Returns spring constant
    double getC() const;     // Returns damping coefficient
    double getMass() const;  // Returns mass

    // Display Spring Details
    void display();
};

#endif  // SPRING_H
