#include <iostream>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	long long num;
	cin >> num;

	if (num < 0)
		num = max(num / 10, num / 100 * 10 + num % 10);

	cout << num;

	return 0;
}
