#include <iostream>
#include <map>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	map<string, int>mp;
	string s, t;
	cin >> s;

	for (int i = 0; i <= 9; i++) { cin >> t; mp[t] = i; }

	for (int i = 1; i <= 8; i++) { cout << mp[s.substr(0, 10)]; s.erase(0, 10); }

	return 0;
}
