#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int n, prev1 = 0, prev2 = 1;
    cin >> n;

    if (n == 1)
        cout << prev1;
    else if (n >= 2)
        cout << prev1 << " " << prev2 << " ";

    for (int i = 3; i <= n; i++)
    {
        cout << prev1 + prev2 << " ";
        int temp = prev2;
        prev2 += prev1;
        prev1 = temp;
    }

    return 0;
}
