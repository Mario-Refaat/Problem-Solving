#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	long long eye, mouth, body, res = 0;
	cin >> eye >> mouth >> body;

	res = min(min(eye, mouth), body);
	body -= res; eye -= res;

	res += min(eye / 2, body);

	cout << res;

	return 0;
}