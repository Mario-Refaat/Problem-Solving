#include <iostream>
#include <algorithm>
using namespace std;

struct st {
	string name;
	int grades[4];
	int sum = 0;
};

bool c(st a, st b) {

	if (a.sum > b.sum + 10 || a.sum + 10 < b.sum) return a.sum > b.sum;
	else return a.name < b.name;

}

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	st arr[100001];
	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i].name;

		for (int j = 0; j < 4; j++) {
			cin >> arr[i].grades[j];
			arr[i].sum += arr[i].grades[j];
		}

	}

	sort(arr, arr + n, c);

	for (int i = 0; i < n; i++) {
		cout << arr[i].name << " " << arr[i].sum << " ";
		for (int j = 0; j < 4; j++) cout << arr[i].grades[j] << " ";
		cout << '\n';
	}


	return 0;
}
