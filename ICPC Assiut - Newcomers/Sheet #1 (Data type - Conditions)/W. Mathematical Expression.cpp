#include <iostream>
using namespace std;

int main() {

	int num1, num2, res;
	char op1, op2;
	cin >> num1 >> op1 >> num2 >> op2 >> res;

	if (op1 == '+')
	{
		if (num1 + num2 == res)
			cout << "Yes";
		else
			cout << num1 + num2;
	}
	else if (op1 == '-')
	{
		if (num1 - num2 == res)
			cout << "Yes";
		else
			cout << num1 - num2;
	}
	else
	{
		if (num1 * num2 == res)
			cout << "Yes";
		else
			cout << num1 * num2;
	}

	return 0;
}