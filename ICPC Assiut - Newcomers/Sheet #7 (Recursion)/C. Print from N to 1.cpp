#include <iostream>
using namespace std;

void print(int num) {

	if (num == 1)
	{
		cout << 1; //don't print any extra spaces
		return;
	}

	cout << num << ' ';
	print(num - 1);

}


int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int num;
	cin >> num;

	print(num);

	return 0;
}