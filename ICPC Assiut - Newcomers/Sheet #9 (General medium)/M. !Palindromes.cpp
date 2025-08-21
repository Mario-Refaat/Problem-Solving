#include <iostream>
using namespace std;

bool isSameChar(string s) {

	for (int i = 0; i < s.size(); i++) {
		if (s[i] != s[0])
			return false;
	}
	return true;
}

bool isPalindrome(string s) {

	for (int i = 0; i < s.size() / 2; i++) {
		if (s[i] != s[s.size() - i - 1])
			return false;
	}
	return true;
}

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	string s;
	cin >> s;

	cout << (isSameChar(s) ? 0 : (isPalindrome(s) ? s.size() - 1 : s.size()));

	return 0;
}
