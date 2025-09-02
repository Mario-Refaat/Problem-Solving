#include <iostream>
#include <string>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int f[130] = { 0 };
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++)
        f[s[i]]++;

    for (int i = 0; i < 130; i++)
        if (f[i] != 0)
            cout << (char)i << " : " << f[i] << "\n";

    return 0;
}
