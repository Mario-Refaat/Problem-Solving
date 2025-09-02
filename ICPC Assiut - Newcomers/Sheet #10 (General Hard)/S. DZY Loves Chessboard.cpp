#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	char arr[101][101];
	int row, col;
	cin >> row >> col;

	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			cin >> arr[i][j];

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			if (arr[i][j] == '-') cout << '-';
			else cout << ((i + j) % 2 == 0 ? "W" : "B");
		}
		cout << '\n';
	}

	return 0;
}