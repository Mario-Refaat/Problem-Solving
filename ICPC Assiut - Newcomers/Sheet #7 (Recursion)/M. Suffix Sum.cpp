#include <iostream>
using namespace std;

long long SuffixSum(int arr[], int size, int counter) {

    if (counter == 0)
        return 0;
    return arr[size - 1] + SuffixSum(arr, size - 1, counter - 1);
}

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int arr[100001], n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << SuffixSum(arr, n, m);

    return 0;
}