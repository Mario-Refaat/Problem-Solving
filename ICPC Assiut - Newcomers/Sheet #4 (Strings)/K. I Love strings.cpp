#include <iostream>
#include <string>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {

        string a, b;
        cin >> a >> b;
        int i = 0, j = 0;

        while (i < a.size() || j < b.size()) {

            if (i < a.size())
                cout << a[i++];

            if (j < b.size())
                cout << b[j++];
        }

        cout << "\n";
    }

    return 0;
}
