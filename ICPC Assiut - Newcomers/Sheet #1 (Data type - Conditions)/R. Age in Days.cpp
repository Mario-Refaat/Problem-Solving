#include <iostream>
using namespace std;

int main() {

	int days;
	cin >> days;

	cout << days / 365 << " years\n";
	days %= 365;
	cout << days / 30 << " months\n";
	days %= 30;
	cout << days << " days\n";

	return 0;
}
