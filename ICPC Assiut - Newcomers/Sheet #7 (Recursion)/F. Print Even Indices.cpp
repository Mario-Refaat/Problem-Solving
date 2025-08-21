#include <iostream>
using namespace std;

void print(int arr[], int size) {

	if (size < 0)
		return;
	if (size % 2 == 0) cout << arr[size] << " ";
	print(arr, --size);

}

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int arr[1001], n;
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	print(arr, n - 1);

	return 0;
}