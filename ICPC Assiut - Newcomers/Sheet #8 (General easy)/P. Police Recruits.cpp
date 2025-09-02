#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n, police = 0, untreated = 0, x;
	cin >> n;

	while (n--) {

		cin >> x;
		if (x > 0)
			police += x;
		else if (police == 0)
			untreated++;
		else
			police--;
	}

	cout << untreated;

	return 0;
}
