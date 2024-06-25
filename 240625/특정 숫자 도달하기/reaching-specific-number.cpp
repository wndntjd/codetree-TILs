#include <iostream>
#include <cmath>
using namespace std;
int main() {
    cout << fixed;
    cout.precision(1);
    int sum = 0;
    int i;
    for (i=0; i<10; ++i) {
        int k; cin >> k;
        if( k >= 250 ) break;
        sum += k;
    }
    cout << sum << ' ' << (float)round((float)sum/i*10)/10;
    return 0;
}