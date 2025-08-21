#include <iostream>
using namespace std;

int main() {

	while (true) {
		int a, b, sum = 0;
		cin >> a >> b;
		if (a <= 0 || b <= 0)
			break;
		if (a > b)
			swap(a, b);
		for (; a <= b; a++)
		{
			cout << a << " ";
			sum += a;
		}
		cout << "sum =" << sum << "\n";
	}

	return 0;
}
