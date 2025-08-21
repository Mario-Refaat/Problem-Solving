#include <iostream>
using namespace std;

int maxpath(int arr[11][11], int n, int m, int row = 0, int col = 0) {

    if (row == n - 1 && col == m - 1)
        return arr[row][col];
    else if (row == n || col == m)
        return INT_MIN;
    return arr[row][col] + max(maxpath(arr, n, m, row + 1, col), maxpath(arr, n, m, row, col + 1));
}

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int arr[11][11], n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];

    cout << maxpath(arr, n, m);

    return 0;
}