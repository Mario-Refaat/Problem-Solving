#include <iostream>
#include <stack>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	stack<string> st;
	int n;
	string s;

	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> s;
		if ((i == 1 && s != "Header") || (i == n && s != "EndHeader") || (s == "Header" && i != 1)) { cout << "WA"; return 0; }
		if (s.substr(0, 3) == "End") {
			if (st.top() != s.substr(3)) { cout << "WA"; return 0; }
			st.pop();
		}
		else {
			st.push(s);
		}
	}

	cout << "ACC";

	return 0;
}
