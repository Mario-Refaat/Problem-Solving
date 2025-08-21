#include <iostream>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int  a, b;
    char arr[25];
    cin >> a >> b;

    for (int i = 0; i < a + b + 1; i++)
        cin >> arr[i];

    for (int i = 0; i < a + b + 1; i++)
    {
        if ((i == a && arr[i] != '-') || (i != a && arr[i] == '-'))
        {
            cout << "No";
            return 0;
        }
    }

    cout << "Yes";

    return 0;
}
