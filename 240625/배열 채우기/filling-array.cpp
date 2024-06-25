#include <iostream>
#include <stack>
using namespace std;
int main() {
    stack<int> s;
    for (int i=0; i<10; i++) {
        int k; cin >> k;
        if( k == 0 ) break;
        s.push(k);
    }

    while (!s.empty()) {
        cout << s.top() << ' ';
        s.pop();
    }
    return 0;
}