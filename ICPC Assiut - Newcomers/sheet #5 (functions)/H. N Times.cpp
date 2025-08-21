#include <iostream>
using namespace std;

void PrintNTimes(char ch, int times) {
    for (int i = 0; i < times; i++)
        cout << ch << " ";
}

int main() {

    ios::sync_with_stdio(false); cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {

        int n;
        char ch;
        cin >> n >> ch;

        PrintNTimes(ch, n);

        cout << "\n";
    }

    return 0;
}
