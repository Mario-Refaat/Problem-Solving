#include <iostream>
using namespace std;

int prefeven[200001], prefodd[200001];

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n, x, res = 0;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> x;
		if (i % 2) prefodd[i] = x;
		else prefeven[i] = x;
		prefeven[i] += prefeven[i - 1];
		prefodd[i] += prefodd[i - 1];
	}

	for (int i = 1; i <= n; i++) {
		int odd = prefodd[i - 1];
		int even = prefeven[i - 1];
		odd += prefeven[n] - prefeven[i];
		even += prefodd[n] - prefodd[i];
		if (odd == even) res++;
	}

	cout << res;

	return 0;
}