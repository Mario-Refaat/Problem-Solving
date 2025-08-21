#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j == i && i != n / 2)
                cout << "\\";
            else if (j == n - i - 1 && i != n / 2)
                cout << "/";
            else if (j == n / 2 && i == n / 2)
                cout << "X";
            else
                cout << "*";
        }
        cout << "\n";
    }

    return 0;
}
