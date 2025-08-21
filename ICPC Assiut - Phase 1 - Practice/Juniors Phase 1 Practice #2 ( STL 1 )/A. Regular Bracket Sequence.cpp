#include <iostream>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	string s;
	cin >> s;

	int curr = 0, res = 0;

	for (int i = 0; i < s.size(); i++) {
		if (s[i] == ')' && curr) { res++; curr--; }
		if (s[i] == '(') curr++;
	}

	cout << res * 2;

	return 0;
}
