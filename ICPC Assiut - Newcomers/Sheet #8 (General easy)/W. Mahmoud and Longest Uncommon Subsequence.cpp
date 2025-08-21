#include <iostream>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	string s, t;
	cin >> s >> t;

	if (s == t)
		cout << -1;
	else
		cout << max(s.size(), t.size());

	return 0;
}
