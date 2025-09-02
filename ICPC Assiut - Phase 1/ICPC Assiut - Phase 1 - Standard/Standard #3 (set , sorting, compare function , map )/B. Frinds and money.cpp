#include <iostream>
#include <map>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	map <string, long long> mp;

	int n, q, x;
	string s;
	cin >> n >> q;

	while (n--) {
		cin >> s >> x;
		mp[s] += x;
	}

	while (q--) {
		cin >> x >> s;
		if (x == 1) {
			cin >> x;
			mp[s] += x;
		}
		else {
			cout << mp[s] << '\n';
		}
	}

	return 0;
}
