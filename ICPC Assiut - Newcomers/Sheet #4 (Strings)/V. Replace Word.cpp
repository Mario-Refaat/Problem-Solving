#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL);

    string s;
    cin >> s;

    int pos;

    while ((pos = s.find("EGYPT")) != string::npos) {
        s.replace(pos, 5, " ");
    }
    cout << s;

    return 0;
}
