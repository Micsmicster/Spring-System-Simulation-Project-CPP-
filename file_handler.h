#ifndef FILE_HANDLER_H
#define FILE_HANDLER_H

#include "spring.h"
#include <vector>

using namespace std;

class FileHandler {
public:
    static void saveToFile(const vector<Spring>& springs, const string& filename);
};

#endif
