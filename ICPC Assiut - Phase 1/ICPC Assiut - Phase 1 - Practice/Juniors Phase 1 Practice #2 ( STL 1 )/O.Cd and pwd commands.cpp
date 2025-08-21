#include <iostream>
#include <vector>
using namespace std;

void Update(vector<string>& v, string& s) {

	if (s[0] == '/') v.clear();

	string ss = "";

	for (int i = 0; i < s.size(); i++) {
		if (s[i] != '/') ss.push_back(s[i]);
		else {
			if (ss == "..") v.erase(v.end() - 1);
			else if (ss != "") v.push_back(ss);
			ss = "";
		}
	}

	if (ss == "..") v.erase(v.end() - 1);
	else if (ss != "") v.push_back(ss);

}

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;

	vector<string> v;

	while (n--) {
		string command;
		cin >> command;

		if (command == "cd") {
			cin >> command;
			Update(v, command);
		}
		else {
			cout << "/";
			for (string& s : v) {
				cout << s << "/";
			}
			cout << '\n';
		}
	}

	return 0;
}