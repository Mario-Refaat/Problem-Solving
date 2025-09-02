#include <bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int t = 1;
	//cin >> t;

	while (t--) {

		vector<long long>v(9); long long shift = 0;
		for (int i = 0; i < 9; i++) cin >> v[i];

		for (int i = 0; i < 3; i++) {
			long long st = 0 + shift;
			for (int j = 0; j < 9; j++) cout << v[st++ % 9] << " ";
			cout << "\n";
			shift += 3;
		}
		for (int i = 0; i < 3; i++) {
			long long st = 1 + shift;
			for (int j = 0; j < 9; j++) cout << v[st++ % 9] << " ";
			cout << "\n";
			shift += 3;
		}
		for (int i = 0; i < 3; i++) {
			long long st = 2 + shift;
			for (int j = 0; j < 9; j++) cout << v[st++ % 9] << " ";
			cout << "\n";
			shift += 3;
		}
	}

	return 0;
}