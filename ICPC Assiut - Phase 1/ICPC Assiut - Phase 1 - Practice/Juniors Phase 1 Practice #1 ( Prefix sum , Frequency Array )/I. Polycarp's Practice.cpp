#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	vector <int> res;
	int arr[2001], temp[2001], n, k;
	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		temp[i] = arr[i];
	}

	sort(temp, temp + n, greater<>());

	for (int i = 0; i < k; i++) {
		for (int j = 0; j < n; j++) {
			if (arr[j] == temp[i]) {
				res.push_back(j + 1);
				arr[j] = 0;
				break;
			}
		}
	}

	sort(res.begin(), res.end());
	res[res.size() - 1] = n; //take last problems

	cout << accumulate(temp, temp + k, 0) << endl;

	for (int i = 0; i < res.size(); i++)
		cout << (i == 0 ? res[0] : res[i] - res[i - 1]) << " ";

	return 0;
}