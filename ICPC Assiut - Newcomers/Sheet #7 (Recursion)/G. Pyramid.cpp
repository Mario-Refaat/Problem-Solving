#include <iostream>
using namespace std;

void print(int size, int counter = 1) {

	if (counter > size)
		return;

	for (int i = counter; i <= size - 1; i++)
		cout << " ";
	for (int i = 1; i <= counter * 2 - 1; i++)
		cout << "*";

	cout << '\n';
	print(size, ++counter);
}

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;
	print(n);

	return 0;
}