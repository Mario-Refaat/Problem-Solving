#include <iostream>
#include <string>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, score = 0;
    string s;
    cin >> n >> s;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'V')
            score += 5;
        else if (s[i] == 'W')
            score += 2;
        else if (s[i] == 'X' && i != s.size() - 1)
            i++;
        else if (s[i] == 'Y' && i != s.size() - 1)
        {
            s.push_back(s[i + 1]);
            i++;
        }
        else if (s[i] == 'Z' && i != s.size() - 1)
        {
            if (s[i + 1] == 'V')
            {
                score /= 5;  i++;
            }
            else if (s[i + 1] == 'W')
            {
                score /= 2; i++;
            }
        }
    }

    cout << score;

    return 0;
}
