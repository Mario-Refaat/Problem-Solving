#include <iostream>
#include <map>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	map<string, int>mp;

	int n;
	cin >> n;

	while (n--) {
		string s;
		cin >> s;
		if (mp[s] == 0) cout << "OK\n";
		else cout << s << mp[s] << '\n';
		mp[s]++;
	}

	return 0;
}
