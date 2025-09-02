#include <iostream>
#include <cmath>
using namespace std;

int main() {

	long long a, b, c, d;
	cin >> a >> b >> c >> d;

	if (b * log(a) > d * log(c)) // log(a^b) = b * log(a)
		cout << "YES";
	else
		cout << "NO";

	return 0;
}
