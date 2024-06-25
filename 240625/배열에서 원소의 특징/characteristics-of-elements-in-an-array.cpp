#include <iostream>
using namespace std;
int main() {
    int n = 0;
    for (int i=0; i<10; i++) {
        int k; cin >> k;
        if( k%3 == 0 ) {
            cout << n;
            break;
        }
        n = k;
    }
    return 0;
}