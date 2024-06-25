#include <iostream>
using namespace std;
int main() {
    int n = 0; int sum = 0;
    for (int i=0; i<10; i++) {
        int k; cin >> k;
        if( k == 0 ) break;
        if( k % 2 == 0 ) {
            n++; sum += k;
        }
    }
    cout << n << ' ' << sum;
    return 0;
}