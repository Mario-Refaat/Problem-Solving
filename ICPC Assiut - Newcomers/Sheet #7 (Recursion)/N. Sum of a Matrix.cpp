#include <iostream>
using namespace std;

void SumMatrix(int arr1[101][101], int arr2[101][101], int row, int col) {

    if (row < 0)
        return;

    SumMatrix(arr1, arr2, row - 1, col);

    for (int i = 0; i <= col; i++)
        cout << arr1[row][i] + arr2[row][i] << " ";
    cout << '\n';
}

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int arr1[101][101], arr2[101][101], r, c;
    cin >> r >> c;

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> arr1[i][j];

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> arr2[i][j];

    SumMatrix(arr1, arr2, r - 1, c - 1);

    return 0;
}