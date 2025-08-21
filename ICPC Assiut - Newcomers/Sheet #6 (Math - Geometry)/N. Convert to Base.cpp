#include <iostream>
#include <string>
#include <cmath>
using namespace std;

long long ConvertFromBaseXToDecimal(string num, long long base) {

	long long res = 0;

	for (int i = 0; i < num.size(); i++) {
		int n = (num[i] >= '0' && num[i] <= '9') ? num[i] - '0' : num[i] - 'A' + 10;
		res += pow(base, num.size() - i - 1) * n;
	}

	return res;
}

string ConvertFromDecimalToBaseX(long long num, long long base) {

	string res = "";

	while (num) {
		long long n = num % base;
		n = (n < 10) ? n + '0' : n - 10 + 'A';
		res = (char)n + res;
		num /= base;
	}

	return res;
}

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	long long t, x;
	string n;
	cin >> t >> n >> x;

	if (t == 1)
		cout << ConvertFromBaseXToDecimal(n, x);
	else
		cout << ConvertFromDecimalToBaseX(stoi(n), x);

	return 0;
}