#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	int temp = n, p = 0;

	while (temp)
	{
		p *= 10;
		p += temp % 10;
		temp /= 10;
	}

	cout << p << endl;
	if (p == n)
		cout << "YES";
	else
		cout << "NO";

	return 0;
}
