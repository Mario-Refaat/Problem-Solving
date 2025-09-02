#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;
	bool isprime = true;

	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			isprime = false;
			break;
		}
	}
	if (isprime)
		cout << "YES";
	else
		cout << "NO";

	return 0;
}
