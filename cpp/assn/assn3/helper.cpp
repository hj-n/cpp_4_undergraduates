#include <cstdlib>
#include <ctime>

#include "constants.h"
#include "helper.h"

void random_init() {
    srand(static_cast<unsigned int>(std::time(0)));
}

double rand_weight_generator() {
    return ((rand() % 10000) * 0.0001 - 0.5) * 8;
}


