#include "spring_system.h"
#include <iostream>
#include <stdexcept>  // For standard exceptions

using namespace std;

int main() {
    SpringSystem system;
    int choice;

    while (true) {
        cout << "\n===== Spring System Simulation =====" << endl;
        cout << "1. Add a new spring" << endl;
        cout << "2. Display all springs" << endl;
        cout << "3. Run Simulation" << endl;
        cout << "4. Save Data" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (cin.fail()) { 
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Invalid choice. Please enter a number between 1-5.\n";
            continue;
        }

        try {
            switch (choice) {
                case 1: {
                    double k, c, mass;

                    while (true) {
                        cout << "Enter spring constant (k): ";
                        cin >> k;
                        if (!cin.fail() && k > 0) break;
                        cout << "Invalid input. Please enter a positive number.\n";
                        cin.clear();
                        cin.ignore(10000, '\n');
                    }

                    while (true) {
                        cout << "Enter damping coefficient (c): ";
                        cin >> c;
                        if (!cin.fail() && c >= 0) break;
                        cout << "Invalid input. Please enter a non-negative number.\n";
                        cin.clear();
                        cin.ignore(10000, '\n');
                    }

                    while (true) {
                        cout << "Enter mass (kg): ";
                        cin >> mass;
                        if (!cin.fail() && mass > 0) break;
                        cout << "Invalid input. Please enter a positive number.\n";
                        cin.clear();
                        cin.ignore(10000, '\n');
                    }

                    system.addSpring(k, c, mass);
                    cout << "Spring added successfully!\n";
                    break;
                }

                case 2:
                    system.displayAllSprings();
                    break;

                case 3: {
                    double timeStep, totalTime;

                    while (true) {
                        cout << "Enter time step: ";
                        cin >> timeStep;
                        if (!cin.fail() && timeStep > 0) break;
                        cout << "Invalid input. Please enter a positive number.\n";
                        cin.clear();
                        cin.ignore(10000, '\n');
                    }

                    while (true) {
                        cout << "Enter total simulation time: ";
                        cin >> totalTime;
                        if (!cin.fail() && totalTime > 0) break;
                        cout << "Invalid input. Please enter a positive number.\n";
                        cin.clear();
                        cin.ignore(10000, '\n');
                    }

                    system.simulate(timeStep, totalTime);
                    cout << "Simulation completed successfully!\n";
                    break;
                }

                case 4:
                    try {
                        system.saveToFile("springs.txt");
                        cout << "Data saved successfully to springs.txt!\n";
                    } catch (const runtime_error &e) {
                        cerr << "Error saving to file: " << e.what() << endl;
                    }
                    break;

                case 5:
                    cout << "Exiting program..." << endl;
                    return 0;

                default:
                    cout << "Invalid choice, please enter a number between 1-5.\n";
                    break;
            }
        } catch (const exception &e) {
            cerr << "An error occurred: " << e.what() << endl;
        }
    }

    return 0;
}
