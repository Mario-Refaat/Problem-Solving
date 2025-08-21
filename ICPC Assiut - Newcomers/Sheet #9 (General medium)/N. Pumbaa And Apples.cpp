#include <iostream>
using namespace std;

int arr[1002][1002], rows[1002], cols[1002];

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n, m, k;
	cin >> n >> m >> k;

	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			cin >> arr[i][j];

	for (int i = 0; i < 1002; i++) //to avoid time limit make 2 arrays store rows,cols number
		rows[i] = i;
	for (int i = 0; i < 1002; i++)
		cols[i] = i;

	while (k--) {
		int x, y;
		char ch;
		cin >> ch >> x >> y;

		if (ch == 'c') {
			swap(cols[x], cols[y]);
		}
		else if (ch == 'r') {
			swap(rows[x], rows[y]);
		}
		else
			cout << arr[rows[x]][cols[y]] << '\n';
	}

	return 0;
}
