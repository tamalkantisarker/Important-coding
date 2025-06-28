#include<bits/stdc++.h>
using namespace std;
int dp[200][20005];
bool func(int ind,int sum,vector<int>&v){
    if(sum==0){
        return true;
    }
    if(ind<0){
        return false;
    }
    if(dp[ind][sum]!=-1) return dp[ind][sum];
    bool ispossible = func(ind-1,sum,v);
    if(sum>=v[ind]){
        ispossible|= func(ind-1,sum-v[ind],v);
    }
    return dp[ind][sum] = ispossible;
}
int main(){
    memset(dp,-1,sizeof(dp));
    int n; cin>>n;
    vector<int>v(n);
    for(auto &i : v) cin>>i;
    int sum; cin>>sum;
    if(sum&1){
        cout<<"Not possible"<<endl;
        return 0;
    }
    else{
        if(func(n-1,sum/2,v)){
            cout<<"Possible"<<endl;
            return 0;
        }
        else{
            cout<<"Not Possible"<<endl;
            return 0;
        }
    }
    return 0;
}



