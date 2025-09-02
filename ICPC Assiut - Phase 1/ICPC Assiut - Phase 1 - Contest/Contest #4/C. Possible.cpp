#include <bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int t = 1;
	//cin >> t;

	while (t--) {

		string s;
		cin >> s;

		if (s.size() == 1) { cout << (s[0] == 'h' ? "impossible" : s); continue; }

		vector<int>freq(26, 0);
		for (auto e : s) freq[e - 'a']++;

		bool flag = 1;
		for (auto e : freq) if (e > (s.size() + 1) / 2) flag = 0;

		if (!flag || freq['h' - 'a']) { cout << "impossible"; continue; }

		priority_queue<pair<int, char>>pq;
		for (int i = 0; i < 26; i++)
			if (freq[i] > 0)
				pq.push({ freq[i],(char)(i + 'a') });

		while (pq.size()) {
			if (pq.size() > 1) {
				pair<int, char>p1 = pq.top();
				pq.pop();
				pair<int, char>p2 = pq.top();
				pq.pop();
				cout << p1.second << p2.second;
				p1.first--; p2.first--;
				if (p1.first > 0)pq.push(p1);
				if (p2.first > 0)pq.push(p2);
			}
			else {
				cout << pq.top().second;
				pq.pop();
			}
		}

	}

	return 0;
}