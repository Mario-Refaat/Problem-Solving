#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int arr[500], n, k;
	cin >> n >> k;

	for (int i = 1; i <= n * 2 + 1; i++)
		cin >> arr[i];

	for (int i = 1; i <= n * 2 + 1; i++) {

		if (k == 0)
			break;

		if (i % 2 == 0 && arr[i] - 1 > arr[i - 1] && arr[i] - 1 > arr[i + 1])
		{
			arr[i]--;
			k--;
		}
	}

	for (int i = 1; i <= n * 2 + 1; i++)
		cout << arr[i] << " ";

	return 0;
}