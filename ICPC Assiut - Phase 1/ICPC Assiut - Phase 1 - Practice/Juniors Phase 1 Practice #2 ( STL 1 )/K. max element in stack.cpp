#include <iostream>
#include <stack>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	stack<long long>st;
	long long n, x;
	cin >> n;

	while (n--) {
		cin >> x;

		if (x == 1) {
			cin >> x;
			if (st.empty()) st.push(x);
			else st.push(max(st.top(), x));
		}
		else {
			st.pop();
		}
		cout << st.top() << '\n';
	}

	return 0;
}