#include <iostream>
#include <vector>
using namespace std;

int freq[1000001];

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	vector <int> res;
	int arr[200001], n;
	long long sum = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		sum += arr[i];
		freq[arr[i]]++;
	}

	for (int i = 0; i < n; i++) {

		sum -= arr[i];
		freq[arr[i]]--;

		if (sum % 2 == 0 && sum / 2 <= 1e6 && freq[sum / 2]) res.push_back(i + 1);

		sum += arr[i];
		freq[arr[i]]++;
	}

	cout << res.size() << endl;
	for (int e : res) cout << e << " ";

	return 0;
}