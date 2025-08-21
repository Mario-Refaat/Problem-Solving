#include <iostream>
#include <vector>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int freq[101] = { 0 }, n, k, x;
	cin >> n >> k;
	vector<int>v;

	for (int i = 0; i < n; i++) {
		cin >> x;
		if (freq[x] == 0) v.push_back(i + 1);
		freq[x]++;
	}

	if (v.size() < k) {
		cout << "NO"; return 0;
	}

	cout << "YES\n";
	for (int i = 0; i < k; i++) cout << v[i] << " ";

	return 0;
}