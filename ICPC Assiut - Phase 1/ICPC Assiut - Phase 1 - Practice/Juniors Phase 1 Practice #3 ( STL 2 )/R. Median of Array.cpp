#include <bits/stdc++.h>
using namespace std;

long long md = 1e9 + 7;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int t = 1;
	cin >> t;

	while (t--) {

		long long a, b, c, n, sum = 1;
		cin >> a >> b >> c >> n;

		priority_queue<int>mx;
		priority_queue<int, vector<int>, greater<>>mn;

		mx.push(1);

		for (int i = 2; i <= n; i++) {

			long long num = (a * mx.top() + b * i + c) % md;
			sum += num;

			if (num > mx.top())
				mn.push(num);
			else
				mx.push(num);

			if (mn.size() > mx.size()) {
				mx.push(mn.top());
				mn.pop();
			}
			else if (mn.size() < mx.size() - 1) {
				mn.push(mx.top());
				mx.pop();
			}
		}

		cout << sum << "\n";
	}

	return 0;
}
