#include <iostream>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int num;
	cin >> num;
	cout << (num % 2 == 0 && num != 2 ? "YES" : "NO");

	return 0;
}
