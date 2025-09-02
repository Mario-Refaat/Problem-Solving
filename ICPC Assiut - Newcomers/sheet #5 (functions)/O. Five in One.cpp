#include <iostream>
using namespace std;

int MaxNumber(int arr[], int size) {
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
        if (arr[i] > max)
            max = arr[i];
    return max;
}

int MinNumber(int arr[], int size) {
    int min = INT_MAX;
    for (int i = 0; i < size; i++)
        if (arr[i] < min)
            min = arr[i];
    return min;
}

int NumberOfPrimes(int arr[], int size) {

    int count = 0;

    for (int i = 0; i < size; i++)
    {
        bool flag = true;

        for (int j = 2; j * j <= arr[i]; j++)
            if (arr[i] % j == 0)
                flag = false;

        if (flag && arr[i] != 1)
            count++;
    }

    return count;
}

int NumberOfPalindrome(int arr[], int size) {

    int count = 0;

    for (int i = 0; i < size; i++)
    {
        int temp = arr[i], p = 0;

        while (temp) {
            p *= 10;
            p += temp % 10;
            temp /= 10;
        }

        if (arr[i] == p)
            count++;
    }

    return count;
}

int MaxNumberOfDivisor(int arr[], int size) {

    int maxdiv = 0, maxnum = 0;

    for (int i = 0; i < size; i++)
    {
        int div = 0;

        for (int j = 1; j <= arr[i]; j++)
            if (arr[i] % j == 0)
                div++;

        if (div > maxdiv || (div == maxdiv && maxnum < arr[i])) {
            maxdiv = div;
            maxnum = arr[i];
        }

    }
    return maxnum;
}

void Print(int arr[], int size) {

    cout << "The maximum number : " << MaxNumber(arr, size) << endl;
    cout << "The minimum number : " << MinNumber(arr, size) << endl;
    cout << "The number of prime numbers : " << NumberOfPrimes(arr, size) << endl;
    cout << "The number of palindrome numbers : " << NumberOfPalindrome(arr, size) << endl;
    cout << "The number that has the maximum number of divisors : " << MaxNumberOfDivisor(arr, size) << endl;
}

int main() {

    ios::sync_with_stdio(false); cin.tie(nullptr);

    int arr[1001], n;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    Print(arr, n);

    return 0;
}
