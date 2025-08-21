#include <iostream>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int arr[100001], n, sumneg = 0, sumpos = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++) //if start with negative sign
        if (i % 2 == 0 && arr[i] > 0 || i % 2 != 0 && arr[i] < 0)
            sumneg++;

    for (int i = 0; i < n; i++) //if start with positive sign
        if (i % 2 == 0 && arr[i] < 0 || i % 2 != 0 && arr[i] > 0)
            sumpos++;

    cout << min(sumneg, sumpos);

    return 0;
}
