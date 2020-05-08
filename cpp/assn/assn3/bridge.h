#ifndef BRIDGE_H
#define BRIDGE_H

#include "perceptron.h"
#include "sigmoid.h"

class Bridge {   // input layer to hidden layer
protected:
    int input_num;
    int output_num;

    Perceptron** perceptron_array;
    Sigmoid** sigmoid_array;
    
public: 
    Bridge(int input_num, int output_num);
    double* forward(double* input);
};

#endif