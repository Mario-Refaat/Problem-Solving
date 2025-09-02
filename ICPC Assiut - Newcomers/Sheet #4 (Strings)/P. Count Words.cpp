#include <iostream>
#include <string>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL);

    string s;
    int res = 0;
    bool flag = true; // refer to not letter : ' '  ','  '.'  '?'  '!'
    getline(cin, s);

    for (int i = 0; i < s.size(); i++) {

        if (s[i] >= 'A' && s[i] <= 'z') //if it letter 
        {
            if (flag) //if prev one not letter
                res++;

            flag = false;
        }
        else
            flag = true;
    }

    cout << res;

    return 0;
}
