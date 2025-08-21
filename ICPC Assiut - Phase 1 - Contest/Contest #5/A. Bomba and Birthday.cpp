#include <bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int t = 1;
	//cin >> t;

	while (t--) {

		string x;
		cin >> x;

		bool f = 0;
		for (auto e : x) {
			if (f || e == '9') cout << e;
			else if (e == '0') { cout << '9'; f = 1; }
			else { cout << (char)(e + 1); f = 1; }
		}

	}

	return 0;
}