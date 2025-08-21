#include <iostream>
#include <cmath>
using namespace std;

int main() {

    ios::sync_with_stdio(false); cin.tie(nullptr);

    long long n;
    cin >> n;

    if ((long long)log2(n) == log2(n)) // check if we take power base 2 for this number will be integer or not 
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
