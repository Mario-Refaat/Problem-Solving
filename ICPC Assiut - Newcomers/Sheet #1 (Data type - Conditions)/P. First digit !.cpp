#include <iostream>
using namespace std;

int main() {

	int num;
	cin >> num;

	if ((num / 1000) % 2 == 0)
		cout << "EVEN";
	else
		cout << "ODD";

	return 0;
}
