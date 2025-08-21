#include <iostream>
using namespace std;

int freq1[10000001], freq2[10000001];

int main() { //i solve it using freq array but there is another better sol --> get the 2 array and sort them then compare each index if not equal so it's not a Permutation if all index equels so it's a Permutation :)

    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, x;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        freq1[x]++;
    }

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        freq2[x]++;
    }

    for (int i = 0; i < 10000000; i++)
        if (freq1[i] != freq2[i])
        {
            cout << "no";
            return 0;
        }

    cout << "yes";

    return 0;
}
