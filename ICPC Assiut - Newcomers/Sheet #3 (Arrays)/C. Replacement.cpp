#include <iostream>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int arr[10001], n;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++)
        if (arr[i] > 0)
            cout << 1 << " ";
        else if (arr[i] < 0)
            cout << 2 << " ";
        else
            cout << 0 << " ";

    return 0;
}
