#include <iostream>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	long long num, m;
	cin >> num >> m;

	for (long long i = (num + 1) / 2; i <= num; i++) {
		if (i % m == 0) {

			cout << i;
			return 0;
		}
	}

	cout << -1;

	return 0;
}
