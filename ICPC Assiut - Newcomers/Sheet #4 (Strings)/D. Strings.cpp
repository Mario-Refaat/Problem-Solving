#include <iostream>
#include <string>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL);

    string a, b;
    cin >> a >> b;

    cout << a.size() << " " << b.size() << "\n" << a + b << "\n";
    swap(a[0], b[0]);
    cout << a + " " + b;

    return 0;
}
