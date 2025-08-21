#include <iostream>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	string s, t;
	cin >> s >> t;

	int i = 0;

	for (int j = 0; j < t.size(); j++)
		i += s[i] == t[j];

	cout << i + 1;

	return 0;
}
