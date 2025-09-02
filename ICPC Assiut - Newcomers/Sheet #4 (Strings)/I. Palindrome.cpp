#include <iostream>
#include <string>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL);

    string s;
    cin >> s;

    for (int i = 0; i < s.size() / 2; i++)
        if (s[i] != s[s.size() - i - 1])
        {
            cout << "NO";
            return 0;
        }

    cout << "YES";

    return 0;
}
