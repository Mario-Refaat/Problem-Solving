#include <bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int t = 1;
	//cin >> t;

	while (t--) {

		long long n, x;
		cin >> n;

		stack<long long>st;

		while (n--) {
			cin >> x;
			if (x == 1) {
				cin >> x;
				if (st.empty() || st.top() <= x)st.push(x);
				else st.push(st.top());
			}
			else st.pop();

			cout << st.top() << endl;
		}

	}

	return 0;
}
