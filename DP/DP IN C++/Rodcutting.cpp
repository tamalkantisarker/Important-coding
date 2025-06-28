#include<bits/stdc++.h>
using namespace std;
int dp[1005];
int func(int len,vector<int>&v){
    if(len==0) return 0;
    if(dp[len]!=-1) return dp[len];
    int ans = 0;
    for(int  len_to_cut = 1;len_to_cut<=v.size();len_to_cut++){
        if(len>=len_to_cut){
           ans = max(ans,func(len-len_to_cut,v)+v[len_to_cut-1]);
        }
    }
    return dp[len] = ans;
}
int main(){
    memset(dp,-1,sizeof(dp));
    int len;
    cin>>len;
    vector<int>v(len);
    for(int i=0;i<len;i++){
        cin>>v[i];
    }
    cout<<func(len,v)<<endl;
    return 0;
}