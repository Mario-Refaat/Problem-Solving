#include <bits/stdc++.h>
using namespace std;

bool can(long long v, long long n, long long k) {

	long long curr = 0;
	for (int i = 0;; i++) {
		long long num = v / (long long)pow(k, i);
		if (num == 0 || curr >= n) break;
		curr += num;
	}

	return curr >= n;
}

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n, k;
	cin >> n >> k;

	long long l = 1, r = 1e9, ans;
	while (l <= r) {

		long long mid = l + (r - l) / 2;
		if (can(mid, n, k)) ans = mid, r = mid - 1;
		else l = mid + 1;

	}

	cout << ans;

	return 0;
}