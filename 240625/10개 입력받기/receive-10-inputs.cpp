#include <iostream>
using namespace std;
int main() {
    cout << fixed; cout.precision(1);
    int i;
    int sum = 0;
    for (i=0; i<10; i++) {
        int k; cin >> k;
        if( k == 0 ) break;
        sum += k;
    }
    cout << sum << ' ' << (float)sum/i;
    return 0;
}