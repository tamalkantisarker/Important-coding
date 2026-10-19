#include <bits/stdc++.h>
using namespace std;

// Equal Subset Sum Partition / Subset Sum Problem
int dp[200][20005];

bool func(int ind, int sum, const vector<int>& v) {
    if (sum == 0) return true;
    if (ind < 0) return false;
    if (dp[ind][sum] != -1) return dp[ind][sum] == 1;

    bool ispossible = func(ind - 1, sum, v);
    if (sum >= v[ind]) {
        ispossible = ispossible || func(ind - 1, sum - v[ind], v);
    }
    dp[ind][sum] = ispossible ? 1 : 0;
    return ispossible;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    memset(dp, -1, sizeof(dp));
    int n;
    if (!(cin >> n)) return 0;

    vector<int> v(n);
    int total_sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        total_sum += v[i];
    }

    // Partition into two subsets with equal sum:
    if (total_sum & 1) {
        cout << "Not possible\n";
        return 0;
    }

    if (func(n - 1, total_sum / 2, v)) {
        cout << "Possible\n";
    } else {
        cout << "Not Possible\n";
    }
    return 0;
}
