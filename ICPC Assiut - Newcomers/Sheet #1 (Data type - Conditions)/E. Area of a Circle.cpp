#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	double r;
	cin >> r;

	cout << fixed << setprecision(9);
	cout << (r * r) * 3.141592653;

	return 0;
}
