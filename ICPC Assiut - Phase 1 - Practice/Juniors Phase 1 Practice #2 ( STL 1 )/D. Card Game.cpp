#include <iostream>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	string m, a, r;
	cin >> m >> a >> r;

	int i = 0, j = 0, z = 0;

	char ch = 'm';

	while (true) {

		if (ch == 'm') {
			if (i == m.size()) { cout << "M"; return 0; }
			ch = m[i];
			i++;
		}
		else if (ch == 'r') {
			if (j == r.size()) { cout << "R"; return 0; }
			ch = r[j];
			j++;
		}
		else {
			if (z == a.size()) { cout << "A"; return 0; }
			ch = a[z];
			z++;
		}

	}

	return 0;
}
