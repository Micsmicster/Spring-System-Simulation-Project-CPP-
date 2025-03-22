#include "file_handler.h"
#include <fstream>
#include <iostream>

using namespace std;

void FileHandler::saveToFile(const vector<Spring>& springs, const string& filename) {
    ofstream file(filename);
    if (!file) {
        cerr << "Error opening file for writing.\n";
        return;
    }

    for (const auto &spring : springs) {
        file << spring.getK() << " " << spring.getC() << " " << spring.getMass() << "\n";
    }

    file.close();
}
