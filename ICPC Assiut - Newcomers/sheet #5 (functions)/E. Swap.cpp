#include <iostream>
using namespace std;

void Swap(int& a, int& b) {
    a += b;
    b = a - b;
    a = a - b;
}

int main() {

    ios::sync_with_stdio(false); cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    Swap(a, b);
    cout << a << " " << b;

    return 0;
}
