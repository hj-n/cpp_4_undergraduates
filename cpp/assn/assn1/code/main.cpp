#include <iostream>
#include <string>
#include "./helper.h"

using namespace std;

int** r;
int** g; 
int** b;

int mixColor(int originalColor, int newColor, float newAlpha) {
    // TODO
    return 0;
}

void addRect(int x, int y, int width, int height, string color) {
    // Use color data!!
    int rVal, gVal, bVal;
    float aVal;
    if (color == "red") { rVal = 255; gVal = 0; bVal = 0; aVal = 0.2; }
    if (color == "green") { rVal = 0; gVal = 255; bVal = 0; aVal = 0.2; }
    if (color == "blue") { rVal = 0; gVal = 0; bVal = 255; aVal = 0.2; }

    // TODO



    return;
}

void addCircle(int cx, int cy, int r, string color) {
    // Use color data!!
    int rVal, gVal, bVal;
    float aVal;
    if (color == "red") { rVal = 255; gVal = 0; bVal = 0; aVal = 0.2; }
    if (color == "green") { rVal = 0; gVal = 255; bVal = 0; aVal = 0.2; }
    if (color == "blue") { rVal = 0; gVal = 0; bVal = 255; aVal = 0.2; }

    // TODO




    return;
}

string pickColor() {
    string color;
    // TODO 


    return color;
}


int main() {

    r = arrayAllocator();
    g = arrayAllocator();
    b = arrayAllocator();
    /**
     * Able to use these 2D array
     * access (n, m)-th element by calling arr[n][m]
     * each array holds the r / g / b value of each pixel
     * current value: 255 for every color & pixel
     */

    // TODO




    // END

    pixelGenerator(r, g, b);
    return 0;
}