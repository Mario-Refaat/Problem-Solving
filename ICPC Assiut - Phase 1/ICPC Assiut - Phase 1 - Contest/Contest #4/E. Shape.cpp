#include <bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int t = 1;
	//cin >> t;

	while (t--) {

		int n;
		cin >> n;

		vector<string>res;

		for (int i = 1; i <= n / 2; i++) {
			string s;
			for (int j = 1; j <= i; j++) s += '*';
			for (int j = i + 1; j <= n - i; j++) s += ' ';
			for (int j = 1; j <= i; j++) s += '*';
			res.push_back(s);
		}

		for (auto e : res) cout << e << '\n';
		for (int i = 1; i <= n; i++)cout << '*'; cout << '\n';
		for (int i = res.size() - 1; i >= 0; i--) cout << res[i] << '\n';


	}

	return 0;
}