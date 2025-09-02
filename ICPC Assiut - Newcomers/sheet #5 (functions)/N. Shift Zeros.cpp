#include <iostream>
using namespace std;

void ShiftZeros(int arr[], int size) {

    int zeros = 0;

    for (int i = 0; i < size; i++)
        if (arr[i] != 0)
            cout << arr[i] << " ";
        else
            zeros++;

    while (zeros--)
        cout << 0 << " ";

}

int main() {

    ios::sync_with_stdio(false); cin.tie(nullptr);

    int arr[10001], n;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    ShiftZeros(arr, n);

    return 0;
}
