#include <bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int t = 1;
	//cin >> t;

	while (t--) {

		char c;
		cin >> c;

		cout << (char)(c == 'z' ? 'a' : c + 1);

	}

	return 0;
}
