#include <iostream>
#include <string>
using namespace std;

int CountVowels(string s, int counter = 0, int res = 0) {

    if (s.size() == counter)
        return res;

    for (char c : {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'})
        if (s[counter] == c)
            res++;

    return CountVowels(s, counter + 1, res);
}

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    string s;
    getline(cin, s);

    cout << CountVowels(s);

    return 0;
}
