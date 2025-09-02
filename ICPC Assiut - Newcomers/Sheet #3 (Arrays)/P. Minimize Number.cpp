#include <iostream>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int arr[1001], n, res = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    while (true) {

        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 != 0) {
                cout << res;
                return 0;
            }
            else
                arr[i] /= 2;
        }

        res++;
    }

    return 0;
}
