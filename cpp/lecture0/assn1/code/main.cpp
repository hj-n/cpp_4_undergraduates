#include <iostream>
#include "./helper.h"

using namespace std;

int main() {

    int** r = arrayAllocator();
    int** g = arrayAllocator();
    int** b = arrayAllocator();
    int** a = arrayAllocator();
    /**
     * Able to use these 2D array
     * just access (n, m)-th element by calling arr[n][m]
     * each array holds the r / g / b value of each pixel
     * current value: 0 for every color & pixel
     */







    pixelGenerator(r, g, b, a);
    return 0;
}