#include <iostream>
using namespace std;

int main() {

    ios::sync_with_stdio(false); cin.tie(nullptr);

    long long a, b;
    cin >> a >> b;

    if (a > b)
        swap(a, b);

    a--; // because it's inclusive  

    long long SumAll = (b + 1) * b / 2 - (a + 1) * a / 2;               // arithmetic formula : (N+1)*N/2
    long long SumEven = (b / 2 + 1) * (b / 2) - (a / 2 + 1) * (a / 2);  // arithmetic formula : ((N/2)+1)*(N/2)
    long long SumOdd = SumAll - SumEven;                                // arithmetic formula : S(all) - S(even)

    cout << SumAll << "\n" << SumEven << "\n" << SumOdd;

    return 0;
}
