#include <bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int t = 1;
	//cin >> t;

	while (t--) {

		int freq[26] = { 0 };
		string s, res;
		cin >> s;
		for (auto e : s) freq[e - 'a']++;

		deque<char>dq;
		for (int i = 0; i < 26; i++) if (freq[i] & 1) dq.push_back(i);

		while (dq.size() > 1) {
			freq[dq.front()]++;
			freq[dq.back()]--;
			dq.pop_back();
			dq.pop_front();
		}

		for (int i = 0; i < 26; i++) {
			for (int j = 1; j <= freq[i] / 2; j++) {
				res += (char)(i + 'a');
			}
		}

		cout << res;
		if (dq.size() > 0)cout << (char)(dq[0] + 'a');
		reverse(res.begin(), res.end());
		cout << res;


	}

	return 0;
}