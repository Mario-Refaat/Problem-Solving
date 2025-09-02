#include <iostream>
#include <string>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL);

    string s;
    cin >> s;

    int sum = 0;

    for (int i = 0; i < s.size(); i++)
        sum += s[i] - '0';

    cout << sum;

    return 0;
}
