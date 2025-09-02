#include <iostream>
#include <deque>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	string s;
	cin >> s;

	deque<char>dq;

	for (int i = 0; i < s.size(); i++) {
		if (dq.empty() || s[i] != dq.back())dq.push_back(s[i]);
		else dq.pop_back();
	}

	for (int i = 0; i < dq.size(); i++) cout << dq[i];

	return 0;
}
