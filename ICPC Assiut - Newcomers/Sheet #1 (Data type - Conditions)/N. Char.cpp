#include <iostream>
using namespace std;

int main() {

	char ch;
	cin >> ch;

	if (ch >= 97)
		cout << char(ch - 32);
	else
		cout << char(ch + 32);

	return 0;
}
