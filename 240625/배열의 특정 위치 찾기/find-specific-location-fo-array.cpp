#include <iostream>
using namespace std;
int main() {
    cout << fixed; cout.precision(1);
    int sum = 0;
    bool even = false;
    for (int i=0; i<10; i++) {
        int k; cin >> k;
        if( even ) sum += k;
        even = !even;
    }
    cout << sum << ' ' << (float)sum/5;
    return 0;
}