#include <iostream>
using namespace std;

void print(int num) {

	if (num == 0)
		return;
	print(num / 2);
	cout << num % 2;
}

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int t;
	cin >> t;

	while (t--) {
		int num;
		cin >> num;
		print(num);
		cout << '\n';
	}

	return 0;
}