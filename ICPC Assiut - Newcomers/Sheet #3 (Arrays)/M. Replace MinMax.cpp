#include <iostream>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int arr[10001], n, min = INT_MAX, max = INT_MIN, maxpos = 0, minpos = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] < min)
        {
            min = arr[i];
            minpos = i;
        }
        if (arr[i] > max)
        {
            max = arr[i];
            maxpos = i;
        }
    }

    swap(arr[minpos], arr[maxpos]);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
