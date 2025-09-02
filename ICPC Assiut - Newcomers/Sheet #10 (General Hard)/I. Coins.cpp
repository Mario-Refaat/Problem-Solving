#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int a = 0, b = 0, c = 0;

	for (int i = 1; i <= 3; i++) {

		string s;
		cin >> s;

		if (s[1] == '<') swap(s[0], s[2]);

		if (s[0] == 'A') a++;
		else if (s[0] == 'B')b++;
		else c++;

	}

	if (a == 2)
		cout << (b > c ? "CBA" : "BCA");
	else if (b == 2)
		cout << (a > c ? "CAB" : "ACB");
	else if (c == 2)
		cout << (a > b ? "BAC" : "ABC");
	else
		cout << "Impossible";

	return 0;
}