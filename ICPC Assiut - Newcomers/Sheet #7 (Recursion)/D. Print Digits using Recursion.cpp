#include <iostream>
using namespace std;

void print(int num) {

	if (num == 0)
		return;

	print(num / 10);
	cout << num % 10 << " ";

}


int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int t;
	cin >> t;

	while (t--)
	{
		int num;
		cin >> num;
		if (num == 0)
			cout << 0;
		else
			print(num);
		cout << endl;
	}

	return 0;
}