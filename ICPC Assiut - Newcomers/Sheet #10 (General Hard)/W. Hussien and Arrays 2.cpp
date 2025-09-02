#include <iostream>
#include <algorithm>
using namespace std;

int arr[1000001];
pair<int, int> Sarr[1000001];

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int size, res = 0, j = 0;
	cin >> size;

	for (int i = 0; i < size; i++) {
		cin >> arr[i];
		Sarr[i] = { arr[i],i };
	}

	sort(Sarr, Sarr + size, greater<>());

	for (int i = 0; i < size; i++) {

		while (j < size && Sarr[j].first >= arr[i]) {

			res = max(res, Sarr[j].second - i);
			j++;

		}

	}

	cout << res;

	return 0;
}