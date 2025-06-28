#include<bits/stdc++.h>
using namespace std;
int wt[105];
int val[105];
long long dp[105][100010];
long long func(long long ind,long long wt_left){
     if(wt_left==0){
        return 0;
     }
     if(ind<0){
        return 0;
     }
     if(dp[ind][wt_left]!=-1){
        return dp[ind][wt_left];
     }
     long long ans = func(ind-1,wt_left);
     if(wt_left>=wt[ind]){
        ans = max(ans,func(ind-1,wt_left-wt[ind])+val[ind]) ;
     }
     return dp[ind][wt_left] = ans;
}
int main(){
    memset(dp,-1,sizeof(dp));
    long long n,wt1;
    cin>>n>>wt1;
    for(int i=0;i<n;i++){
        cin>>wt[i]>>val[i];
    }
    cout<<func(n-1,wt1)<<endl;
    return 0;
}


