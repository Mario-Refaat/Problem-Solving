#include <iostream>
using namespace std;



int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {

        int arr[1001], n, min = INT_MAX;
        cin >> n;

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        for (int i = 0; i < n; i++)
            for (int j = i + 1; j < n; j++)
                if (arr[i] + arr[j] + j - i < min)
                    min = arr[i] + arr[j] + j - i;

        cout << min << "\n";
    }
    return 0;
}
