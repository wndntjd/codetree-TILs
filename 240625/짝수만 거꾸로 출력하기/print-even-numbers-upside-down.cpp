#include <iostream>
#include <stack>
using namespace std;
int main() {
    int n; cin >> n;
    stack<int> s;
    for (int i=0; i<n; i++) {
        int k; cin >> k;
        if( k%2 == 0 ) s.push(k);
    }
    while( !s.empty() ) {
        cout << s.top() << ' ';
        s.pop();
    }
    return 0;
}