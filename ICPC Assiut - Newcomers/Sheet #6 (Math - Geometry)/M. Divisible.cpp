#include <iostream>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	string s;
	long long n, res = 0;
	cin >> s >> n;

	for (int i = 0; i < s.size(); i++) {
		res *= 10;
		res += s[i] - '0';
		res %= n;
	}

	if (res % n == 0)
		cout << "YES";
	else
		cout << "NO";

	return 0;
}