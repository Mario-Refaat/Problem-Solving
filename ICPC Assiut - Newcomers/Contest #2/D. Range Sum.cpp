#include <iostream>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        long long a, b;
        cin >> a >> b;

        if (a > b)
            swap(a, b);

        cout << (b + 1) * b / 2 - (a - 1) * a / 2 << "\n";
    }

    return 0;
}
