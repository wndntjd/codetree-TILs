#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int sum = 0;
    int i;
    for (i=0; i<10; ++i) {
        int k; cin >> k;
        if( k >= 250 ) break;
        sum += k;
    }
    cout << sum << ' ' << round((float)sum/i*10)/10;
    return 0;
}