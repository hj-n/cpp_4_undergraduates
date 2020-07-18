#include <iostream>

using namespace std;

#include <vector>

int main() {
    vector<int> v;
    for(int i = 0; i < 1000; i++) {
        v.push_back(i);
    }
    for(int i = 0; i < 1000; i++) {
        cout << v.back() << endl;
        v.pop_back();
    }
}