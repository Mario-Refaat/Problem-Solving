#include <iostream>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL);

    long long fib[51];

    fib[0] = 0; fib[1] = 1;

    for (int i = 2; i < 51; i++)
        fib[i] = fib[i - 1] + fib[i - 2];

    int n;
    cin >> n;

    cout << fib[n - 1];

    return 0;
}
