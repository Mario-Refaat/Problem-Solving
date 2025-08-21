#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	char arr[101][101], best[101] = { '1' };
	int n, m, res = 0;
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
			best[j] = max(best[j], arr[i][j]);
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (arr[i][j] == best[j]) {
				res++; break;
			}
		}
	}

	cout << res;

	return 0;
}