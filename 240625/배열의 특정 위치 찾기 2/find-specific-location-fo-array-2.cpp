#include <iostream>
using namespace std;
int main() {
    int sum = 0;
    bool even = false;
    for (int i=0; i<10; i++) {
        int n; cin >> n;
        if( even ) sum += n;
        else sum -= n;
        even = !even;
    }
    cout << abs(sum);
    return 0;
}