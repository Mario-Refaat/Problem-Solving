#include <iostream>
using namespace std;

int main() {

	float num;
	cin >> num;

	if (num - (int)num == 0)
		cout << "int " << (int)num;
	else
		cout << "float " << (int)num << " " << num - (int)num;

	return 0;
}
