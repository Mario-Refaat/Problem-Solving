#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	string s, t;
	cin >> s >> t;

	int i = s.size() - 1, j = t.size() - 1, res = 0;

	while (i >= 0 && j >= 0) {

		if (s[i] != t[j]) break;

		res++;
		i--; j--;

	}

	cout << s.size() - res + t.size() - res;

	return 0;
}