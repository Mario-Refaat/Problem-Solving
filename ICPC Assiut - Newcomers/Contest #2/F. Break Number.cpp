#include <iostream>
using namespace std;

int main() {

    long long t, x, maxdivision = 0;
    cin >> t;

    while (t--) {
        cin >> x;
        long long counter = 0;
        while (x % 2 == 0) {
            counter++;
            x /= 2;
        }
        if (counter > maxdivision)
            maxdivision = counter;
    }
    cout << maxdivision;
    return 0;
}
