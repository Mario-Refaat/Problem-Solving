#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int freq[100005] = { 0 }, n, x;
	cin >> n;

	int counter = n;
	for (int i = 1; i <= n; i++) {

		cin >> x;
		freq[x]++;

		while (freq[counter]) {
			cout << counter << " ";
			counter--;
		}

		cout << '\n';
	}

	return 0;
}