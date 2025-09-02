#include <bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int t = 1;
	//cin >> t;

	while (t--) {

		int a, b;
		cin >> a >> b;

		int res = a - b;
		if (res % 10 == 9)res--;
		else res++;

		cout << res;
	}

	return 0;
}