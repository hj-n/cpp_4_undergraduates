#include <iostream>

using namespace std;

#include <vector>

int main() {
    vector<int> v;
    for(int i = 0; i < 1000; i++) {
        v.push_back(i);
    }
    cout << v.size() << endl;
    
    v.resize(300);
    cout << v.size() << endl;
    for(int i = 0; i < 300; i++) {
        cout << v.back() << endl;
        v.pop_back();
    }
}