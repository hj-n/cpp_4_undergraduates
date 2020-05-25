#ifndef PERCEPTRON_H
#define PERCEPTRON_H


#include "constants.h"

class Perceptron {
private:
    double* weight;
    double  bias;
    double  num;

public:
    Perceptron(int num);
    double forward(double* input);
    double* backprop(double delta, double* current_input);
};



#endif