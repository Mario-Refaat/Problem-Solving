#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int arr[100001], n, q;
    cin >> n >> q;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);

    while (q--) {
        int x;
        cin >> x;

        int start = 0, end = n - 1, mid, flag = 0;
        while (start <= end) {
            mid = (start + end) / 2;
            if (arr[mid] == x)
            {
                flag = 1;
                break;
            }
            else if (arr[mid] > x)
                end = mid - 1;
            else
                start = mid + 1;
        }
        if (flag)
            cout << "found\n";
        else
            cout << "not found\n";
    }

    return 0;
}
