#include <iostream>
using namespace std;

bool isPrime(long long num) {
	if (num < 2) return false;

	for (long long i = 2; i * i <= num; i++)
		if (num % i == 0) return false;

	return true;
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int arr[100001], op[100001], size, ex;
	cin >> size >> ex;

	for (int i = 0; i < size; i++)
		cin >> arr[i];

	for (int i = 0; i < size; i++)
		cin >> op[i];

	for (int i = 0; i < size; i++) {
		if (op[i] == 2 || arr[i] == 2) cout << 0 << " ";
		else if (op[i] == 1 && isPrime(arr[i]))cout << 5 << " ";
		else cout << -1 << " ";
	}

	return 0;
}