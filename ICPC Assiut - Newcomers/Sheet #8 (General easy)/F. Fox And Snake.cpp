#include <iostream>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n, m;
	bool flag = true;
	cin >> n >> m;

	for (int i = 0; i < n; i++) {

		for (int j = 0; j < m; j++) {

			if (i % 2 == 0)
				cout << "#";
			else if (flag && j == m - 1 || !flag && j == 0)
				cout << "#";
			else
				cout << ".";
		}

		if (i % 2)
			flag = !flag; //change flag after odd iteration

		cout << "\n";
	}

	return 0;
}