#include <bits/stdc++.h>
using namespace std;

bool IsPrime(long long num) {

	for (long long i = 2; i * i <= num; i++) {
		if (num % i == 0) return false;
	}

	return num >= 2;
}

bool c(pair<long long, string> a, pair<long long, string> b) {
	if (a.first == b.first) return a.second > b.second;
	return a.first < b.first;
}

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int t = 1;
	//cin >> t;

	while (t--) {

		long long n;
		cin >> n;

		vector<pair<long long, string>>v1, v2;
		while (n--) {
			long long x;
			string s;
			cin >> x >> s;
			if (IsPrime(x)) v1.push_back({ x,s });
			else v2.push_back({ x,s });
		}

		sort(v1.begin(), v1.end(), c);
		sort(v2.begin(), v2.end(), c);

		for (auto e : v1) cout << e.first << " " << e.second << "\n";
		for (auto e : v2) cout << e.first << " " << e.second << "\n";

	}

	return 0;
}