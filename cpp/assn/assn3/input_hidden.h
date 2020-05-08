#ifndef INPUT_HIDDEN_H
#define INPUT_HIDDEN_H

#include "bridge.h"

class Input_Hidden : public Bridge {
public:
    Input_Hidden(int input_num, int output_num) : Bridge(input_num, output_num) {}
    void backprop(double* delta);
};

#endif