#include <iostream>

using namespace std;

#include "../src/tVector.h"
#include <string>

int main() {
    tVector<string> v;
    v.push_back("a");
    cout << v.front() << endl;
    cout << v.back() << endl;
    v.push_back("ab");
    v.push_back("abc");
    cout << v.front() << endl;
    cout << v.back() << endl;
    v.pop_back();
    v.pop_back();
    cout << v.front() << endl;
    cout << v.back() << endl;
    v.push_back("hello");
    v.push_back("world");
    cout << v.front() << endl;
    cout << v.back() << endl;
}