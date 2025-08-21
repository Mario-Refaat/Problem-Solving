#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int arr[1001], n, k;
    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);
    long long sum = 0;

    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] < 0 || k == 0)
            break;
        sum += arr[i];
        k--;
    }

    cout << sum;

    return 0;
}
