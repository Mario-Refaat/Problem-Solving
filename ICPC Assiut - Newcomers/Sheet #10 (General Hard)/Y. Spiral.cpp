#include <iostream>
using namespace std;

long long arr[1005][1005];

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int row, col, r = 1, c = 1;
	cin >> row >> col;

	for (int i = 1; i <= row; i++)
		for (int j = 1; j <= col; j++)
			cin >> arr[i][j];

	while (r <= row && c <= col) {

		for (int i = c; i <= col; i++) cout << arr[r][i] << " ";
		r++;

		for (int i = r; i <= row; i++) cout << arr[i][col] << " ";
		col--;

		if (r <= row) {
			for (int i = col; i >= c; i--) cout << arr[row][i] << " ";
			row--;
		}

		if (c <= col) {
			for (int i = row; i >= r; i--) cout << arr[i][c] << " ";
			c++;
		}
	}

	return 0;
}