#include <iostream>
using namespace std;
int main() {
    cout << fixed;
    cout.precision(1);
    int n; cin >> n;
    float sum = 0.0;
    for (int i=0; i<n; i++) {
        float k; cin >> k;
        sum += k;
    }
    float avg = sum / n;
    cout << avg << endl;
    if( avg >= 4 ) cout << "Perfect";
    else if( avg >= 3 ) cout << "Good";
    else cout << "Poor";

    return 0;
}