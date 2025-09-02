#include <iostream>
#include <vector>
using namespace std;

int NumberOfStars(char arr[101][101], int row, int col, int n, int m) {

	int top = 0, bottom = 0, left = 0, right = 0, r, c;

	r = row - 1;
	while (r && (arr[r][col] == '*' || arr[r][col] == '+')) { top++; r--; }

	r = row + 1;
	while (r <= n && (arr[r][col] == '*' || arr[r][col] == '+')) { bottom++; r++; }

	c = col - 1;
	while (c && (arr[row][c] == '*' || arr[row][c] == '+')) { left++; c--; }

	c = col + 1;
	while (c <= m && (arr[row][c] == '*' || arr[row][c] == '+')) { right++; c++; }

	return min(min(top, bottom), min(left, right));
}

void EditStars(char arr[101][101], int row, int col, int NumberOfStars) {

	int r, c;

	r = row - 1;
	for (int i = 1; i <= NumberOfStars; i++) {
		arr[r--][col] = '+';
	}

	r = row + 1;
	for (int i = 1; i <= NumberOfStars; i++) {
		arr[r++][col] = '+';
	}

	c = col - 1;
	for (int i = 1; i <= NumberOfStars; i++) {
		arr[row][c--] = '+';
	}

	c = col + 1;
	for (int i = 1; i <= NumberOfStars; i++) {
		arr[row][c++] = '+';
	}

	arr[row][col] = '+';

}

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	vector <pair<pair<int, int>, int>> res;
	char arr[101][101];
	int n, m;
	cin >> n >> m;


	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			cin >> arr[i][j];

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {

			if (arr[i][j] == '*' || arr[i][j] == '+') {
				int stars = NumberOfStars(arr, i, j, n, m);
				if (stars) {
					res.push_back({ {i,j},stars });
					EditStars(arr, i, j, stars);
				}
			}

		}
	}

	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			if (arr[i][j] == '*') { cout << -1; return 0; }

	cout << res.size() << endl;

	for (auto e : res)
		cout << e.first.first << " " << e.first.second << " " << e.second << endl;

	return 0;
}