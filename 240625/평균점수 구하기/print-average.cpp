#include <iostream>
using namespace std;
int main() {
    cout << fixed;
    cout.precision(1);
    float sum = 0.0;
    for (int i=0; i<8; i++) {
        float k; cin >> k;
        sum += k;
    }
    cout << sum/8;
    return 0;
}