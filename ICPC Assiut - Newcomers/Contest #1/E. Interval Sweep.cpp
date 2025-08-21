#include <iostream>
using namespace std;

int main() {

	int a, b;
	cin >> a >> b;

	if ((a == 0 && b == 0) || a - b > 1 || b - a > 1)
		cout << "NO";
	else
		cout << "YES";

	return 0;
}
