#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n, q;
	cin >> n >> q;
	vector<int> v(n + 1);

	for (int i = 1; i <= n; i++) cin >> v[i];

	string command;
	int x, y;

	while (q--) {
		cin >> command;

		if (command == "sort") {
			cin >> x >> y;
			sort(v.begin() + x, v.begin() + y + 1);
		}
		else if (command == "pop_back") {
			v.pop_back();
		}
		else if (command == "back") {
			cout << v.back() << endl;
		}
		else if (command == "reverse") {
			cin >> x >> y;
			reverse(v.begin() + x, v.begin() + y + 1);
		}
		else if (command == "front") {
			cout << v[1] << endl;
		}
		else if (command == "push_back") {
			cin >> x;
			v.push_back(x);
		}
		else {
			cin >> x;
			cout << v[x] << endl;
		}
	}

	return 0;
}
