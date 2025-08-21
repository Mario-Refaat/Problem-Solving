#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int freq[1002] = { 0 }, n, res = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        freq[x]++;
    }

    for (int i = 0; i < 1002; i++)
        if (freq[i + 1] > 0)
            res += freq[i];

    cout << res;

    return 0;
}
