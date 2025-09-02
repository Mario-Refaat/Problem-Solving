#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n, counter = 0;
	string color = "ROYGBIV";

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << color[counter++];
		if (counter == 7) counter = 3;
	}

	return 0;
}