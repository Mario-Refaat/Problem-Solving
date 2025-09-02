#include <bits/stdc++.h>
using namespace std;

int main()
{

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int t = 1;
	//cin >> t;

	while (t--) {

		int n;
		cin >> n;

		vector<int>v(n + 2, 0), pref(n + 2, 0), suff(n + 2, 0);
		for (int i = 1; i <= n; i++) cin >> v[i];
		for (int i = 1; i <= n; i++) pref[i] = max(v[i], pref[i - 1]);
		for (int i = n; i >= 1; i--) suff[i] = max(v[i], suff[i + 1]);

		for (int i = 1; i <= n; i++) {
			if (v[i] >= pref[i] && v[i] >= suff[i]) cout << "both\n";
			else if (v[i] >= pref[i])  cout << "left\n";
			else if (v[i] >= suff[i])  cout << "right\n";
			else cout << "none\n";
		}

	}

	return 0;
}
