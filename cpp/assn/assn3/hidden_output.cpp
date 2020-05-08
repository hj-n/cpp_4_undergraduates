#include "hidden_output.h"

double* Hidden_Output :: backprop(double* delta) {

    double* next_delta = new double[input_num];  // delta for previous layer
    for(int i = 0; i < input_num; i++) {
        next_delta[i] = 0;
    }
    // TODO

    return next_delta;
}