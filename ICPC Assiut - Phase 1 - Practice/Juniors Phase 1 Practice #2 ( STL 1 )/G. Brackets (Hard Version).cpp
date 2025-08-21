#include <iostream>
#include <stack>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	string s;
	cin >> s;

	stack<char>st;

	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '{' || s[i] == '[' || s[i] == '(') st.push(s[i]);
		else if (st.empty() ||
			(st.top() == '(' && s[i] != ')') ||
			(st.top() == '{' && s[i] != '}') ||
			(st.top() == '[' && s[i] != ']')) {
			cout << "no"; return 0;
		}
		else st.pop();
	}

	cout << (st.empty() ? "yes" : "no");

	return 0;
}