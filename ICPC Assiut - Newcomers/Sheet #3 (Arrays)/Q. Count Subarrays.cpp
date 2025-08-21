#include <iostream>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {

        int arr[101], n, res = 0;
        cin >> n;

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        for (int counter = 0; counter < n; counter++) {
            for (int i = 0; i < n - counter; i++) {
                int max = arr[i];
                bool flag = true;
                for (int j = i; j <= counter + i; j++) {
                    if (max > arr[j])
                    {
                        flag = false;
                        break;
                    }
                    max = arr[j];
                }
                if (flag) res++;
            }
        }
        cout << res << "\n";
    }

    return 0;
}
