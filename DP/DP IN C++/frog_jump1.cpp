// frog jump1 using dp
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int arr[N];
int dp[N];

int func(int i){
    if(i==0) return 0;
    if(dp[i]!=-1){
       return dp[i];
    }
    int cost = INT_MAX;
    cost = min(cost,func(i-1)+abs(arr[i-1]-arr[i]));
    if(i>1){
        cost = min(cost,func(i-2)+abs(arr[i-2]-arr[i]));   
    }
    return dp[i] = cost;
}
int main(){
    memset(dp,-1,sizeof(dp));
    int n; cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<func(n-1)<<endl;
    return 0;
}




