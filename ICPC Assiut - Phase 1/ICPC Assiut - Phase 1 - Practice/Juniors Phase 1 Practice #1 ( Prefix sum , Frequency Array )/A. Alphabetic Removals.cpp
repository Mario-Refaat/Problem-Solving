#include <iostream>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int freq[26] = { 0 }, n, k, pos;
	string s;
	cin >> n >> k >> s;

	for (char c : s) freq[c - 'a']++;

	char i = 'a';

	for (; i <= 'z'; i++) {
		if (k >= freq[i - 'a']) k -= freq[i - 'a'];
		else break;
	}

	for (char c : s) {

		if (c > i || (c == i && k == 0)) cout << c;
		else if (c == i && k) k--; //check if still char should skip

	}

	return 0;
}