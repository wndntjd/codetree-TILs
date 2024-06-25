#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n = 10;
    int sum = 0;
    int i = 0;
    for (i ; i<10; i++) {
        int k; cin >> k;
        if( k >= 250 ) break;
        sum += k;
    }
    cout << sum << ' ' << round((float)sum/i*10)/10;
    return 0;
}