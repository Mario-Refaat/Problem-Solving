#include <iostream>
using namespace std;

void Print(int arr[], int size) {

    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}

int main() {

    ios::sync_with_stdio(false); cin.tie(nullptr);

    int arr1[10001], arr2[10001], n;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> arr1[i];
    for (int i = 0; i < n; i++)
        cin >> arr2[i];

    Print(arr2, n);
    Print(arr1, n);

    return 0;
}
