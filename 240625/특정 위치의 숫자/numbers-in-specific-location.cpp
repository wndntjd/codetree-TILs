#include <iostream>
using namespace std;
int main() {
    int sum = 0;
    for (int i=0; i<10; i++) {
        int k; cin >> k;
        if( i==2 || i==4 || i==9 ) sum += k;
    }
    cout << sum;
    return 0;
}