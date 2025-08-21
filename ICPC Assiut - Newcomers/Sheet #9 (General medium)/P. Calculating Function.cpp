#include <iostream>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	long long num;
	cin >> num;

	cout << (num % 2 ? (num + 1) / -2 : num / 2);

	return 0;
}
