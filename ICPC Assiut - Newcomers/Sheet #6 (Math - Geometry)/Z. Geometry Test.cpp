#include <iostream>
#include<cmath>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	long long r, s;
	cin >> r >> s;

	if (r * 2 <= s)
		cout << "Square";
	else if (r * 2 >= sqrt(s * s + s * s))
		cout << "Circle";
	else
		cout << "Complex";

	return 0;
}
