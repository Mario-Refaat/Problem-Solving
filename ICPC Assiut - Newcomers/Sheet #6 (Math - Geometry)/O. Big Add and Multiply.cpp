#include <iostream>
#include <string>
using namespace std;

string Plus(string num1, string num2 = "9999") {

	long long i = num1.size() - 1, j = num2.size() - 1, carry = 0;
	string res = "";

	while (i >= 0 || j >= 0 || carry) {

		int x = (i >= 0) ? num1[i--] - '0' : 0;
		int y = (j >= 0) ? num2[j--] - '0' : 0;
		int sum = x + y + carry;

		carry = sum / 10;
		sum %= 10;

		res = to_string(sum) + res;
	}

	return res;
}

string Multiply(string num1, int num2 = 9999) {

	string res = "";
	int carry = 0;

	for (int i = num1.size() - 1; i >= 0; i--)
	{
		int product = (num1[i] - '0') * num2 + carry; //  " Multiply each digit * 9999 + carray "

		carry = product / 10;
		product %= 10;
		res = to_string(product) + res;
	}

	if (carry > 0)
		res = to_string(carry) + res;

	return res;
}

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	string num;
	cin >> num;

	cout << Plus(num) << '\n' << Multiply(num);

	return 0;
}