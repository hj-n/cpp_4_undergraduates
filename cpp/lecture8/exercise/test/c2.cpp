#include <iostream>

using namespace std;

#include "../src/tVector.h"
#include "../src/tStack.h"
#include <string>

int main() {
    tVector<string> v;
    tStack<string> s;
    v.push_back("a");
    v.push_back("ab");
    v.push_back("abc");
    s.push(v.back());
    v.pop_back();
    s.push(v.back());
    v.pop_back();
    v.push_back("hello");
    v.push_back("world");
    s.push(v.back());
    v.pop_back();
    s.push(v.back());
    v.pop_back();
    s.push(v.back());
    v.pop_back();
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    s.pop();
    
}