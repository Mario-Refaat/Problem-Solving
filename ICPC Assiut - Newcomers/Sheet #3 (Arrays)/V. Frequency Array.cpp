#include <iostream>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int freq[100001] = { 0 }, n, m, x;

    cin >> n >> m;

    while (n--) {
        cin >> x;
        freq[x]++;
    }

    for (int i = 1; i <= m; i++)
        cout << freq[i] << "\n";

    return 0;
}
