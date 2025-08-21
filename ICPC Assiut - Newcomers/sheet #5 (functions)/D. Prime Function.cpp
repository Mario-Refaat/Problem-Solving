#include <iostream>
using namespace std;

bool isprime(long long num) {
    if (num == 1)
        return false;
    for (long long i = 2; i * i <= num; i++)
        if (num % i == 0)
            return false;
    return true;
}

int main() {

    ios::sync_with_stdio(false); cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int num;
        cin >> num;
        if (isprime(num))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
