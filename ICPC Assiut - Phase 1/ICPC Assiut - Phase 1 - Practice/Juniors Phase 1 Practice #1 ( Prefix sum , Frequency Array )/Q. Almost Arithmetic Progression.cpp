#include <iostream>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int arr[100001], temp[100001], ans = INT_MAX, n;
	cin >> n;

	for (int i = 0; i < n; i++) cin >> arr[i];

	for (int i = -1; i <= 1; i++) {
		for (int j = -1; j <= 1; j++) {

			for (int z = 0; z < n; z++) temp[z] = arr[z];

			temp[0] += i; temp[1] += j;
			int diff = temp[1] - temp[0], flag = 1;

			int curr = (i != 0) + (j != 0);

			for (int z = 2; z < n; z++) {
				if (temp[z] - temp[z - 1] == diff)continue;
				else if ((temp[z] + 1) - temp[z - 1] == diff) temp[z]++;
				else if ((temp[z] - 1) - temp[z - 1] == diff) temp[z]--;
				else flag = 0;
				curr++;
			}

			if (flag) ans = min(ans, curr);
		}
	}

	cout << (ans == INT_MAX ? -1 : ans);

	return 0;
}