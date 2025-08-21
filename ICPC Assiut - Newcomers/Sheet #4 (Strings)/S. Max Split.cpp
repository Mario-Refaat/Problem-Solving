#include <iostream>
#include <string>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL);

    string s;
    cin >> s;

    int res = 0, l = 0, r = 0;

    for (int i = 0; i < s.size(); i++) //get number of max split
    {
        if (s[i] == 'L')
            l++;
        else
            r++;
        if (l == r) {
            res++;
            l = 0;
            r = 0;
        }
    }

    cout << res << "\n";

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'L')
            l++;
        else
            r++;

        cout << s[i];

        if (l == r) {
            cout << "\n";
            l = 0;
            r = 0;
        }
    }

    return 0;
}
