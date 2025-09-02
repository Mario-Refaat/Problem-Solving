#include <iostream>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL);

    long long pref[100002] = { 0 }, n, q;
    cin >> n >> q;

    for (int i = 1; i <= n; i++)
    {
        cin >> pref[i];
        pref[i] += pref[i - 1];
    }

    while (q--) {
        int l, r;
        cin >> l >> r;
        cout << pref[r] - pref[l - 1] << "\n";
    }

    return 0;
}
