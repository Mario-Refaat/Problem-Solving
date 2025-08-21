#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool c(pair<string, int>a, pair<string, int>b) {
	if (a.second != b.second) return a.second > b.second;
	else return a.first < b.first;
}

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;
	vector<pair<string, int>> v(n);

	for (int i = 0; i < n; i++) cin >> v[i].first >> v[i].second;

	sort(v.begin(), v.end(), c);

	for (auto& e : v)
		cout << e.first << " " << e.second << endl;

	return 0;
}