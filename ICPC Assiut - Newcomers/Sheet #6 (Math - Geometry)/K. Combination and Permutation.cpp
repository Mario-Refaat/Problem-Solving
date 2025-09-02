#include <iostream>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	long long a, b, Csum = 1, Psum = 1;
	cin >> a >> b;

	for (long long i = a - b + 1; i <= a; i++)
		Psum *= i;

	Csum = Psum;

	for (long long i = 1; i <= b; i++)
		Csum /= i;

	cout << Csum << " " << Psum;

	return 0;
}