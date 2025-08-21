#include <iostream>
#include <stack>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int t = 1;
	cin >> t;

	while (t--) {

		int arr[1002], n, counter = 1, f = 0;
		cin >> n;

		for (int i = 1; i <= n; i++) cin >> arr[i];

		stack<int> st;

		for (int i = 1; i <= n; i++) {

			st.push(arr[i]);

			while (!st.empty() && st.top() == counter) {
				st.pop();
				counter++;
			}

		}

		cout << (st.empty() ? "YES\n" : "NO\n");

	}

	return 0;
}