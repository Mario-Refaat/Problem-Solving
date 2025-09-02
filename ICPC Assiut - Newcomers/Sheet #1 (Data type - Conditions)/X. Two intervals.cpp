#include <iostream>
using namespace std;

int main() {

	int l1, r1, l2, r2;
	cin >> l1 >> r1 >> l2 >> r2;

	if (r1 < l2 || r2 < l1) //there is no intersection   :  1 '3' , '4' 6  ||  '4' 6 , 1 '3'
		cout << -1;
	else
		cout << max(l1, l2) << " " << min(r1, r2); //to get intersection 

	return 0;
}
