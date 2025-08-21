#include <bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int t = 1;
	//cin >> t;

	while (t--) {

		string s;
		cin >> s;

		int pos1, pos2, counter1 = 0, counter2 = 0;
		for (int i = 0; i < s.size(); i++)
			if (s[i] == '@') { pos1 = i; counter1++; }
			else if (s[i] == '.') { pos2 = i; counter2++; }

		cout << (counter1 == 1 && counter2 == 1 && pos1 >= 1 && pos2 > pos1 + 1 && pos2 < s.size() - 1 ? "YES" : "NO");
	}

	return 0;
}
