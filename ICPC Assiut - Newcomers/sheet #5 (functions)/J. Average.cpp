#include <iostream>
#include <iomanip>
using namespace std;

double AVG(double arr[], double size) {
    double sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];
    return sum / size;
}

int main() {

    ios::sync_with_stdio(false); cin.tie(nullptr);

    double arr[10001], n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << fixed << setprecision(6) << AVG(arr, n);

    return 0;
}
