#include <iostream>
#include <string>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	string s;
	cin >> s;

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '?') {
			i++;
			while (i < s.size())
			{
				if (s[i] == '=')
					cout << ": ";
				else if (s[i] == '&')
					cout << endl;
				else
					cout << s[i];
				i++;
			}

		}
	}

	return 0;
}
