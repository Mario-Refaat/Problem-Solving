#include <iostream>
using namespace std;

int main() {

	int a, b;
	cin >> a >> b;

	bool nolucky = true;

	for (; a <= b; a++) {

		int temp = a;
		bool islucky = true;

		while (temp) {
			if (temp % 10 != 4 && temp % 10 != 7)
			{
				islucky = false;
				break;
			}
			temp /= 10;
		}

		if (islucky)
		{
			cout << a << " ";
			nolucky = false;
		}
	}

	if (nolucky)
		cout << -1;

	return 0;
}
