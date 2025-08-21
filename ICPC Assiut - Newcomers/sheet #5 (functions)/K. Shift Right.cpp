#include <iostream>
using namespace std;

void ShiftRight(int arr[], int shiftarr[], int size, int shift) {

    for (int i = 0; i < size; i++) {
        shiftarr[(i + shift) % size] = arr[i]; //using effictive sol to directly access new pos for index i 
    }
}

int main() {

    ios::sync_with_stdio(false); cin.tie(nullptr);

    int arr[10001], shiftarr[10001], n, x;
    cin >> n >> x;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    ShiftRight(arr, shiftarr, n, x);

    for (int i = 0; i < n; i++)
        cout << shiftarr[i] << " ";

    return 0;
}
