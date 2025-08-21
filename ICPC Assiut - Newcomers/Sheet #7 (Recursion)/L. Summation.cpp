#include <iostream>
using namespace std;

long long Summation(int arr[], int size, long long sum = 0) {

    if (size == 0)
        return sum;
    sum += arr[size - 1];
    return Summation(arr, size - 1, sum);
}

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int arr[1001], n;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << Summation(arr, n);

    return 0;
}