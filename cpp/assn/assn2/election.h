#ifndef ELECTION_H
#define ELECTION_H

#include "district.h"
#include <iostream>

using namespace std;

class Election {
private:
    District* districts;
    
public:
    Election();
    ~Election();

    void printCurrentStatus();
    void printCurrentProvinceStatus(string province);
    void performStep(int tP, int tM, int tC, int iP, int iM, int iC);
    void printFinalResult();

};

#endif