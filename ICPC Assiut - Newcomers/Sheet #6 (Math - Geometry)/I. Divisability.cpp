#include <iostream>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	long long a, b, x;
	cin >> a >> b >> x;

	if (a > b)
		swap(a, b);
	a--;

	/*
							Time for math :D

		we need to get sum of all numbers from 1 to A divisble by X
		Ex: A = 20  , X = 5;

		So we need get these numbers: 5    +  10  +  15  +  20
		we can say                  : 5(1) + 5(2) + 5(3) + 5(4)
		then take the intersction   :     5(1+2+3+4)

		so now we need to get summtion of all numbers between 1 - 4 then multiply it * 5

		-->                         : 5(Sum(1->N))    ,    N = 20/5 = 5    N = A/X

		Finally we can say the Formula : X * Sum(1->N))
										 N=A/X     ,      Sum(1->N) = N*(N+1)/2

	*/

	long long aCount = a / x; // N for A
	long long bCount = b / x; // N for B

	long long sumA = (aCount * (aCount + 1) / 2) * x;
	long long sumB = (bCount * (bCount + 1) / 2) * x;

	cout << sumB - sumA;

	return 0;
}