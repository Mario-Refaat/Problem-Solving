#include <iostream>
using namespace std;

void PrintMinMax(int arr[], int size) {
    int min = INT_MAX;
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
    cout << min << " " << max;
}

int main() {

    ios::sync_with_stdio(false); cin.tie(nullptr);

    int arr[1001], n;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    PrintMinMax(arr, n);

    return 0;
}
