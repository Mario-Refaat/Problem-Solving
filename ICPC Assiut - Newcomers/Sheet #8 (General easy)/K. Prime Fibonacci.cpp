#include <iostream>
using namespace std;

bool isPrime(long long num) {
	if (num < 2)
		return false;
	for (long long i = 2; i * i <= num; i++)
		if (num % i == 0)
			return false;
	return true;
}

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	long long prev1 = 0, prev2 = 1;
	bool PrimeFib[51];

	for (int i = 0; i <= 50; i++) {
		PrimeFib[i] = isPrime(prev1); //get all fib prime before start 
		prev2 += prev1;
		prev1 = prev2 - prev1;
	}

	int t, num;
	cin >> t;
	while (t--) {
		cin >> num;
		cout << (PrimeFib[num - 1] ? "prime\n" : "not prime\n");
	}

	return 0;
}
