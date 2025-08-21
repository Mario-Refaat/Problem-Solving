#include <iostream>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	string s, res = "";
	cin >> s;

	int one = 0, two = 0, three = 0;

	for (int i = 0; i < s.size(); i += 2) {
		if (s[i] == '1') one++;
		else if (s[i] == '2') two++;
		else three++;
	}

	while (one--)
		res += "1+";
	while (two--)
		res += "2+";
	while (three--)
		res += "3+";

	cout << res.substr(0, res.size() - 1); // remove last '+'

	return 0;
}
