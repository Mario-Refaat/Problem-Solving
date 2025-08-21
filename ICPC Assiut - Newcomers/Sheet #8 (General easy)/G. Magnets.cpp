#include <iostream>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n, counter = 1;
	string x, y;
	cin >> n >> x; n--; // take first magnet to compare with it

	while (n--) {
		cin >> y;
		counter += x != y; // if x != y return 1 to counter
		x = y;
	}

	cout << counter;

	return 0;
}
