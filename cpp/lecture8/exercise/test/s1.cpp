#include <iostream>

using namespace std;

#include "../src/tStack.h"

int main() {
    tStack<int> s;
    for(int i = 0; i < 1000; i++) {
        s.push(i);
    }
    for(int i = 0; i < 1000; i++) {
        cout << s.top() << endl;
        s.pop();
    }
}