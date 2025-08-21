#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n, score1 = 0, score2 = 0;
	string team1 = "", team2 = "", temp;
	cin >> n;

	while (n--) {
		cin >> temp;
		if (team1 == "") {
			team1 = temp; score1++;
		}
		else if (temp == team1) {
			score1++;
		}
		else {
			team2 = temp; score2++;
		}
	}

	cout << (score1 > score2 ? team1 : team2);

	return 0;
}