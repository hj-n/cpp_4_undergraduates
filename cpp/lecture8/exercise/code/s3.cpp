#include <iostream>

using namespace std;

#include <stack>

int main() {
    stack<int> s;
    cout << s.empty() << endl;
    cout << s.size() << endl;
    for(int i = 0; i < 20; i++) {
        s.push(i);
    }
    cout << s.empty() << endl;
    cout << s.size() << endl;
    for(int i = 0; i < 10; i++) {
        s.pop();
    }
    cout << s.empty() << endl;
    cout << s.size() << endl;
    for(int i = 0; i < 10; i++) {
        s.pop();
    }
    cout << s.empty() << endl;
    cout << s.size() << endl;
}