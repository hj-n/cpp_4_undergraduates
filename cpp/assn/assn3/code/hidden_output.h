#ifndef HIDDEN_OUTPUT_H
#define HIDDEN_OUTPUT_H

#include "bridge.h"

class Hidden_Output : public Bridge {
public:
    Hidden_Output(int input_num, int output_num) : Bridge(input_num, output_num) {}
    double* backprop(double* delta);
};

#endif