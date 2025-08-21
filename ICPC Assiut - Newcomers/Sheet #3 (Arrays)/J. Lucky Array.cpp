#include <iostream>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int arr[1001], n, min = INT_MAX, counter = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    for (int i = 0; i < n; i++)
        if (arr[i] == min)
            counter++;

    (counter % 2) ? cout << "Lucky" : cout << "Unlucky";

    return 0;
}
