#include <bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int t = 1;
	//cin >> t;

	while (t--) {

		long long a, b, c;
		cin >> a >> b >> c;

		cout << c / a * b;
	}

	return 0;
}
