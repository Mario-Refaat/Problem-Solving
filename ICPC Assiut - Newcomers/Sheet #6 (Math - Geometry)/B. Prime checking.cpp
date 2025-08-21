#include <iostream>
using namespace std;

int main() {

    ios::sync_with_stdio(false); cin.tie(nullptr);

    long long n;
    cin >> n;
    bool isprime = true;

    for (long long i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            isprime = false;
            break;
        }
    }

    if (isprime && n > 1)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
