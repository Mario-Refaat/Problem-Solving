#include <iostream>
using namespace std;

bool ReachValue(long long n, long long sum = 1) {
    if (n <= sum)
        return n == sum;
    return ReachValue(n, sum * 10) || ReachValue(n, sum * 20);
}

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {

        long long n;
        cin >> n;
        cout << (ReachValue(n) ? "YES\n" : "NO\n");
    }

    return 0;
}