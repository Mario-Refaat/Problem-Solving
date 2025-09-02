#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	int firstdigit = n % 10;
	int seconddigit = n / 10;

	if (firstdigit % seconddigit == 0 || seconddigit % firstdigit == 0)
		cout << "YES";
	else
		cout << "NO";


	return 0;
}
