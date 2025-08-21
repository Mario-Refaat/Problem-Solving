#include <iostream>
#include <deque>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	deque<int> dq;
	int q, x;
	cin >> q;

	while (q--) {
		string s;
		cin >> s;

		if (s == "push_back") { cin >> x; dq.push_back(x); }
		else if (s == "push_front") { cin >> x; dq.push_front(x); }
		else if (s == "pop_front") dq.pop_front();
		else if (s == "pop_back") dq.pop_back();
		else if (s == "front") cout << dq.front() << endl;
		else if (s == "back") cout << dq.back() << endl;
		else { cin >> x; cout << dq[x - 1] << endl; }

	}

	return 0;
}
