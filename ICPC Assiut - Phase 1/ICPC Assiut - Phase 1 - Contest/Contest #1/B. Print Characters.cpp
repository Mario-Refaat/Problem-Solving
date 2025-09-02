#include <bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int t = 1;
	//cin >> t;

	while (t--) {

		int n;
		cin >> n;

		if (n % 2 == 0) { cout << "b "; n--; }

		for (int i = 0; i < n; i++) cout << "a ";

	}

	return 0;
}
