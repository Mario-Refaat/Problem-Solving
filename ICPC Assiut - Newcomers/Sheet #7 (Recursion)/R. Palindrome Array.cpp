#include <iostream>
using namespace std;

bool isPalindrome(int arr[], int size, int counter = 0) {

    if (counter == size / 2)
        return true;
    else if (arr[size - counter - 1] != arr[counter])
        return false;
    else
        return isPalindrome(arr, size, counter + 1);
}

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int arr[100001], n;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << (isPalindrome(arr, n) ? "YES" : "NO");

    return 0;
}