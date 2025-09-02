#include <iostream>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int freq['z' + 1] = { 0 };
	string s;

	cin >> s;

	for (int i = 0; i < s.size(); i++)
		freq[s[i]]++;

	for (char i = 'A'; i <= 'z'; i++)
		if (freq[i]) cout << i << " " << freq[i] << endl;


	return 0;
}
