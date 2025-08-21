#include <iostream>
using namespace std;

long long GCD(long long a, long long b) {

	if (a > b) swap(a, b);

	while (a != 0) {
		b %= a;
		swap(a, b);
	}

	return b;
}

long long LCM(long long a, long long b) {
	return a * b / GCD(a, b);
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int a, b, c, d;
	char op;
	cin >> a >> op >> b >> c >> op >> d;

	cout << LCM(a, c) << "/" << GCD(b, d);

	return 0;
}