#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int arr[100001], n;
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	sort(arr, arr + n);

	for (int i = 0; i + 3 <= n; i++)
	{
		if (arr[i] < arr[i + 1] + arr[i + 2] && arr[i + 1] < arr[i] + arr[i + 2] && arr[i + 2] < arr[i + 1] + arr[i])
		{
			cout << "YES";
			return 0;
		}
	}

	cout << "NO";

	return 0;
}
