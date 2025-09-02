#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int w, h;
        cin >> w >> h;

        if (w == h)
            cout << "Square\n";
        else
            cout << "Rectangle\n";
    }

    return 0;
}
