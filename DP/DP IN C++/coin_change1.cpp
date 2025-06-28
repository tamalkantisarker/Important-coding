// coin change problem using dp
#include<bits/stdc++.h>
using namespace std;
int dp[10010];
int coinchange(vector<int>&v, int amount){
    if(amount==0){
        return 0;
    }
    if(dp[amount]!=-1){
        return dp[amount];
    }
    int ans = INT_MAX;
    for(auto &coin : v){
        if(amount-coin>=0){
            ans = min(ans+0LL,coinchange(v,amount-coin)+1LL);
        }
    }
    return dp[amount] = ans;
}
int main(){
    memset(dp,-1,sizeof(dp));
    int n; cin>>n;
    vector<int>v(n);
    for(auto &i : v) cin>>i;
    int amount;
    cin>>amount;
    cout<<(coinchange(v,amount)==INT_MAX?-1:coinchange(v,amount))<<endl;
    return 0;
}












