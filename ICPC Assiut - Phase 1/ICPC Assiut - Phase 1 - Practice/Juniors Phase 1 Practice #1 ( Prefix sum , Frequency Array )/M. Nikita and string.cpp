#include <iostream>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	string s;
	cin >> s;
	s = '#' + s; //make string 1-based not 0 by adding any char in the front 

	int prefa[100001] = { 0 }, prefb[100001] = { 0 }, mxsize = 0;

	for (int i = 1; i < s.size(); i++) {
		prefa[i] = s[i] == 'a'; prefa[i] += prefa[i - 1];
		prefb[i] = s[i] == 'b'; prefb[i] += prefb[i - 1];
	}

	for (int i = 0; i < s.size(); i++) {
		for (int j = i; j < s.size(); j++) {
			int length1 = prefa[i];
			int length2 = prefb[j] - prefb[i];
			int length3 = prefa[s.size() - 1] - prefa[j];
			int currsize = length1 + length2 + length3;
			mxsize = max(mxsize, currsize);
		}
	}

	cout << mxsize;

	return 0;
}