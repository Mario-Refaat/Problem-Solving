#include <iostream>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int arr[35][35] = { 0 }, n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++)
		{
			if (j == 1 || i == j)
				arr[i][j] = 1;
			else
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++)
			cout << arr[i][j] << " ";
		cout << "\n";
	}

	return 0;
}