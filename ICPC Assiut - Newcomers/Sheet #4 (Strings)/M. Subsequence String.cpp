#include <iostream>
#include <string>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL);

    string s, temp = "hello";
    int i = 0, j = 0;
    cin >> s;

    for (; i < s.size(); i++)
    {
        if (s[i] == temp[j])
            j++;

        if (j == 5)
        {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";

    return 0;
}
