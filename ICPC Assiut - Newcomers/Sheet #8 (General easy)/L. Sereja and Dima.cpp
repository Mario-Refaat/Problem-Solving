#include <iostream>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int arr[1001], n;
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	int sum1 = 0, sum2 = 0, l = 0, r = n - 1;

	for (int i = 0; i < n; i++) {
		if (arr[l] > arr[r]) 
		{
			if (i % 2 == 0) sum1 += arr[l++];
			else sum2 += arr[l++];
		}
		else
		{
			if (i % 2 == 0) sum1 += arr[r--];
			else sum2 += arr[r--];
		}
	}

	cout << sum1 << " " << sum2;

	return 0;
}
