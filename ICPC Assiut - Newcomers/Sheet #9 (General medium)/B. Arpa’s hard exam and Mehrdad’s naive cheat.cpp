#include <iostream>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	long long num;
	cin >> num;

	if (num == 0)
		cout << 1;
	else if (num % 4 == 1)
		cout << 8;
	else if (num % 4 == 2)
		cout << 4;
	else if (num % 4 == 3)
		cout << 2;
	else
		cout << 6;

	return 0;
}
