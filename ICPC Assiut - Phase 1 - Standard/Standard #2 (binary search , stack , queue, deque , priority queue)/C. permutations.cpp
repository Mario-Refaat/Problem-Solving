#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	int n, q, x;
	string s, k;
	cin >> n >> q >> s;

	while (q--) {

		cin >> k >> x;

		if (k == "prev_permutation") {
			while (x--)
				prev_permutation(s.begin(), s.end());
		}
		else {
			while (x--)
				next_permutation(s.begin(), s.end());
		}

		cout << s << endl;
	}

	return 0;
}
