#include <iostream>
using namespace std;

bool ispalindrome(int arr[], int size) {
    for (int i = 0; i < size / 2; i++)
        if (arr[i] != arr[size - i - 1])
            return 0;
    return 1;
}

bool isWonderful(int num) {
    if (num % 2 == 0)
        return 0;

    int binarynum[100], i = 0; //convert decimal to binary
    while (num) {
        binarynum[i++] = num % 2;
        num /= 2;
    }

    if (ispalindrome(binarynum, i))
        return 1;
    else
        return 0;
}

int main() {

    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n;
    cin >> n;
    if (isWonderful(n))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
