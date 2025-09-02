#include <iostream>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int arr[102], n, x;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> x;
		arr[x] = i;
	}

	for (int i = 1; i <= n; i++)
		cout << arr[i] << " ";

	return 0;
}
