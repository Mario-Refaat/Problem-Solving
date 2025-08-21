#include <bits/stdc++.h>
using namespace std;

int NumberOfTypes(string& s) {

	int freq[123] = { 0 }, cnt = 0;
	for (char& e : s) {
		if (freq[e] == 0)cnt++;
		freq[e]++;
	}

	return cnt;
}

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n;
	string s;
	cin >> n >> s;

	int l = 0, r = 0, ans = INT_MAX, types = NumberOfTypes(s);
	map<char, int>mp;

	while (l < n) {

		while (r < n && mp.size() < types)
			mp[s[r++]]++;

		if (mp.size() == types) ans = min(ans, r - l);

		if (mp[s[l]] == 1) mp.erase(s[l]);
		else mp[s[l]]--;

		l++;
	}

	cout << ans;

	return 0;
}