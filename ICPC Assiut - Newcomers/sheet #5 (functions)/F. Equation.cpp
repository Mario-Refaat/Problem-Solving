#include <iostream>
#include <cmath>
using namespace std;

long long Equation(int x, int n) {
    long long sum = 0;
    for (int i = 2; i <= n; i += 2)
        sum += pow(x, i);
    return sum;
}

int main() {

    ios::sync_with_stdio(false); cin.tie(nullptr);

    int x, n;
    cin >> x >> n;
    cout << Equation(x, n);

    return 0;
}
