#include <bits/stdc++.h>
using namespace std;

void solve() {

    vector<int> v(10);
    int cnt = 0;
    for (int i = 0; i < 10; i++)cin >> v[i], cnt += v[i];
    if (cnt == v[0]) {
        cout << "0\n";
        return;
    }

    bool ok = 0;
    string mn = "*";

    for (int i = 0; i <= 9; i++) {
        if (v[i]) {
            v[i]--;
            for (int j = 0; j <= 9; j++) {
                if (v[j]) {
                    v[j]--;
                    int x = i * 10 + j;
                    string sub;
                    if (x % 4 == 0) {
                        ok = 1;
                        for (int k = 9; k >= 0; k--) {
                            int c = v[k];
                            while (c--)sub += char(k + 48);
                        }
                        sub += char(i + 48);
                        sub += char(j + 48);
                        if (mn == "*")mn = sub;
                        else mn = max(mn, sub);
                    }
                    v[j]++;
                }
            }
            v[i]++;
        }
    }

    if (ok) {
        cout << mn << '\n';
        return;
    }

    for (int i = 9; i >= 0; i--) {
        if (v[i] && i % 4 == 0) {
            cout << i << '\n';
            return;
        }
    }

    cout << "-1\n";
}

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t = 1;
    cin >> t;

    while (t--) {

        solve();

    }

    return 0;
}