#include <iostream>
using namespace std;

int main() {

	long long n, k, a;
	cin >> n >> k >> a;

	if (n * k % a != 0)
		cout << "double";
	else if (n * k / a > 2147483647)
		cout << "long long";
	else
		cout << "int";


	return 0;
}
