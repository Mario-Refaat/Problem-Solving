#include <iostream>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n, m, x, sum1 = 0, sum2 = 0;
	cin >> n >> m;

	while (n--) {
		cin >> x;
		sum1 += x;
	}

	while (m--) {
		cin >> x;
		sum2 += x;
	}

	cout << (sum1 == sum2 ? "Yes" : "No");

	return 0;
}
