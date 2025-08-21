#include <iostream>
#include <cmath>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int arr1[10001], arr2[10001], n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
        cin >> arr1[i];
    for (int i = 0; i < m; i++)
        cin >> arr2[i];

    int counter2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr1[i] == arr2[counter2])
            counter2++;
        if (counter2 == m)
            break;
    }

    if (counter2 == m)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
