#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL);

    string s;
    cin >> s;
    string m = s;

    for (int i = 1; i < s.size(); i++) {
        string str1 = s.substr(0, i);
        string str2 = s.substr(i);
        sort(str1.begin(), str1.end());
        sort(str2.begin(), str2.end());
        m = min(m, str1 + str2);
    }

    cout << m;

    return 0;
}
