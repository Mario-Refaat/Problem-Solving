#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<char, int> a, pair<char, int> b) {
    if (a.second == b.second) {
        return a.first < b.first;
    }
    return a.second < b.second;
}

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t = 1;
    cin >> t;

    while (t--) {

        int n, x;
        string s, t;
        cin >> n >> s >> t;

        vector<pair<char, int>> vec1, vec2;

        for (int i = 0; i < n; i++) {
            cin >> x;
            vec1.push_back({ s[i], x });
            vec2.push_back({ t[i], x });
        }

        sort(vec1.begin(), vec1.end(), cmp);
        sort(vec2.begin(), vec2.end(), cmp);

        cout << (vec1 == vec2 ? "YES\n" : "NO\n");

    }

    return 0;
}