#include <iostream>
#include <string>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	string res = "";
	long long n;
	cin >> n;

	for (long long i = 2; i * i <= n; i++) {
		int counter = 0;
		while (n % i == 0) {
			n /= i;
			counter++;
		}

		if (counter > 0)
			res += "(" + to_string(i) + "^" + to_string(counter) + ")*";
	}

	if (n > 1) {
		res += "(" + to_string(n) + "^" + to_string(1) + ")*";
	}

	res.erase(res.size() - 1);

	cout << res;

	return 0;
}