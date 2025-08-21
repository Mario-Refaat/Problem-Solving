#include <iostream>
using namespace std;

int main() {

	char ch;
	cin >> ch;

	if (ch >= 97)
		cout << "ALPHA\nIS SMALL";
	else if (ch >= 65)
		cout << "ALPHA\nIS CAPITAL";
	else
		cout << "IS DIGIT";

	return 0;
}
