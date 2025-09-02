#include <iostream>
using namespace std;

int main() {

	char ch;
	cin >> ch;

	if (ch == 'z')
		cout << 'a';
	else
		cout << ++ch;

	return 0;
}
