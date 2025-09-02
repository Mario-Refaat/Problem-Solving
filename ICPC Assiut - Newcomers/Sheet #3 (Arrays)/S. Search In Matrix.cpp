#include <iostream>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int arr[100001], n, m;
    cin >> n >> m;

    for (int i = 0; i < n * m; i++)
        cin >> arr[i];

    int x;
    cin >> x;

    for (int i = 0; i < n * m; i++)
        if (x == arr[i]) {
            cout << "will not take number";
            return 0;
        }

    cout << "will take number";

    return 0;
}
