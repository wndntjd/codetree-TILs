#include <iostream>
using namespace std;
int main() {
    int n; cin >> n;
    int count = 0;
    for (int i=0; i<n; i++) {
        int s = 0;
        for (int i=0; i<4; i++) {
            int m; cin >> m;
            s += m;
        }
        if( s >= 240 ) {
            cout << "pass" << endl;
            count ++;
        }
        else cout << "fail" << endl;
    }
    cout << count;
    return 0;
}