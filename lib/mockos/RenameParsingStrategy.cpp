
#include <string>
#include "mockos/RenameParsingStrategy.h"

#include <iostream>
#include <sstream>
using namespace std;


std::vector<std::string> RenameParsingStrategy::parse (std::string fileNames) {

    vector <string> returnedVector;
    int spaceIndex = 0;
    for (int i = 0; i < fileNames.length(); i++) {
        if (fileNames[i] == ' ') {
            spaceIndex = i;
            break;
        }
    }

    string originalName = fileNames.substr(0, spaceIndex - 1);
    string newName = fileNames.substr(spaceIndex + 1, fileNames.npos);

    returnedVector.push_back (fileNames);
    returnedVector.push_back (originalName);
    return returnedVector;

}

