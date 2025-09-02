#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL);

    string s;
    bool isfirst = true;

    while (cin >> s) {
        reverse(s.begin(), s.end());
        if (isfirst)
            cout << s;
        else
            cout << " " << s;
        isfirst = false;
    }

    return 0;
}
