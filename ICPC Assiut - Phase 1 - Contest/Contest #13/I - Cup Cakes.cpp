#include <bits/stdc++.h>
using namespace std;

vector<long long>getDivisors(long long num) {

	vector<long long>divs;

	for (long long i = 1; i * i <= num; i++) {
		if (num % i == 0 && i * i == num) divs.push_back(i);
		else if (num % i == 0) { divs.push_back(i); divs.push_back(num / i); }
	}

	return divs;
}


int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int t = 1;
	//cin >> t;

	while (t--) {

		long long n, q, x;
		cin >> n >> q;

		vector<long long>v = getDivisors(n);
		sort(v.begin(), v.end());

		while (q--) {
			cin >> x;
			cout << v[upper_bound(v.begin(), v.end(), x) - v.begin() - 1] << "\n";
		}

	}

	return 0;
}