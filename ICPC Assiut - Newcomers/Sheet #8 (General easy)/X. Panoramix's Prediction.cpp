#include <iostream>
using namespace std;

bool isprime(long long num) {
	if (num < 2)
		return false;
	for (long long i = 2; i * i <= num; i++)
		if (num % i == 0)
			return false;
	return true;
}

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	long long n, m;
	cin >> n >> m;

	for (int i = n + 1; i <= 53; i++) { // 53 because next one after last prime '47' is 53
		if (isprime(i)) {
			cout << (i == m ? "YES" : "NO");
			break;
		}
	}

	return 0;
}
