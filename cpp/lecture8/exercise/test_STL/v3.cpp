#include <iostream>

using namespace std;

#include <vector>

int main() {
    vector<int> v;
    cout << v.empty() << endl;
    cout << v.size() << endl;
    for(int i = 0; i < 10; i++) {
        v.push_back(i);
    }
    cout << v.empty() << endl;
    cout << v.size() << endl;
    for(int i = 0; i < 5; i++) {
        v.pop_back();
    }
    cout << v.empty() << endl;
    cout << v.size() << endl;
    for(int i = 0; i < 5; i++) {
        v.pop_back();
    }
    cout << v.empty() << endl;
    cout << v.size() << endl;
}