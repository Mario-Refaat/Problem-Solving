#include <iostream>
#include <deque>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	string s;

	while (cin >> s) {

		deque<char> dq;
		auto it = dq.begin();

		for (int i = 0; i < s.size(); i++) {

			if (s[i] == '[') it = dq.begin();
			else if (s[i] == ']') it = dq.end();
			else
				it = dq.insert(it, s[i]) + 1;
		}

		for (char& c : dq) cout << c;
		cout << '\n';
	}

	return 0;
}
