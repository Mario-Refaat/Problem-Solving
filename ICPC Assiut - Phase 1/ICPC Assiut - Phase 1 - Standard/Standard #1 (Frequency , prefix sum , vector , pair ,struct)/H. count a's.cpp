#include <iostream>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int freq[100001] = { 0 }, q;
	string s;
	cin >> s >> q;

	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 'a') freq[i + 1]++;
		freq[i + 1] += freq[i];
	}

	while (q--) {
		int l, r;
		cin >> l >> r;
		cout << freq[r] - freq[l - 1] << endl;
	}

	return 0;
}
