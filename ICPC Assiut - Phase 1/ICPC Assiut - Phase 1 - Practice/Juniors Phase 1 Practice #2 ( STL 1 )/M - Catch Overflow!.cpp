#include <iostream>
#include <stack>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	stack<long long>st;
	st.push(1);
	long long n, res = 0, x;
	cin >> n;

	while (n--) {

		string s;
		cin >> s;

		if (s == "for") {
			cin >> x;
			if (st.top() * x > 4294967295) st.push(4294967295 + 1);
			else st.push(st.top() * x);
		}
		else if (s == "end") st.pop();
		else {
			res += st.top();
			if (res > 4294967295) { cout << "OVERFLOW!!!"; return 0; }
		}

	}

	cout << res;

	return 0;
}