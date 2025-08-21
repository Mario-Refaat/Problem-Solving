#include <iostream>
using namespace std;

bool isLucky(int num) {
	while (num) {
		if (num % 10 != 4 && num % 10 != 7)
			return false;
		num /= 10;
	}
	return true;
}

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int num;
	cin >> num;

	for (int i = 1; i <= num; i++) {
		if (isLucky(i) && num % i == 0) //if num divided by any lucky number
		{
			cout << "YES";
			return 0;
		}
	}

	cout << "NO";
	return 0;
}
