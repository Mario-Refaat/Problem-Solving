#include <iostream>
#include <queue>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	priority_queue<int> pq;
	int q, x;
	cin >> q;

	while (q--) {
		string s;
		cin >> s;

		if (s == "push") { cin >> x; pq.push(x); }
		else if (s == "pop") pq.pop();
		else cout << pq.top() << endl;

	}

	return 0;
}
