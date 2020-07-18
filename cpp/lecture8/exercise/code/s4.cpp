#include <iostream>

using namespace std;

#include <stack>
#include <string>

int main() {
    stack<string> s;
    s.push("a");
    cout << s.top() << endl;
    s.push("ab");
    s.push("abc");
    cout << s.top() << endl;
    s.pop();
    s.pop();
    cout << s.top() << endl;
    s.push("hello");
    s.push("world");
    cout << s.top() << endl;
}