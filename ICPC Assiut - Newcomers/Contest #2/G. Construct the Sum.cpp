#include <iostream>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {

        long long n, s, sum = 0;
        cin >> n >> s;

        if (n * (n + 1) / 2 < s)
        {
            cout << -1 << "\n";
            continue;
        }

        for (long long i = n; i >= 0; i--) {
            {
                if (sum + i <= s)
                {
                    cout << i << " ";
                    sum += i;
                }
                if (sum == s)
                    break;
            }
        }

        cout << "\n";
    }

    return 0;
}
