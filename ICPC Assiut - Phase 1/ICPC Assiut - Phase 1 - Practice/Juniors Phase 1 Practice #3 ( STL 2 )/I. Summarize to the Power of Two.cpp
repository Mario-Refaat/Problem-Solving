#include <iostream>
#include <cmath>
#include <map>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	map<int, int> mp;
	int n, x, res = 0;
	cin >> n;

	for (int i = 0; i < n; i++) { cin >> x; mp[x]++; }

	for (auto& e : mp) {
		if (e.second == 0) continue;
		for (int i = 1; i <= 31; i++) {
			int need = pow(2, i) - e.first;
			if (need == e.first && e.second >= 2 || (mp[need] && need != e.first)) { res += e.second; break; }
		}
	}

	cout << n - res;

	return 0;
}