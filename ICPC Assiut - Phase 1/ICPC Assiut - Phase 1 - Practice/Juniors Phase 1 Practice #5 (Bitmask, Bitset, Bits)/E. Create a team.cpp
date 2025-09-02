#include <bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;

	vector<vector<char>>v(n, vector<char>(n));
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> v[i][j];

	vector<int>res;
	for (int mask = 0; mask < (1 << n); mask++) {

		bool flag = true;
		vector<int>sub;

		for (int i = 0; i < n; i++)
			if (mask & (1 << i))
				sub.push_back(i);

		for (int i = 0; i < sub.size() && flag; i++) {
			for (int j = 0; j < sub.size(); j++)
				if (v[sub[j]][sub[i]] == '0')
					flag = false;
		}

		if (flag && sub.size() > res.size())
			res = sub;
	}

	cout << res.size() << "\n";
	for (auto e : res) cout << e + 1 << " ";

	return 0;
}