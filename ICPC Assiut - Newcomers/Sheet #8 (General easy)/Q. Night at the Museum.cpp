#include <iostream>
#include <cmath>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	string s;
	cin >> s;

	int res = 0;
	s = 'a' + s;

	for (int i = 0; i < s.size() - 1; i++)
		res += min(abs(s[i] - s[i + 1]), 26 - abs(s[i] - s[i + 1]));

	cout << res;

	return 0;
}
