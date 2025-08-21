#include <bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, res = 0;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    for (int mask = 0; mask < (1 << n); mask++) {
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (mask & (1 << i))
                if (v[i] % 2)cnt--;
                else cnt++;
        }
        res += cnt > 0;
    }

    cout << res;

    return 0;
}