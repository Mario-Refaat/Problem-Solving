#include <iostream>
using namespace std;

int main() {

	long long eye, mouth, body, res = 0;
	cin >> eye >> mouth >> body;

	if (mouth >= min(eye, body))
		res += min(eye, body);
	else
	{
		res += mouth;
		eye -= mouth;
		body -= mouth;
		res += min(eye / 2, body);
	}

	cout << res;

	return 0;
}
