#include <iostream>
using namespace std;

void LeftMax(int arr[], int size, int counter = 0, int maxnum = INT_MIN) {

    if (size == counter)
        return;
    cout << max(arr[counter], maxnum) << " ";
    return LeftMax(arr, size, counter + 1, max(arr[counter], maxnum));
}

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int arr[100001], n;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    LeftMax(arr, n);

    return 0;
}
