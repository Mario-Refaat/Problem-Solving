#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(long long num)
{
	if (num < 2)
		return false;

	for (long long i = 2; i * i <= num; i++)
		if (num % i == 0)
			return false;

	return true;
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	long long n, x;
	cin >> n;

	while (n--) {
		cin >> x;
		if (sqrt(x) == (long long)sqrt(x) && isPrime(sqrt(x))) // 4 --> 2 'prime' so divisors: 4 , 2 , 1
			cout << "YES\n";
		else
			cout << "NO\n";
	}

	return 0;
}