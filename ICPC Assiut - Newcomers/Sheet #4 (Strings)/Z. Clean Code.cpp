#include <iostream>
#include <string>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL);

    string s;
    bool flag = true; //check if we are in multi comments ' /**/ '

    while (getline(cin, s)) {

        bool flagprint = false;

        if (s == " ")
            continue;

        for (int i = 0; i < s.size(); i++) {
            if (flag && s[i] == '/' && s[i + 1] == '/')  /* // "dont take care of (//) here" */
                break;
            else if (flag && s[i] == '/' && s[i + 1] == '*')
            {
                flag = false;
                i++;
            }
            else if (!flag && s[i] == '*' && s[i + 1] == '/')
            {
                flag = true;
                i++;
            }
            else if (flag)
            {
                cout << s[i];
                flagprint = true;
            }
        }
        if (flagprint && flag)
            cout << '\n';
    }

    return 0;
}
