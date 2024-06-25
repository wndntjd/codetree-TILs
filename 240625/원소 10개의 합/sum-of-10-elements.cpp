#include <iostream>
using namespace std;
int main() {
    int sum = 0;
    int n;
    for (int i=0; i<10; i++) {
        cin >> n;
        sum += n;
    }
    cout << sum;
    return 0;
}