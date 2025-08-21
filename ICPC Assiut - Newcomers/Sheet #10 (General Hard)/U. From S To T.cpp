#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int q;
	cin >> q;

	while (q--) {

		string s, t, p;
		cin >> s >> t >> p;

		int freq1[26] = { 0 }, freq2[26] = { 0 }, counter = 0, flag = true;

		for (int i = 0; i < s.size(); i++) freq1[s[i] - 'a']++;
		for (int i = 0; i < p.size(); i++) freq1[p[i] - 'a']++;
		for (int i = 0; i < t.size(); i++) freq2[t[i] - 'a']++;

		for (int i = 0; i < t.size(); i++) {
			if (s[counter] == t[i]) counter++;
		}

		flag = counter == s.size();

		for (int i = 0; i < 26; i++)
		{
			if (freq1[i] < freq2[i]) flag = false;
		}

		cout << (flag ? "YES\n" : "NO\n");
	}

	return 0;
}