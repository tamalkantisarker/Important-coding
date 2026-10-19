#include <bits/stdc++.h>
using namespace std;

// AtCoder Educational DP Contest: Problem E - Knapsack 2
// Constraints: N <= 100, W <= 10^9, vi <= 1000 (Total Value <= 100,000)
// Since W is up to 10^9, we cannot use weight as state.
// Instead, dp[i][v] = minimum weight required to achieve exact value v using a subset of first i items.

const int MAX_N = 105;
const int MAX_V = 100005;
const long long INF = 1e18;

long long wt[MAX_N];
long long val[MAX_N];
long long dp[MAX_N][MAX_V];

long long solve(int ind, int value_left) {
    if (value_left == 0) return 0;
    if (ind < 0) return INF;
    if (dp[ind][value_left] != -1) return dp[ind][value_left];

    // Option 1: Do not take current item
    long long ans = solve(ind - 1, value_left);

    // Option 2: Take current item if possible
    if (value_left >= val[ind]) {
        ans = min(ans, solve(ind - 1, value_left - val[ind]) + wt[ind]);
    }

    return dp[ind][value_left] = ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    memset(dp, -1, sizeof(dp));

    int n;
    long long max_w;
    if (!(cin >> n >> max_w)) return 0;

    int total_val = 0;
    for (int i = 0; i < n; ++i) {
        cin >> wt[i] >> val[i];
        total_val += val[i];
    }

    // Find the maximum value that requires weight <= max_w
    int max_achievable_value = 0;
    for (int v = total_val; v >= 0; --v) {
        if (solve(n - 1, v) <= max_w) {
            max_achievable_value = v;
            break;
        }
    }

    cout << max_achievable_value << "\n";
    return 0;
}
