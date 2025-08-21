#include <bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int t = 1;
	cin >> t;

	while (t--) {

		long long  n, x;
		cin >> n;

		vector<string>v(n);
		for (int i = 0; i < n; i++)cin >> v[i];

		map<int, char>mp;
		for (char i = 'a'; i <= 'z'; i++) {
			cin >> x;
			mp[x] = i;
		}

		for (int i = 0; i < n; i++) {
			map<char, int>mp2;
			for (auto& e : v[i]) {
				if (e >= 'a' && e <= 'z') continue;
				else mp2[e]++;
			}
			for (auto& e : v[i]) {
				if (e >= 'a' && e <= 'z') cout << e;
				else cout << mp[mp2[e]];
			}
			cout << "\n";
		}
	}

	return 0;
}