#include <iostream>
#include <stack>
using namespace std;
int main() {
    stack<int> s;
    int k;
    while (cin >> k) {
        if( k == 0) break;
        s.push(k);
    }
    int sum = 0;
    for (int i=0; i<3; i++) {
        sum += s.top();
        s.pop();
    }
    cout << sum;
    return 0;
}