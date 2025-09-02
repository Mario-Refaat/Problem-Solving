#include <iostream>
#include <stack>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	int arr[1000001] = { 0 }, n, q, x;
	stack <pair<int, int>>st;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> x;

		while (!st.empty()) {
			if (x > st.top().first)
			{
				arr[st.top().second] = i;
				st.pop();
			}
			else
				break;
		}

		st.push({ x,i });
	}

	cin >> q;

	for (int i = 1; i <= q; i++) {
		cin >> x;
		cout << (arr[x] ? arr[x] : -1) << '\n';
	}

	return 0;
}
