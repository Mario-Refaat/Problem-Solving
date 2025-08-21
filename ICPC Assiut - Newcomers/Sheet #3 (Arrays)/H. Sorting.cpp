#include <iostream>
using namespace std;

void SelectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int min = arr[i];
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < min) {
                min = arr[j];
                swap(arr[j], arr[i]);
            }
        }
    }
}

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int arr[100001], n;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    SelectionSort(arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
