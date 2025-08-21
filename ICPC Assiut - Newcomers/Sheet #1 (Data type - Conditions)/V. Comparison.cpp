#include <iostream>
using namespace std;

int main() {

	int num1, num2;
	char op;
	cin >> num1 >> op >> num2;

	bool flag = true; //Assuming the comparison is correct

	if (op == '=' && !(num1 == num2))
		flag = false;
	else if (op == '>' && !(num1 > num2))
		flag = false;
	else if (op == '<' && !(num1 < num2))
		flag = false;

	if (flag)
		cout << "Right";
	else
		cout << "Wrong";

	return 0;
}