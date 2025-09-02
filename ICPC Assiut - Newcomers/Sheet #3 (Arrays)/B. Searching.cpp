#include <iostream>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int arr[100001], n;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int x;
    cin >> x;

    for (int i = 0; i < n; i++)
        if (arr[i] == x)
        {
            cout << i;
            return 0;
        }

    cout << -1;

    return 0;
}
