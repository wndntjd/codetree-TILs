#include <iostream>
using namespace std;
int main() {
    cout << fixed; cout.precision(1);
    int sum = 0;
    int sum2 = 0;
    bool even = false;
    for (int i=0; i<10; i++) {
        int k; cin >> k;
        if( even ) sum += k;
        even = !even;
        if( i%3 == 2 ) sum2 += k; 
    }
    cout << sum << ' ' << (float)sum2/3;
    return 0;
}