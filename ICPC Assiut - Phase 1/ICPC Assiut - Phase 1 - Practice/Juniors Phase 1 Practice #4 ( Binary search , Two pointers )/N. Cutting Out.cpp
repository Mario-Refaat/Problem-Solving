#include <bits/stdc++.h>
using namespace std;

bool can(vector<int>& freq, int k, int copies) {

	int counter = 0;
	for (auto& e : freq) counter += e / copies;

	return counter >= k;
}

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n, k, x;
	cin >> n >> k;

	vector<int>freq(2e5 + 2, 0), have;
	for (int i = 0; i < n; i++) { cin >> x; freq[x]++; }

	int l = 1, r = 2e5, ans;
	while (l <= r) {
		int mid = l + (r - l) / 2;
		if (can(freq, k, mid)) ans = mid, l = mid + 1;
		else r = mid - 1;
	}

	for (int i = 0; i <= 2e5 && k; i++) {
		for (int j = 0; j < freq[i] / ans && k; j++) {
			cout << i << " ";
			k--;
		}
	}

	return 0;
}