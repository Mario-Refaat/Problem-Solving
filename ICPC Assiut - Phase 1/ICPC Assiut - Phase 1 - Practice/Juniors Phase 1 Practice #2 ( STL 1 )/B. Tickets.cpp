#include <iostream>
#include <queue>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	queue<int>q;
	int n, a, b;
	cin >> n;

	while (n--) {
		cin >> a >> b;
		if (a == 1) q.push(b);
		else {
			cout << (b == q.front() ? "Yes\n" : "No\n");
			q.pop();
		}
	}

	return 0;
}
