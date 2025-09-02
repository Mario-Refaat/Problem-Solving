#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	char arr[11][11];
	int r, c, res = 0;
	cin >> r >> c;

	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			cin >> arr[i][j];

	for (int i = 0; i < r; i++) {

		bool flag = true;

		for (int j = 0; j < c; j++) {
			if (arr[i][j] == 'S') flag = false;
		}

		if (flag) {
			res += c;
			for (int j = 0; j < c; j++)
				arr[i][j] = '+';
		}
	}

	for (int i = 0; i < c; i++) {

		bool flag = true;
		int eaten = 0;

		for (int j = 0; j < r; j++) {
			if (arr[j][i] == 'S') flag = false;
			if (arr[j][i] == '+') eaten++;
		}

		if (flag) res += r - eaten;
	}

	cout << res;

	return 0;
}
