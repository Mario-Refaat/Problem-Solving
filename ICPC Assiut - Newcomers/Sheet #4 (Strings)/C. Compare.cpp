#include <iostream>
#include <string>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL);

    string a, b;
    cin >> a >> b;
    cout << min(a, b);

    return 0;
}
