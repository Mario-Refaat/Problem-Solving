#include <iostream>
using namespace std;

int main() {

    long long n;
    cin >> n;

    cout << n / 4 << " "; //get row

    if ((n / 4) % 2 == 0) // get column depend on row
        cout << n % 4;     // if row is even number
    else
        cout << 3 - n % 4; // if row odd number

    return 0;
}
