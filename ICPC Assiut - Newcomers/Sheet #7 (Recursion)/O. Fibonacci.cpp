#include <iostream>
using namespace std;

int Fibonacci(int num) {

    if (num <= 2)
        return num - 1;
    return Fibonacci(num - 1) + Fibonacci(num - 2);
}

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int num;
    cin >> num;
    cout << Fibonacci(num);

    return 0;
}