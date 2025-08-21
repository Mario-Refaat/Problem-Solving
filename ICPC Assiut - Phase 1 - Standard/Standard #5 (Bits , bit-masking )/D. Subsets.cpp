#include <bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    vector<vector<int>> res(1 << n);
    for (int mask = 0; mask < (1 << n); mask++) {
        for (int i = 0; i < n; i++) {
            if (mask & (1 << i))
                res[mask].push_back(v[i]);
        }
    }

    sort(res.begin(), res.end());
    for (auto s : res) {
        for (auto e : s)
            cout << e << " ";
        cout << "\n";
    }

    return 0;
}