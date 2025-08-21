#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int cost[26];
    string s;
    cin >> s;

    for (int i = 0; i < 26; i++)
        cin >> cost[i];

    for (int i = 0; i < s.size(); i++) {
        int counter = 0;

        while (s[i] == '?') { //count number of '?'
            counter++;
            i++;
        }

        if (counter == s.size()) //?????
        {
            for (int j = 0; j < counter; j++)
                s[j] = 'a';
        }

        else if (counter == i) //???ab
        {
            char ch;
            for (int j = 0; j < 26; j++)
            {
                if (cost[j] == cost[s[i] - 97])
                {
                    ch = j + 97;
                    break;
                }
            }
            for (int j = 0; j < counter; j++)
                s[j] = ch;
        }

        else if (counter > 0 && i == s.size()) //ab???
        {
            char ch;
            for (int j = 0; j < 26; j++)
            {
                if (cost[j] == cost[s[i - counter - 1] - 97])
                {
                    ch = j + 97;
                    break;
                }
            }
            for (int j = i - counter; j < s.size(); j++)
                s[j] = ch;
        }

        else if (counter > 0)  //ab??cd
        {
            int mincost = abs(cost[0] - cost[s[i] - 97]) + abs(cost[0] - cost[s[i - counter - 1] - 97]);
            char ch = 'a';
            for (int j = 0; j < 26; j++)
            {
                if (abs(cost[j] - cost[s[i] - 97]) + abs(cost[j] - cost[s[i - counter - 1] - 97]) < mincost)
                {
                    mincost = abs(cost[j] - cost[s[i] - 97]) + abs(cost[j] - cost[s[i - counter - 1] - 97]);
                    ch = j + 97;
                }
            }
            for (int j = i - counter; j < i; j++)
                s[j] = ch;
        }
    }

    long long totalcost = 0;
    for (int i = 0; i < s.size() - 1; i++)
        totalcost += abs(cost[s[i] - 97] - cost[s[i + 1] - 97]);

    cout << totalcost << "\n" << s;

    return 0;
}
