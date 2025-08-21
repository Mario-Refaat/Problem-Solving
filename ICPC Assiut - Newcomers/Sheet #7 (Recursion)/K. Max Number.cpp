#include <iostream>
using namespace std;

int MaxNumber(int arr[], int size, int max = INT_MIN) {

    if (size == 0)
        return max;
    if (arr[size - 1] > max)
        max = arr[size - 1];
    return MaxNumber(arr, size - 1, max);
}

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int arr[1001], n;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << MaxNumber(arr, n);

    return 0;
}
