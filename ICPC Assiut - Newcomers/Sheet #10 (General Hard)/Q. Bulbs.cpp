#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int size, current = 0, res = 0, x;
	cin >> size;

	for (int i = 1; i <= size; i++) {
		cin >> x;
		current = max(current, x);
		if (current == i) res++;
	}

	cout << res;

	return 0;
}