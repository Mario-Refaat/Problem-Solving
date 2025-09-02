#include <iostream>
using namespace std;

unsigned long long nCr(long long n, long long r) {
    if (r > n)
        return 0;
    if (r == 0 || r == n)
        return 1;
    return nCr(n - 1, r - 1) + nCr(n - 1, r);
}


int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    long long n, r;
    cin >> n >> r;
    cout << nCr(n, r);

    return 0;
}