#include <iostream>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	long long n, res = 0, i = 1;
	cin >> n;

	while (res + i <= n) {
		res += i;
		i++;
	}

	cout << i - 1;

	return 0;
}