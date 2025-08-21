#include <iostream>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int arr1[101][101], arr2[101][101], r1, c1, r2, c2;

	cin >> r1 >> c1;
	for (int i = 0; i < r1; i++)
		for (int j = 0; j < c1; j++)
			cin >> arr1[i][j];

	cin >> r2 >> c2;
	for (int i = 0; i < r2; i++)
		for (int j = 0; j < c2; j++)
			cin >> arr2[i][j];

	for (int i = 0; i < r1; i++)
	{
		for (int j = 0; j < c2; j++)
		{
			long long sum = 0;
			for (int z = 0; z < r2; z++)
			{
				sum += arr1[i][z] * arr2[z][j];
			}
			cout << sum << " ";
		}
		cout << "\n";
	}

	return 0;
}