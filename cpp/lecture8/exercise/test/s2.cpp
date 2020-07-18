#include <iostream>

using namespace std;

#include "../src/tStack.h"

int main() {
    tStack<int> s;
    for(int i = 0; i < 2000; i++) {
        s.push(i);
    }
    cout << s.size() << endl;
    cout << s.top() << endl;
    for(int i = 0; i < 500; i++) {
        s.pop();
    }
    cout << s.size() << endl;
    cout << s.top() << endl;
}