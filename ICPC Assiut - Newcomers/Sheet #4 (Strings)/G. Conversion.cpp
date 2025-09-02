#include <iostream>
#include <string>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL);

    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ',')
            s[i] = ' ';
        else if (s[i] < 'a')
            s[i] += 32;
        else
            s[i] -= 32;
    }

    cout << s;

    return 0;
}
