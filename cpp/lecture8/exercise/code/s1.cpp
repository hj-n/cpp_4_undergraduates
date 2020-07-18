#include <iostream>

using namespace std;

#include <stack>

int main() {
    stack<int> s;
    for(int i = 0; i < 1000; i++) {
        s.push(i);
    }
    for(int i = 0; i < 1000; i++) {
        cout << s.top() << endl;
        s.pop();
    }
}