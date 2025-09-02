#include <iostream>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {

        int arr[101], n;
        cin >> n;

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        for (int counter = 0; counter < n; counter++) {
            for (int i = 0; i < n - counter; i++) {
                int max = arr[i];
                for (int j = i; j <= counter + i; j++)
                {
                    if (arr[j] > max)
                        max = arr[j];
                }
                cout << max << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}
