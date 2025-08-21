#include <iostream>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int arr[100001], n;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n / 2; i++)
    {
        if (arr[i] != arr[n - i - 1]) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";

    return 0;
}
