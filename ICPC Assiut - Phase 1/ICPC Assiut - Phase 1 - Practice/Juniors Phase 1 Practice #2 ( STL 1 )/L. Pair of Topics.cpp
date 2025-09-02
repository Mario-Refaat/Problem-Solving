#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	long long n, res = 0, x;
	cin >> n;
	vector<long long>v;

	for (int i = 0; i < n; i++) { cin >> x; v.push_back(x); }
	for (int i = 0; i < n; i++) { cin >> x; v[i] -= x; }

	sort(v.begin(), v.end());

	for (int i = 0; i < n - 1; i++) {
		res += n - (upper_bound(v.begin() + i + 1, v.end(), -v[i]) - v.begin());
	}

	cout << res;

	return 0;
}