#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int t = 1;
	cin >> t;

	while (t--) {

		long long n , res = 0;
		cin >> n;
		vector<int>v(n), prev(n, 0), next(n, n - 1);
		stack<int>st1,st2;

		for (int i = 0; i < n; i++) cin >> v[i];

		for (int i = 0; i < n; i++) { // get next smaller index for each index
			while (!st1.empty() && v[st1.top()] > v[i]) {
				next[st1.top()] = i-1;
				st1.pop();
			}
			st1.push(i);
		}

		for (int i = n - 1; i >= 0;i--) { // get prev smaller index for each index
			while (!st2.empty() && v[st2.top()] > v[i]) {
				prev[st2.top()] = i+1;
				st2.pop();
			}
			st2.push(i);
		}
		
		for (int i = 0; i < n; i++) {
			long long n = (i - prev[i]) + (next[i] - i) + 1;
			res = max(res, n * (long long)v[i]);
		}

		cout << res << '\n';
	}

	return 0;
}