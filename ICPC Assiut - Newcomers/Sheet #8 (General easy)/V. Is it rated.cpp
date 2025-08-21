#include <iostream>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	bool flag = true;
	int n, max = INT_MAX;

	cin >> n;

	while (n--) {
		int x, y;
		cin >> x >> y;
		if (x != y) {
			cout << "rated";
			return 0;
		}
		if (x > max)
			flag = false;
		max = x;
	}

	if (flag)
		cout << "maybe";
	else
		cout << "unrated";

	return 0;
}
