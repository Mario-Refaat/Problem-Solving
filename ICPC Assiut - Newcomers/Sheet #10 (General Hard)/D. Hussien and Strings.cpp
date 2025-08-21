#include <iostream>
using namespace std;

bool isEqual(string a, string b) {

	if (a.size() != b.size()) return false;

	int f1[26] = { 0 }, f2[26] = { 0 }, diff = 0, mxfreq = 0;

	for (int i = 0; i < a.size(); i++) {

		if (a[i] != b[i])diff++;

		f1[a[i] - 'a']++;
		f2[b[i] - 'a']++;
	}

	for (int i = 0; i < 26; i++) {
		if (f1[i] != f2[i]) return false;
		mxfreq = max(max(f1[i], f2[i]), mxfreq);
	}

	return diff == 2 || (diff == 0 && mxfreq > 1);
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	string a, b;
	cin >> a >> b;

	cout << (isEqual(a, b) ? "YES" : "NO");

	return 0;
}