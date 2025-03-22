#include "spring_system.h"

// Add Spring
void SpringSystem::addSpring(double k, double c, double mass) {
    springs.push_back(Spring(k, c, mass));
}

// Display All Springs
void SpringSystem::displayAllSprings() {
    if (springs.empty()) {
        cout << "No springs available." << endl;
        return;
    }
    for (size_t i = 0; i < springs.size(); i++) {
        cout << "Spring " << i + 1 << ":" << endl;
        springs[i].display();
        cout << "------------------------" << endl;
    }
}

// Simulate Motion
void SpringSystem::simulate(double timeStep, double totalTime) {
    cout << "Simulating Spring Motion..." << endl;
    for (double t = 0; t <= totalTime; t += timeStep) {
        cout << "Time: " << t << "s" << endl;
        for (size_t i = 0; i < springs.size(); i++) {
            double response = springs[i].computeTransferFunction(t);
            cout << "Spring " << i + 1 << " Response: " << response << endl;
        }
        cout << "------------------------" << endl;
    }
}



