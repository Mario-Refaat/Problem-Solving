#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int size, q;
    string s;
    cin >> size >> q >> s;

    while (q--) {
        string a;
        int x, y;
        cin >> a;

        if (a == "substr")
        {
            cin >> x >> y;
            cout << s.substr(min(x, y) - 1, abs(y - x) + 1) << "\n";
        }

        else if (a == "sort")
        {
            cin >> x >> y;
            sort(s.begin() + min(x, y) - 1, s.begin() + max(x, y));
        }

        else if (a == "pop_back")
        {
            s.pop_back();
        }

        else if (a == "back")
        {
            cout << s.back() << "\n";
        }

        else if (a == "reverse")
        {
            cin >> x >> y;
            reverse(s.begin() + min(x, y) - 1, s.begin() + max(x, y));
        }

        else if (a == "front")
        {
            cout << s.front() << "\n";
        }

        else if (a == "push_back")
        {
            char ch;
            cin >> ch;
            s.push_back(ch);
        }

        else
        {
            cin >> x;
            cout << s[x - 1] << "\n";
        }

    }

    return 0;
}
