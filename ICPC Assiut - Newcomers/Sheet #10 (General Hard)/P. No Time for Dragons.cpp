#include <iostream>
#include <algorithm>
using namespace std;

pair<int, pair<int, int>> arr[200001];

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	long long total = 0, current = 0, size;
	cin >> size;

	for (int i = 0; i < size; i++)
	{
		cin >> arr[i].second.first >> arr[i].second.second;
		arr[i].first = arr[i].second.first - arr[i].second.second;
	}

	sort(arr, arr + size, greater<>());

	for (int i = 0; i < size; i++) {
		if (current < arr[i].second.first) {
			total += arr[i].second.first - current;
			current = arr[i].second.first;
		}

		current -= arr[i].second.second;
	}

	cout << total;

	return 0;
}