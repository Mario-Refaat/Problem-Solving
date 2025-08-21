#include <iostream>
#include <map>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	map<string, int> mp;

	int n, mx = 0;
	string s, res;
	cin >> n >> s;

	for (int i = 0; i < n - 1; i++) {
		if (++mp[s.substr(i, 2)] > mx) {
			mx = mp[s.substr(i, 2)];
			res = s.substr(i, 2);
		}
	}

	cout << res;

	return 0;
}
