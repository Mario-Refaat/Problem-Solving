#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int arr[100001], n, q, x;
    cin >> n >> q;

    for (int i = 0; i < n; i++) cin >> arr[i];

    sort(arr, arr + n);

    while (q--) {
        string s;
        cin >> s;

        if (s == "binary_search") {
            cin >> x;
            cout << (binary_search(arr, arr + n, x) ? "found\n" : "not found\n");
        }
        else if (s == "lower_bound") {
            cin >> x;
            int pos = lower_bound(arr, arr + n, x) - arr;
            cout << (pos == n ? -1 : arr[pos]) << endl;
        }
        else {
            cin >> x;
            int pos = upper_bound(arr, arr + n, x) - arr;
            cout << (pos == n ? -1 : arr[pos]) << endl;
        }
    }

    return 0;
}
