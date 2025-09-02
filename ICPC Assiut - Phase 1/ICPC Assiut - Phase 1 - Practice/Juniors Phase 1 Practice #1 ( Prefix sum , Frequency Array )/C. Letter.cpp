#include <iostream>
#include <string>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int freq['z' + 1] = { 0 };
	string s1, s2;

	getline(cin, s1);
	getline(cin, s2);

	for (char c : s1) if (c != ' ')freq[c]++;

	for (char c : s2) {
		if (c != ' ' && freq[c]) freq[c]--;
		else if (c != ' ') {
			cout << "NO";
			return 0;
		}
	}

	cout << "YES";

	return 0;
}