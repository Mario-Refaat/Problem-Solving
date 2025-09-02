#include <iostream>
#include <queue>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	queue<int> qu;
	int q, x;
	cin >> q;

	while (q--) {
		string s;
		cin >> s;

		if (s == "push") { cin >> x; qu.push(x); }
		else if (s == "pop") qu.pop();
		else if (s == "front") cout << qu.front() << endl;
		else cout << qu.back() << endl;

	}

	return 0;
}
