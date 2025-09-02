#include <iostream>
using namespace std;

int main() {

	long long num1, num2, num3, num4;
	cin >> num1 >> num2 >> num3 >> num4;

	// Using Modular Multiplication Property: (a * b * c) % m = ( (a % m) * (b % m) * (c % m) ) % m
	int last2digit = ((num1 % 100) * (num2 % 100) * (num3 % 100) * (num4 % 100)) % 100;

	if (last2digit > 9) //check if it only one digit adding 0 
		cout << last2digit;
	else
		cout << 0 << last2digit;

	return 0;
}
