#include <iostream>
#include <stack>
#include <set>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	stack<string> st;
	set<string> se;
	string s;

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) { cin >> s; st.push(s); }

	for (int i = 0; i < n; i++) {

		if (se.find(st.top()) == se.end())
			cout << st.top() << '\n';

		se.insert(st.top());
		st.pop();
	}

	return 0;
}
