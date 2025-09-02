#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, k, m;
    cin >> n >> k >> m;

    map<string, int>mp;
    vector<string> words(n + 1);
    vector<int> costs(n + 1);

    for (int i = 1; i <= n; i++)cin >> words[i];
    for (int i = 1; i <= n; i++)cin >> costs[i];

    while (k--) {

        int x, mn = INT_MAX;
        cin >> x;

        vector<int> v(x + 1);

        for (int i = 1; i <= x; i++) {
            cin >> v[i];
            if (mn > costs[v[i]]) mn = costs[v[i]];
        }

        for (int i = 1; i <= x; i++) {
            mp[words[v[i]]] = mn;
        }

    }

    long long res = 0;
    while (m--) {
        string s;
        cin >> s;
        res += mp[s];
    }

    cout << res;

    return 0;
}