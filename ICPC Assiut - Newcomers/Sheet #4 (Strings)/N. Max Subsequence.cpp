#include <iostream>
#include <string>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL);

    string s;
    int n, res = 1;
    cin >> n >> s;

    for (int i = 1; i < n; i++)
    {
        if (s[i] != s[i - 1])
            res++;
    }

    cout << res;

    return 0;
}
