#include <iostream>
using namespace std;

void PrintNumber(int n) {
    for (int i = 1; i <= n; i++)
        if (i != n)
            cout << i << " ";
        else
            cout << i;
}

int main() {

    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n;
    cin >> n;
    PrintNumber(n);

    return 0;
}
