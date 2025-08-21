#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <map>
using namespace std;

bool c(pair<string, int>a, pair<string, int>b) {
	if (a.second != b.second) return a.second > b.second;
	else return a.first < b.first;
}

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	map<string, int> mp;
	int n;
	cin >> n;

	while (n--) {
		int x, points = 1000;
		cin >> x;

		while (x--) {
			string name;
			cin >> name;
			mp[name] += points;
			points = round(points * 0.9);
		}
	}

	vector<pair<string, int>> v(mp.begin(), mp.end());
	sort(v.begin(), v.end(), c);

	cout << v[0].first << endl;

	for (pair<string, int>& e : v) {
		cout << e.first << " " << e.second << '\n';
	}

	return 0;
}