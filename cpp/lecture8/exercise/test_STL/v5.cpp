#include <iostream>

using namespace std;

#include <vector>
#include <string>

int main() {
    vector<string> v;
    v.push_back("a");
    v.push_back("ab");
    v.push_back("abc");
    cout << v.size() << endl;
    v.resize(10);
    cout << v.size() << endl;
    v.resize(3);
    for(int i = 0; i < 3; i++) {
        cout << v.back() << endl;
        v.pop_back();
    }
    cout << v.size() << endl;
    cout << v.empty() << endl;
}