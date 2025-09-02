#include <iostream>
#include <cmath>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	double n, res = 0;
	cin >> n;

	for (int i = 1; i <= n; i++)
		res += log10(i);

	cout << "Number of digits of " << n << "! is " << (long long)res + 1;

	return 0;
}