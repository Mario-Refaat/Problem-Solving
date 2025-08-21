#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	string x;
	cin >> x;

	for (int i = 0; i < x.size(); i++) {

		if (i == 0 && x[i] == '9')
			cout << '9';
		else if (x[i] >= '5')
			cout << '9' - x[i];
		else
			cout << x[i];
	}

	return 0;
}