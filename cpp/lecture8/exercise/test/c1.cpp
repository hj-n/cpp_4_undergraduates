#include <iostream>

using namespace std;

#include "../src/tVector.h"
#include "../src/tStack.h"

int main() {
    tVector<int> v;
    tStack<int> s;
    for(int i = 0; i < 1000; i++) {
        v.push_back(i);
    }
    cout << v.size() << endl;
    cout << v.front() << endl;
    cout << v.back() << endl;
    for(int i = 0; i < 500; i++) {
        s.push(v.back());
        v.pop_back();
    }
    cout << v.size() << endl;
    cout << v.front() << endl;
    cout << v.back() << endl;
    cout << s.size() << endl;
    cout << s.top() << endl;
}