#include <iostream>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	char arr[102][102], ch;
	int n, m, q;
	cin >> n >> m >> q;

	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			arr[i][j] = '.';

	while (q--) {
		int r1, c1, r2, c2;
		cin >> r1 >> c1 >> r2 >> c2 >> ch;

		if (r1 > r2) swap(r1, r2);
		if (c1 > c2) swap(c1, c2);

		for (int i = r1; i <= r2; i++)
			for (int j = c1; j <= c2; j++)
				arr[i][j] = ch;
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
			cout << arr[i][j];
		cout << '\n';
	}

	return 0;
}
