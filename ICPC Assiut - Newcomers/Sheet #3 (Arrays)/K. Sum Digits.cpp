#include <iostream>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, sum = 0;
    char arr[1000001];
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++)
        sum += arr[i] - '0';

    cout << sum;

    return 0;
}
