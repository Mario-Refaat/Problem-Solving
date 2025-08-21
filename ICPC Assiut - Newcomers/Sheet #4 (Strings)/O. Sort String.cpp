#include <iostream>
#include <string>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int freq[130] = { 0 }, n;
    cin >> n;

    while (n--) {
        char ch;
        cin >> ch;
        freq[ch]++;
    }

    for (int i = 97; i <= 122; i++)
    {
        while (freq[i]--)
            cout << (char)i;
    }

    return 0;
}
