#include <iostream>
#include <cmath>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, sumdia1 = 0, sumdia2 = 0, x;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> x;
            if (i == j)
                sumdia1 += x;
            if (j == n - i + 1)
                sumdia2 += x;
        }
    }

    cout << abs(sumdia1 - sumdia2);

    return 0;
}
