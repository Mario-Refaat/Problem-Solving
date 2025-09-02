#include <iostream>
using namespace std;

long long GCD(long long a, long long b) {

	if (a > b)
		swap(a, b);

	while (a != 0) {
		b = b % a;
		swap(a, b);
	}

	return b;
}

long long LCM(long long a, long long b) {
	return (a * b) / GCD(a, b);
}

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	long long a, b;
	cin >> a >> b;

	cout << GCD(a, b) << " " << LCM(a, b);

	return 0;
}