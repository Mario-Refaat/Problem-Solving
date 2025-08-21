#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int coins[101], size, sum = 0, thief = 0;
	cin >> size;

	for (int i = 0; i < size; i++) {
		cin >> coins[i];
		sum += coins[i];
	}

	sort(coins, coins + size, greater<int>()); //Descending order

	int i = 0;

	while (sum >= thief) {
		sum -= coins[i];
		thief += coins[i++];
	}

	cout << i;

	return 0;
}
