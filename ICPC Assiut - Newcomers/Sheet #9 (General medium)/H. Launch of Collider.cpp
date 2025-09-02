#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int arr[200001], n, res = INT_MAX;
	string s;

	cin >> n >> s;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	for (int i = 1; i < s.size(); i++) {
		if (s[i] == 'L' && s[i - 1] == 'R')
			res = min(res, (arr[i] - arr[i - 1]) / 2);
	}

	cout << (res == INT_MAX ? -1 : res);

	return 0;
}
