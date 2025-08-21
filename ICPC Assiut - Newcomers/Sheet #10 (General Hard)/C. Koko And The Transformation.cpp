#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int size1, size2, sum1 = 0, sum2 = 0, x;
	cin >> size1 >> size2;

	for (int i = 0; i < size1; i++) { cin >> x; sum1 += x; }
	for (int i = 0; i < size2; i++) { cin >> x; sum2 += x; }

	cout << (sum1 == sum2 ? "Yes" : "No");

	return 0;
}