#include <bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t = 1;
    //cin >> t;

    while (t--) {

        int n;
        cin >> n;

        vector<pair<int, int>> v(n);
        vector<long long> levels(n), costs(n);

        for (int i = 0; i < n; i++) cin >> levels[i];
        for (int i = 0; i < n; i++) cin >> costs[i], v[i] = { levels[i], costs[i] };

        sort(v.begin(), v.end());

        long long total = 0;
        for (int i = 0; i < n; i++) total += v[i].second;

        long long half = (total) / 2;
        long long curr = 0, median = 0;

        for (int i = 0; i < n; i++) {
            curr += v[i].second;
            if (curr >= half) {
                median = v[i].first;
                break;
            }
        }

        long long res = 0;
        for (int i = 0; i < n; i++) {
            res += 1LL * abs(v[i].first - median) * v[i].second;
        }

        cout << res << "\n";
    }

    return 0;
}