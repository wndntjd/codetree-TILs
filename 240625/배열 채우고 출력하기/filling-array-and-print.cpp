#include <iostream>
#include <stack>
using namespace std;
int main() {
    char c;
    stack<char> s;
    while (cin >> c) s.push(c);
    while (!s.empty()) {
        cout << s.top();
        s.pop();
    }
    return 0;
}