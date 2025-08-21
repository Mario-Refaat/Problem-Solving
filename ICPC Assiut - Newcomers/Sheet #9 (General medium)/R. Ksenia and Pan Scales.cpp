#include <iostream>
#include <cmath>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	string s, left, right, k;
	cin >> s >> k;

	left = s.substr(0, s.find('|')), right = s.substr(s.find('|') + 1);

	for (int i = 0; i < k.size(); i++) {

		if (left.size() < right.size())
			left.push_back(k[i]);
		else
			right.push_back(k[i]);
	}

	cout << (left.size() == right.size() ? left + "|" + right : "Impossible");

	return 0;
}
