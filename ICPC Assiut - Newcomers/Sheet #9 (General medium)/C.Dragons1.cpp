#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int s, n;
	cin >> s >> n;
	pair<int, int> arr[1001]; //pair means in each index has 2 elemnts arr[0] = {1,5} --> arr[0].first = 1 , arr[0].second = 5;

	for (int i = 0; i < n; i++)
		cin >> arr[i].first >> arr[i].second;

	sort(arr, arr + n); // sort depending on first element

	for (int i = 0; i < n; i++) {
		if (s > arr[i].first)
			s += arr[i].second;
		else
		{
			cout << "NO";
			return 0;
		}
	}

	cout << "YES";

	return 0;
}
