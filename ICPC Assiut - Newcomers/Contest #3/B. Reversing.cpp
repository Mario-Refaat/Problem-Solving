#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int arr[101], n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 0)
            reverse(arr, arr + i);
    }

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
