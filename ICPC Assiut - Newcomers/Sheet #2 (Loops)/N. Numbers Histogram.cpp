#include <iostream>
using namespace std;

int main() {

	int t;
	char s;

	cin >> s >> t;

	while (t--) {
		int n;
		cin >> n;
		for (int i = 0; i < n; i++)
			cout << s;
		cout << "\n";
	}

	return 0;
}
