#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int arr[101], counter = 0, n, x, temp = 0;
	cin >> n;

	bool flag1 = true, flag2 = true;

	for (int i = 0; i < n; i++) {
		cin >> x;

		if (x == 0 || x == 100) arr[counter++] = x;
		else if (x < 10 && flag1) { arr[counter++] = x; flag1 = false; }
		else if (x % 10 == 0 && flag2) { arr[counter++] = x; flag2 = false; }
		else temp = x;

	}

	if (flag1 && flag2 && temp) arr[counter++] = temp;

	cout << counter << endl;
	for (int i = 0; i < counter; i++)
		cout << arr[i] << " ";

	return 0;
}