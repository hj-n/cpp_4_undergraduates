#ifndef SIGMOID_H
#define SIGMOID_H

#include "constants.h"

class Sigmoid {
private:
    double current_output;

public:
    double forward(double input);
    double backprop(); 
};

#endif