#include <iostream>
#include <chrono> 

using namespace std::chrono; 

using namespace std;

void multiplyMatrix(long long (*matrixA)[2], long long (*matrixB)[2], long long (*result)[2]) {

    long long a, b, c, d;

    a =  matrixA[0][0] * matrixB[0][0] + matrixA[0][1] * matrixB[1][0];
    b =  matrixA[0][0] * matrixB[0][1] + matrixA[0][1] * matrixB[1][1];
    c =  matrixA[1][0] * matrixB[0][0] + matrixA[1][1] * matrixB[1][0];
    d =  matrixA[1][0] * matrixB[0][1] + matrixA[1][1] * matrixB[1][1];
    
    result[0][0] =  a;
    result[0][1] =  b;
    result[1][0] =  c;
    result[1][1] =  d;

}

int main() {
    long long basicMatrix[2][2] = {{1, 1}, {1, 0}};

    long long n;
    cin >> n;
    
    //auto start = high_resolution_clock::now(); 

    long long result[2][2] = {{1, 0}, {0, 1}};

    while(n != 0) {
        if ((n & 0x1) == 1) {
            multiplyMatrix(result, basicMatrix, result);
        }
        multiplyMatrix(basicMatrix, basicMatrix, basicMatrix);
        n = n >> 1;
    }
    // auto stop = high_resolution_clock::now(); 

    cout <<  result[1][0] << endl;
    // cout << "Running time: " << (duration_cast<microseconds>(stop - start)).count() * 0.000001 << " seconds" << endl;
}