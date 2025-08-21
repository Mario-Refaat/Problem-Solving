#include <iostream>
using namespace std;

int NumberOfWays(int start, int end) {
    if (start >= end)
        return start == end;
    return NumberOfWays(start + 1, end) + NumberOfWays(start + 2, end) + NumberOfWays(start + 3, end);
}

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int s, e;
    cin >> s >> e;
    cout << NumberOfWays(s, e);

    return 0;
}
