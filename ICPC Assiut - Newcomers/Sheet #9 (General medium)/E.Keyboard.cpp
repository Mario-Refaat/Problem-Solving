#include <iostream>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./", s, shift;
	cin >> shift >> s;

	for (int i = 0; i < s.size(); i++) {

		if (shift == "R")
			cout << keyboard[keyboard.find(s[i]) - 1];
		else
			cout << keyboard[keyboard.find(s[i]) + 1];

	}

	return 0;
}
