#include <iostream>
#include <fstream>
#include "helper.h"

using namespace std;

int** arrayAllocator() {
    int** arr = new int*[300];

    for(int i = 0; i < 300; i++) arr[i] = new int[250];
    for(int i = 0; i < 300; i++){
        for(int j = 0; j < 250; j++) 
            arr[i][j] = 0;
    }
    return arr;

}

void pixelGenerator(int** r, int** g, int** b, int** a){
    ofstream out("picture.txt");

    for(int i = 0; i < 300; i++) {
        for(int j = 0; j < 250; j++) {
            out << r[i][j] << " " << g[i][j] << " " << b[i][j] << " " << a[i][j] << endl;
        }
    }

}


