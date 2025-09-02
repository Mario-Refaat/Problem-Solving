#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	deque<int> dq;
	int n, x;
	cin >> n;

	while (n--) {
		string s;
		cin >> s;

		if (s == "toFront") {
			cin >> x;
			dq.push_front(x);
		}
		else if (s == "push_back") {
			cin >> x;
			dq.push_back(x);
		}
		else if (s == "back") {
			if (dq.empty()) cout << "No job for Ada?\n";
			else {
				cout << dq.back() << endl;
				dq.pop_back();
			}
		}
		else if (s == "front") {
			if (dq.empty()) cout << "No job for Ada?\n";
			else {
				cout << dq.front() << endl;
				dq.pop_front();
			}
		}
		else {
			reverse(dq.begin(), dq.end());
		}
	}


	return 0;
}