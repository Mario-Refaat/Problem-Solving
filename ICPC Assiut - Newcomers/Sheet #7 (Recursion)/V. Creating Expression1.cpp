#include <iostream>
using namespace std;

bool Expression(int arr[], int n, int x, int currentsum, int index = 1) {
    if (index == n)
        return currentsum == x;

    bool route1 = Expression(arr, n, x, currentsum + arr[index], index + 1);
    bool route2 = Expression(arr, n, x, currentsum - arr[index], index + 1);

    return route1 || route2;
}

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int arr[21], n, x;
    cin >> n >> x;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << (Expression(arr, n, x, arr[0]) ? "YES" : "NO");

    return 0;
}