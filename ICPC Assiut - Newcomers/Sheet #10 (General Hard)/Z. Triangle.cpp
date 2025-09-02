#include <iostream>
#include <cmath>
using namespace std;

bool isRight(int x1, int y1, int x2, int y2, int x3, int y3) {

	if ((x1 == x2 && y1 == y2) || (x1 == x3 && y1 == y3) || (x2 == x3 && y2 == y3)) return false;

	int a = pow(x1 - x2, 2) + pow(y1 - y2, 2);
	int b = pow(x1 - x3, 2) + pow(y1 - y3, 2);
	int c = pow(x2 - x3, 2) + pow(y2 - y3, 2);

	return a + b == c || a + c == b || b + c == a;
}

bool isAlmost(int x1, int y1, int x2, int y2, int x3, int y3) {

	int x[] = { 1,-1,0,0 };
	int y[] = { 0,0,1,-1 };

	for (int i = 0; i < 4; i++) {

		if (isRight(x1 + x[i], y1 + y[i], x2, y2, x3, y3)) return true;
		if (isRight(x1, y1, x2 + x[i], y2 + y[i], x3, y3)) return true;
		if (isRight(x1, y1, x2, y2, x3 + x[i], y3 + y[i])) return true;
	}
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	if (isRight(x1, y1, x2, y2, x3, y3)) cout << "RIGHT";
	else if (isAlmost(x1, y1, x2, y2, x3, y3)) cout << "ALMOST";
	else cout << "NEITHER";

	return 0;
}