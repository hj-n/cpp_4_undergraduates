#include <iostream>

using namespace std;

#include "../src/tVector.h"

int main() {
    tVector<int> v;
    for(int i = 0; i < 1000; i++) {
        v.push_back(i);
    }
    for(int i = 0; i < 1000; i++) {
        cout << v.back() << endl;
        v.pop_back();
    }
}