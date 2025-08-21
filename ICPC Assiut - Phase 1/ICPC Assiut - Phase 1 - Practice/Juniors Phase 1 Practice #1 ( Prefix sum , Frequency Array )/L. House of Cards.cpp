#include <iostream>
#include <vector>
using namespace std;

int freq1[100001], freq2[100001], freq3[100001];

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	vector <int> pref(1e5 + 1);
	int counter = 0;

	for (int i = 0; i <= 1e5; i++) { //make vector store max height can make from 1 to 1e5  
		if (i == (counter + 1) * counter / 2) {
			pref[i] = counter++;
		}
		else pref[i] = counter - 1;
	}

	string s;
	cin >> s;

	for (int i = 1; i <= s.size(); i++) {
		freq1[i] += freq1[i - 1]; freq1[i] += s[i - 1] == '/';
		freq2[i] += freq2[i - 1]; freq2[i] += s[i - 1] == '\\';
		freq3[i] += freq3[i - 1]; freq3[i] += s[i - 1] == '_';
	}

	int q, l, r;
	cin >> q;

	while (q--) {
		cin >> l >> r;
		int m1 = pref[freq1[r] - freq1[l - 1]];
		int m2 = pref[freq2[r] - freq2[l - 1]];
		int m3 = pref[freq3[r] - freq3[l - 1]] + 1;
		cout << min(min(m1, m2), m3) << endl;
	}

	return 0;
}