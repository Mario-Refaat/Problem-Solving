#include <iostream>
using namespace std;

int main() {

    int n, k;
    cin >> n >> k;

    int counter = 0, min = INT_MAX, x;

    while (n--) {
        cin >> x;
        counter++;

        if (x < min)
            min = x;

        if (counter == k || n == 0) {
            cout << min << " ";
            counter = 0;
            min = INT_MAX;
        }
    }

    return 0;
}
