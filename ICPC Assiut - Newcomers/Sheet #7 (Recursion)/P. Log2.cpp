#include <iostream>
using namespace std;

int Log2(long long num , int counter = 0) {
    if (num == 1)
        return counter;
    return Log2(num / 2, counter + 1);
}

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    long long num;
    cin >> num;
    cout << Log2(num);

    return 0;
}