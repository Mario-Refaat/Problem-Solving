#include <iostream>
using namespace std;

int main() {

	int pass;

	while (true) {
		cin >> pass;

		if (pass == 1999)
		{
			cout << "Correct\n";
			break;
		}
		cout << "Wrong\n";
	}


	return 0;
}
