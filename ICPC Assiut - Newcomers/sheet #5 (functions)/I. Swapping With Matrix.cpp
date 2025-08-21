#include <iostream>
using namespace std;

void swapmatrix(int arr[501][501], int size, int x, int y) {

    for (int i = 0; i < size; i++)
        swap(arr[x][i], arr[y][i]);

    for (int i = 0; i < size; i++)
        swap(arr[i][x], arr[i][y]);
}

int main() {

    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n, arr[501][501], x, y;
    cin >> n >> x >> y;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];

    swapmatrix(arr, n, --x, --y);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << arr[i][j] << " ";
        cout << "\n";
    }

    return 0;
}
