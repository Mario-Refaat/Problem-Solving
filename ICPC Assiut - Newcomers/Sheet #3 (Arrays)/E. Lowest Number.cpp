#include <iostream>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, min = INT_MAX, pos, x;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        if (x < min)
        {
            min = x;
            pos = i;
        }
    }
    cout << min << " " << pos;

    return 0;
}
