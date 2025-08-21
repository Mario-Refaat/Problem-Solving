#include <iostream>
using namespace std;

int LengthOfSequence(long long num, int counter = 1) {

    if (num == 1)
        return counter;
    return(num % 2) ? LengthOfSequence(num * 3 + 1, counter + 1) : LengthOfSequence(num / 2, counter + 1);
}

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    long long num;
    cin >> num;
    cout << LengthOfSequence(num);

    return 0;
}