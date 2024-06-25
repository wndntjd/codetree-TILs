#include <iostream>
using namespace std;
int main() {
    for (int i=0; i<10; i++) {
        char c; cin >> c;
        if( i==1 || i==4 || i==7 ) cout << c << ' ';
    }
    return 0;
}