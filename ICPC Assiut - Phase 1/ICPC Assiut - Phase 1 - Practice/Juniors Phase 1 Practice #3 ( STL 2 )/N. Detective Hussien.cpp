#include <bits/stdc++.h>
using namespace std;

void Fun(int n, vector<string>& v) {

	map<string, int> mp;
	int counter = 0;
	string cmd;

	while (n--) {
		cin >> cmd;
		if (cmd == "define") {
			cin >> cmd;
			mp[cmd] = counter++;
			v.push_back("define" + to_string(counter));
		}
		else if (cmd == "read") {
			cin >> cmd;
			v.push_back("read" + to_string(mp[cmd]));
		}
		else if (cmd == "print") {
			cin >> cmd;
			v.push_back("print" + to_string(mp[cmd]));
		}
		else {

			string s1 = cmd.substr(0, cmd.find("="));
			cmd.erase(0, cmd.find("=") + 1);
			string s2 = cmd.substr(0, cmd.find("+"));
			cmd.erase(0, cmd.find("+") + 1);
			string s3 = cmd;

			v.push_back(to_string(mp[s1]) + to_string(mp[s2]) + to_string(mp[s3]));
		}
	}
}

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n, m;
	vector<string> v1, v2;

	cin >> n;
	Fun(n, v1);

	cin >> m;
	Fun(m, v2);

	cout << (v1 == v2 ? "YES" : "NO");

	return 0;
}