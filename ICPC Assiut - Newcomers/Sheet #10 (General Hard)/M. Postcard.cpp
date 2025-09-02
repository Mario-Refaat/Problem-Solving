#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	string s;
	int snow = 0, candy = 0, letters = 0, size;

	cin >> s >> size;

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '?') candy++;
		else if (s[i] == '*') snow++;
		else letters++;
	}

	if (letters - snow - candy > size || (letters < size && snow == 0)) {
		cout << "Impossible";
	}
	else {
		for (int i = 0; i < s.size(); i++) {

			if (letters > size && (s[i + 1] == '?' || s[i + 1] == '*')) letters--;
			else if (letters < size && s[i + 1] == '*') {

				cout << s[i];
				while (letters < size) {
					cout << s[i];
					letters++;
				}

			}
			else if (s[i] != '?' && s[i] != '*') cout << s[i];
		}
	}

	return 0;
}