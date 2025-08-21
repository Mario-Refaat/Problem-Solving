#include <iostream>
using namespace std;

char arr[1002][1002];
int Row[1000002], Col[1000002], Stars[1000002];

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n, m, res = 0;
	cin >> n >> m;

	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			cin >> arr[i][j];

	for (int i = 1; i <= n - 1; i++) {

		for (int j = 1; j <= m - 1; j++)
		{
			int stars = 1, row = -1, col = -1;

			while (arr[i][j] == '*' || arr[i][j] == '+') {

				if (i - stars <= 0 || arr[i - stars][j] == '.') break;
				if (i + stars > n || arr[i + stars][j] == '.') break;
				if (j - stars <= 0 || arr[i][j - stars] == '.') break;
				if (j + stars > m || arr[i][j + stars] == '.') break;

				arr[i][j] = '+';
				arr[i - stars][j] = '+';
				arr[i + stars][j] = '+';
				arr[i][j - stars] = '+';
				arr[i][j + stars] = '+';

				row = i;
				col = j;
				stars++;
			}
			if (row != -1)
			{
				Row[res] = row;
				Col[res] = col;
				Stars[res++] = stars - 1;
			}
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (arr[i][j] == '*')
			{
				cout << -1;
				return 0;
			}
		}
	}

	cout << res << '\n';
	for (int i = 0; i < res; i++)
		cout << Row[i] << " " << Col[i] << " " << Stars[i] << '\n';

	return 0;
}
