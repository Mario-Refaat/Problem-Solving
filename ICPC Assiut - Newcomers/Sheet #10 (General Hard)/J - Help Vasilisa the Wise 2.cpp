#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int r1, r2, c1, c2, d1, d2;
	cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;

	for (int s1 = 1; s1 <= 9; s1++) {

		for (int s2 = 1; s2 <= 9; s2++) {

			for (int s3 = 1; s3 <= 9; s3++) {

				for (int s4 = 1; s4 <= 9; s4++) {

					if (s1 == s2 || s1 == s3 || s1 == s4 || s2 == s3 || s2 == s4 || s3 == s4) continue;

					if (r1 == s1 + s2 && r2 == s3 + s4 && c1 == s1 + s3 && c2 == s2 + s4 && d1 == s1 + s4 && d2 == s2 + s3) {
						cout << s1 << " " << s2 << '\n' << s3 << " " << s4;
						return 0;
					}
				}
			}
		}
	}

	cout << -1;

	return 0;
}