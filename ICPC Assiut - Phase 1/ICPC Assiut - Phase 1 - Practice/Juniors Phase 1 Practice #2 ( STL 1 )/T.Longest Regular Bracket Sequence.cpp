#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	//"(", ")", "[", "]", "{", "}", "<" and ">" 

	string s;
	cin >> s;

	vector<pair<int, int>>res, merge;
	stack<pair<int, char>>st;

	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '(' || s[i] == '[' || s[i] == '{' || s[i] == '<') st.push({ i,s[i] });
		else if (st.empty() || (s[i] == ')' && st.top().second != '(')
			|| (s[i] == ']' && st.top().second != '[')
			|| (s[i] == '}' && st.top().second != '{')
			|| (s[i] == '>' && st.top().second != '<')) while (!st.empty()) st.pop();
		else {
			res.push_back({ st.top().first,i });
			st.pop();
		}
	}

	sort(res.begin(), res.end());

	for (int i = 0; i < res.size(); i++) {
		if (merge.empty() || merge.back().second + 1 < res[i].first) merge.push_back(res[i]);
		else if (merge.back().second + 1 == res[i].first) merge.back().second = res[i].second;
	}

	int mx = 0, counter = 1;

	for (int i = 0; i < merge.size(); i++) {
		if (mx == merge[i].second - merge[i].first) counter++;
		else if (mx < merge[i].second - merge[i].first) counter = 1;
		mx = max(mx, merge[i].second - merge[i].first);
	}

	if (mx == 0) cout << "0 1"; else cout << mx + 1 << " " << counter;

	return 0;
}