#include <iostream>

using namespace std;

#include "../src/tVector.h"

int main() {
    tVector<int> v;
    for(int i = 0; i < 1000; i++) {
        v.push_back(i);
    }
    cout << v.size() << endl;
    cout << v.front() << endl;
    for(int i = 0; i < 500; i++) {
        cout << v.back() << endl;
        v.pop_back();
    }
    cout << v.size() << endl;
}