#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	string s;
	cin >> s;

	int egypt[5] = { 0 };

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'e' || s[i] == 'E')
			egypt[0]++;
		else if (s[i] == 'g' || s[i] == 'G')
			egypt[1]++;
		else if (s[i] == 'y' || s[i] == 'Y')
			egypt[2]++;
		else if (s[i] == 'p' || s[i] == 'P')
			egypt[3]++;
		else if (s[i] == 't' || s[i] == 'T')
			egypt[4]++;
	}

	cout << *min_element(egypt, egypt + 5);

	return 0;
}
