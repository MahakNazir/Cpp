#include <bits/stdc++.h>

using namespace std;

int knapsack(int capacity, const vector<int>& weights, const vector<int>& values, int n) {
    vector<vector<int>> dp(n + 1, vector<int>(capacity + 1, 0));

    for (int i = 1; i <= n; ++i) {
        for (int w = 1; w <= capacity; ++w) {
            if (weights[i - 1] <= w) {
                dp[i][w] = max(dp[i - 1][w], dp[i - 1][w - weights[i - 1]] + values[i - 1]);
            } else {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }
    return dp[n][capacity];
}

int main() {
    int n = 7; // Number of items
    vector<int> weights = {2, 3, 5,7, 1, 4, 1}; // Weights of the items
    vector<int> values = {10, 5, 15, 7, 6, 18, 3}; // Values of the items
    int capacity = 15; // Capacity of the knapsack

    cout << "Maximum value in Knapsack = " << knapsack(capacity, weights, values, n) << endl;
    return 0;
}
