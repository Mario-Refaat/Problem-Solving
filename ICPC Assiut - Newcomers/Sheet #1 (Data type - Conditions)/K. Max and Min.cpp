#include <iostream>
using namespace std;

int main() {

	int a, b, c;
	cin >> a >> b >> c;

	if (a >= b && a >= c) { //a greatest
		if (b >= c)
			cout << c << " " << a;
		else
			cout << b << " " << a;
	}
	else if (b >= c && b >= a) { //b greatest
		if (c >= a)
			cout << a << " " << b;
		else
			cout << c << " " << b;
	}
	else //c greatest
		if (a >= b)
			cout << b << " " << c;
		else
			cout << a << " " << c;


	return 0;
}
