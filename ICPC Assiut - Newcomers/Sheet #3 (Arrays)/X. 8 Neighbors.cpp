#include <iostream>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL);

    char arr[101][101];
    int n, m, x, y;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];

    cin >> x >> y;
    x--; y--;

    if (arr[x - 1][y - 1] == '.' || arr[x - 1][y] == '.' || arr[x - 1][y + 1] == '.' || arr[x][y - 1] == '.' || arr[x][y + 1] == '.' || arr[x + 1][y - 1] == '.' || arr[x + 1][y] == '.' || arr[x + 1][y + 1] == '.')
        cout << "no";
    else
        cout << "yes";

    return 0;
}
