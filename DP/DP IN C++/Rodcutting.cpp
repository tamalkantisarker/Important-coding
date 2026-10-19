#include <bits/stdc++.h>
using namespace std;

int dp[1005];

int func(int len, const vector<int>& v) {
    if (len == 0) return 0;
    if (dp[len] != -1) return dp[len];

    int ans = 0;
    int n = static_cast<int>(v.size());
    for (int len_to_cut = 1; len_to_cut <= n; len_to_cut++) {
        if (len >= len_to_cut) {
            ans = max(ans, func(len - len_to_cut, v) + v[len_to_cut - 1]);
        }
    }
    return dp[len] = ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    memset(dp, -1, sizeof(dp));
    int len;
    if (!(cin >> len)) return 0;

    vector<int> v(len);
    for (int i = 0; i < len; i++) {
        cin >> v[i];
    }
    cout << func(len, v) << "\n";
    return 0;
}