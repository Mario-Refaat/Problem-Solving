#include <iostream>
using namespace std;

long long arr[100001];
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int t;
	cin >> t;
	while (t--) {

		long long n, s, size = 0;
		cin >> n >> s;

		if ((n + 1) * n < s) {
			cout << -1 << '\n'; continue;
		}

		while (s > 0) {
			if (s - n >= 0) {
				s -= n;
				arr[size++] = n;
			}
			n--;
		}

		cout << size;
		for (int i = 0; i < size; i++) 
			cout << " " << arr[i];

		cout << '\n';
	}

	return 0;
}