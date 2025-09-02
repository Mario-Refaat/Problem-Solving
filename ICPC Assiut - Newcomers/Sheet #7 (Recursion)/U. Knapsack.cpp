#include <iostream>
using namespace std;

int Knapsack(int arr[21][2], int n, int w) {

    if (n < 0 || w == 0) // Base case: If there are no items left or the capacity is zero
        return 0;

    if (arr[n][0] > w) // If the weight of the current item is more than the remaining capacity, skip it
        return Knapsack(arr, n - 1, w);

    // Calculate the maximum value by either including or excluding the current item
    int includeItem = arr[n][1] + Knapsack(arr, n - 1, w - arr[n][0]);
    int excludeItem = Knapsack(arr, n - 1, w);

    return max(includeItem, excludeItem);
}

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int arr[21][2], n, w;
    cin >> n >> w;

    for (int i = 0; i < n; i++)
        cin >> arr[i][0] >> arr[i][1];

    cout << Knapsack(arr, n - 1, w);

    return 0;
}