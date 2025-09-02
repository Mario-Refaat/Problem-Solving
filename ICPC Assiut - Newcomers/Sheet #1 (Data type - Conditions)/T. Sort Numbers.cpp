#include <iostream>
using namespace std;

int main() {

	int a, b, c;
	cin >> a >> b >> c;

	if (a >= b && a >= c)
	{
		if (b >= c)
			cout << c << "\n" << b << "\n" << a << "\n\n";
		else
			cout << b << "\n" << c << "\n" << a << "\n\n";
	}
	else if (b >= a && b >= c)
	{
		if (a >= c)
			cout << c << "\n" << a << "\n" << b << "\n\n";
		else
			cout << a << "\n" << c << "\n" << b << "\n\n";
	}
	else
	{
		if (a >= b)
			cout << b << "\n" << a << "\n" << c << "\n\n";
		else
			cout << a << "\n" << b << "\n" << c << "\n\n";
	}

	cout << a << "\n" << b << "\n" << c;

	return 0;
}
