#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n, t;
	cin >> n >> t;

	if (n == 1 && t == 10) {
		cout << -1;
	}

	else if (t == 10) {
		cout << 1; n--;
		while (n--) cout << 0; //1000
	}

	else {
		cout << t; n--;
		while (n--) cout << 0; //5000
	}

	return 0; // you can also make another sol like print t : 55555 but takecare from case 10 print : 10000 not 10101010
}
