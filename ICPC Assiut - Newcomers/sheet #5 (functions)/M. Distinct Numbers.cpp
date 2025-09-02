#include <iostream>
#include <algorithm>
using namespace std;

int DistinctNumbers(int arr[], int size) {

    int sum = 0;
    sort(arr, arr + size);

    for (int i = 0; i < size; i++)
        if (arr[i] != arr[i + 1])
            sum++;

    return sum;
}

int main() {

    ios::sync_with_stdio(false); cin.tie(nullptr);

    int arr[10001], n;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << DistinctNumbers(arr, n);

    return 0;
}
