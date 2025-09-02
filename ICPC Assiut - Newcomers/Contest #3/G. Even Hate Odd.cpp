#include <iostream>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {

        int n, x, even = 0, odd = 0;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (x % 2 == 0)
                even++;
            else
                odd++;
        }

        if (n % 2 != 0)
            cout << -1 << " ";
        else
            cout << abs(even - odd) / 2 << "\n";
    }

    return 0;
}
