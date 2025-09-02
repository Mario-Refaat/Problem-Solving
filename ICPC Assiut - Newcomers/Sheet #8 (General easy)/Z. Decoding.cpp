#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int size;
	string s, res = "";
	cin >> size >> s;

	for (int i = 0; i < size; i++)
		if (i % 2) res = s[i] + res;
		else res = res + s[i];

	if (size % 2 == 0)
		reverse(res.begin(), res.end());

	cout << res;

	return 0;
}
