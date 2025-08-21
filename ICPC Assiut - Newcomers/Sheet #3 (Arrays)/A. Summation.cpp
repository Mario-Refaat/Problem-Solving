#include <iostream>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL);

    long long n, x, sum = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        sum += x;
    }

    cout << abs(sum);

    return 0;
}
