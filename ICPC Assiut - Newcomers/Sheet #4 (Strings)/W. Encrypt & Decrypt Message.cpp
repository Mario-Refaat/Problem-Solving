#include <iostream>
#include <string>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL);

    string Key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    string Original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    string s;

    int flag;
    cin >> flag >> s;

    for (int i = 0; i < s.size(); i++) {
        if (flag == 1)
            cout << Key[Original.find(s[i])];
        else
            cout << Original[Key.find(s[i])];
    }

    return 0;
}
