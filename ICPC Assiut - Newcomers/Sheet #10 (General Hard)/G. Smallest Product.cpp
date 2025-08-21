#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	double n, x, product = 0;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> x;
		product += log10(x);
	}

	cout << (long long)pow(10, product / n) + 1;

	return 0;
}