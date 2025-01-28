/*#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int hsh[N];
int main(){
    int x;
    cin>>x;
    int a[x];
    for(int i=0;i<x;i++){
        cin>>a[i];
        hsh[a[i]]++;
    }
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<hsh[n]<<endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
const int N = 1e7+10;
int hsh[N];
int main(){
    vector<int>v;
    vector<int>v1;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
        v1.push_back(x);
    }
    sort(v.begin(),v.end());
    int p = v[n-1]-v[0];
    for(int i=0;i<p;i++){
        hsh[v1[i]-v[0]]++;
    }
    int t;
    cin>>t;
    while(t--){
        int l;
        cin>>l;
        cout<<hsh[l-v[0]]<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
const N = 1e7+10;
ll arr[N];
ll pre[N];
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        pre[i] = pre[i-1]+arr[i];
    }
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        cout<<pre[b]-pre[a-1]<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    vector<long long int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    long long int count;
    long long int p=0;
    vector<long long int>v1;
    for(long long int i=1;i<=v[0];i++){
        if(v[0]%i==0){
            v1.push_back(i);
        }
    }
    for(long long int i=0;i<v1.size();i++){
        count = 0;
        for(int j=0;j<v.size();j++){
            if(v[j]%v1[i]==0){
                count++;
            }
        }
        if(count == v.size()){
            p++;
        }
    }
    cout<<p<<endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    vector<long long int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    long long int g = 0;
    for(long long int i=0;i<n;i++){
        g = gcd(g,v[i]);
    }
    long long int count = 0;
    long long int j ;
    for(long long int i=1;i*i<=g;i++){
        if(g%i==0){
            count++;
            j = g/i;
            if(j>i){
                count++;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}
*
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int solve(){
    long long int a,b;
    cin>>a>>b;
    vector<int>v(a);
    for(int i=0;i<a;i++){
        cin>>v[i];
    }   
    sort(v.begin(),v.end());
    set<int>s;
    for(int i=0;i<v.size();i++){
        s.insert(v[i]);
    }
    vector<int> v1;
    for(auto value : &s){
        v1.push_back(value);
    }
    vector<int>v2;
    for(auto valu : v1){
        v2.push_back(valu);
    }
    for(int i=0;i<v1.size()-1;i++){
        int sum =0;
        if(v1[i+1]-v1[i]==1){
            for(int j=0;j<v.size();j++){
                if((v[j]==v[i] || v[j]==v[i+1]) && ((sum+v[j])<=b)){
                    sum+=v[j];
                }
            }
        }
        v2.push_back(sum);
    }
    
    return 0;
}
int main()
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
      long long int t;
      cin>>t;
      while(t--){
      solve();
}
       return 0;
}

2 2 1 2 3
2 3 4



#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int solve(){
    ll n,q;
    cin>>n>>q;
    ll arr[n];
    ll pre[n];
    pre[0]=0;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        pre[i] = pre[i-1]+arr[i];
    }
    while(q--){
       ll l,r,k;
       cin>>l>>r>>k;
       ll sum = 0;
       sum+=(r-l+1)*k+pre[l-1]+pre[n]-pre[k+1];
       cout<<sum<<endl;
    }
    return 0;
}
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
      long long int t;
      cin>>t;
      while(t--){
      solve();
}
       return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int solve(){
    string s;
    cin>>s;
    stack<char>st;
    for(int i=0;i<s.size();i++){
        if(s[i]=='('){
            st.push(s[i]);
        }
        else if(s[i]==')' &&(!s.empty()) && st.top()=='('){
            st.pop();
        }
    }
    if(s.empty()){
        cout<<"NO"<<endl;
        return 0;
    }

    return 0;
}
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
      long long int t;
      cin>>t;
      while(t--){
      solve();
}
       return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int solve(){
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int ans = 0;
    int mx_p = 0;
    int sum = 0;
        if(sum-mx_p==mx_p){
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
      long long int t;
      cin>>t;
      while(t--){
      solve();
}
       return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int solve(){
    ll n,p;
    cin>>n>>p;
    if(n==1 && p<10){
        cout<<p<<endl;
        return 0;
    }
    else if(n==1 && p==10){
        cout<<"-1"<<endl;
        return 0;
    }    
    else if(n>1){
       if(p==10){
          for(int i=0;i<n-1;i++){
            cout<<"1";
          }
          cout<<"0"<<endl;
       }
       else{
         for(int i=0;i<n-2;i++){
            cout<<"1";
         }
         cout<<6*p<<endl;
       }
    }
    return 0;
}
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
      long long int t;
      cin>>t;
      while(t--){
      solve();
}
       return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a;
    cin>>a;
    vector<string>s;
    while(a!=0){
        s.push_back(a%2);
        a/=2;
    }
    s.reverse();
    for(int i=0;i<s.size();i++){
        cout<<s[i];
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int solve(){
    ll x;
    cin>>x;
    for(ll i=1LL;i<=(ll)cbrt(x);i++){
        ll d = x - (i*i*i);
        if(d<=0){
            break;
        }
        ll p = cbrt(d);
        if(p*p*p == d){
            cout<<"YES"<<endl;
            return 0;
        }
    }   
    cout<<"NO"<<endl;
    return 0;
}
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
      long long int t;
      cin>>t;
      while(t--){
      solve();
}
       return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int solve(){
    ll n; cin>>n; vector<ll>v(n),d(n);
    for(auto &i : v) cin>>i;     
    for(int i=n-1;i>=0;i--){
       d[i] = v[i];   
       ll a = i+v[i];  
       if(a<n){
        d[i]+=d[a];
       }
    } 
    for(auto b : d) cout<<b<<endl;
    // cout<<*max_element(d.begin(),d.end())<<endl;
    return 0;
}
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
      long long int t;
      cin>>t;
      while(t--){
      solve();
}
       return 0;
}


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<string> v;
void generate(string &s,int open,int close){
     if(open==0 && close==0){
        v.push_back(s);
        return;
     }
    if(open>0){
       s.push_back('(');
       generate(s,open-1,close);
       s.pop_back();
    }
    if(close>0){
       if(open<close){
       s.push_back(')');
       generate(s,open,close-1);
       s.pop_back();
       }
    }
}
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
       int n;
       cin>>n;
       string s="";
       generate(s,n,n);
       for(int i=0;i<v.size();i++){
         cout<<v[i]<<endl;
       }
       return 0;
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
       int x; cin>>x;
       double p = pow(x,1.0/3);
       cout<<setprecision(9)<<p<<endl;
       return 0;
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const double N = 1e-6;
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
       double x,n; cin>>x>>n;
       double lo = 1,hi = x;
       double mid;
       while(hi-lo>N){
          mid = (lo+hi)/2;
          if(pow(mid,n)<x){
            lo = mid;
          }
          else{
            hi = mid;
          }
       }
       cout<<pow(x,1.0/n)<<endl;
       cout<<lo<<endl;
       return 0;
}


#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define Y cout << "YES\n";
#define N cout << "NO\n";

void solve(){
    ll n,m; cin>>n>>m;
    ll mex=0;
    while(n--){
        ll l; cin>>l;
        set<ll> st;
        while(l--){
            ll x; cin>>x;
            st.insert(x);
        }
        ll y=0,j=0;
        for(;true;){
            if(st.find(j)==st.end()){
                if(y==0) y=1;
                else{
                    mex=max(mex,j);
                    break;
                }
            }
            j++;
        }
    }
    // cout<<mex<<endl;
    ll ans=mex*min(mex+1,m+1);
    // cout<<ans<<endl;
    if(m>mex) ans+=(m*(m+1)/2-(mex)*(mex+1)/2);
    cout<<ans<<endl;
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--) solve();
}


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int solve(){
    ll n,m;
    cin>>n>>m;
    vector<ll>v; ll mex; 
    set<ll>s;
    while(n--){
       ll a;
       cin>>a;
       while(a--){
         ll  x;cin>>x;
         s.insert(x);
       }
       ll i = 0;
       for(auto e : s){
         if(i==e){
            i++;
            continue;
         }
         else{
            mex = i;
            break;
         }
       }
       if(n!=0){ s.clear();}
       s.insert(mex);
    }
    ll d = s.size();
    ll i = 0;
    for(auto e : s){
         if(i==e){
            i++;
            continue;
         }
         else{
            mex = i;
            break;
         }
    }
    s.insert(mex);
    if(d==s.size()){
      mex = i;
    }
    ll p = min(m,mex);
    if(p>m){
      cout<<(m+1)*p<<endl;
    }
    ll result = (mex+1)*mex;
    ll add = ((m*(m+1))/2) - (mex*(mex+1))/2;
    cout<<result+add<<endl; 
    return 0;
}
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
      long long int t;
      cin>>t;
      while(t--){
      solve();
}
       return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int solve(){
    ll n; cin>>n;
    if(n%2==0){
        cout<<"No"<<endl;
    }
    else{
        cout<<"Yes"<<endl;
         ll l = 1;
        vector<pair<ll,ll>>p(n);
        for(int i=0;i<n;i++){
            p[i].first = l;
            l++;
        }
        for(int i=0;i<n;i++){
            p[i].second = l;
            l++;
        }
        for(int i=0;i<n;i++){
            cout<<p[i].first<<" "<<p[i].second<<endl;
        }
    }
    return 0;
}
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
      long long int t;
      cin>>t;
      while(t--){
      solve();
}
       return 0;
}


#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define Y cout << "YES\n";
#define N cout << "NO\n";

void solve(){
    ll n,m; cin>>n>>m;
    vector<ll> v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    ll mx=*max_element(v.begin(),v.end());
    for(ll i=0;i<m;i++){
        char c; ll p,q;
        cin>>c>>p>>q;
        if(c=='+'){
            if(mx>=p && mx<=q) mx++;
            cout<<mx<<" ";
        }else{
            if(mx>=p && mx<=q) mx--;
            cout<<mx<<" ";
        }
    }
    cout<<endl;
    return;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e7+10;
ll arr[N]; ll pre[N];
#define all(x) (x).begin(), (x).end()
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
       ll n,k; cin>>n>>k;
       while(k--){
          ll a,b,c;
          cin>>a>>b>>c;
          arr[a]+=c;
          arr[b+1]-=c;
       }
       for(int i=1;i<=n;i++){
          pre[i] = pre[i-1]+arr[i];
       }
       ll d = *max_element(pre+1,pre+n);
       cout<<d<<endl;
       return 0;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--) solve();
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
       ll n; cin>>n;
       string s; ll i=1; ll sum = 19;
       if(n==1){
        cout<<"19"<<endl;
       }
       else{
         sum+=9;
         
         if(p==10){
            i++;
            if(i==n){
                cout<<sum<<endl;
            }
         }
       }
       return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()

int solve() {
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    while (k--) {
        ll a, b;
        cin >> a >> b;
        map<char, ll> m;
        for (int i = a - 1; i < b; i++) {
            m[s[i]]++;
        }
        ll odd = 0;
        for (auto &i : m) {
            if (i.second % 2 != 0) {
                odd++;
            }
        }
        if (odd <= 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
int solve(){
     ll n; cin>>n;
     vector<map<ll,ll>>m;
     vector<map<ll,ll>>m1;
     while(n--){
       ll a,b; cin>>a>>b;
       if(b==0){
          m.push_back({a,b});
       }
       else if(b==1){
          m1.push_back({a,b});
       }
     }
     if(m.size()==0 || m1.size()==0){
        cout<<"0"<<endl;
     }
     else{
        ll count = 0;
        for(auto &i : m1){
          for(auto &j : m){
            if(i.first == j.first){
               count+=m.size()-1;
            }
          }
        }
        
     }
     return 0;
}
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
      long long int t;
      cin>>t;
      while(t--){
      solve();
}
       return 0;
}


// module power
#include<bits/stdc++.h>
using namespace std;
int pw(int a,int b,int m){
       if(b==0){
          return (a%m); 
       }
       if(b%2==0){
          int t = pw(a,b/2,m);
          return (1ll*t*t%m);
       }
       else{
         int t = pw(a,(b-1)/2,m);
          t = (1ll*t*t%m); 
         return (1ll*a*t%m);
       }
}
int main(){
     int a,b,m;
     cin>>a>>b>>m;
     cout<<pw(a,b,m)<<endl;
    return 0;
}


// module division
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int pw(int a,int b,int m){
       if(b==0){
          return (a%m); 
       }
       if(b%2==0){
          int t = pw(a,b/2,m);
          return (1ll*t*t%m);
       }
       else{
         int t = pw(a,(b-1)/2,m);
          t = (1ll*t*t%m); 
         return (1ll*a*t%m);
       }
}
int main(){
     ll a,b,m;
     cin>>a>>b>>m; // this will work only in the time when m is a prime number;
     ll res1 = (a/b)%m;
     a = a%m;
     ll inv_b = pw(b,m-2,m); // fermets little theorem
     ll res2 = a*inv_b%m;
     cout<<res1<<" "<<res2<<endl;
    return 0;
}


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
       int num = 7;
       int count = __builtin_popcount(num);// this is for how many 1's in the binary digit for int
       cout<<count<<endl;
       return 0;
}


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
       ll num;
       cin>>num;
       ll count = __builtin_popcountll(num);// this is for how many 1's in the binary digit for long long int
       cout<<count<<endl;
       return 0;
}



#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
       string s; cin>>s;
       sort(s.begin(),s.end());// important
       do{
          cout<<s<<endl;
       } while(next_permutation(s.begin(),s.end()));// next permutation in stl
       return 0;
}

// this is the question where i felt uneasy
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ll n;
    cin >> n;
    vector<string>s(n); for(auto &i : s) cin>>i; 
    map<char,ll>m;
    for(int i=0;i<n;i++){
        m[s[i][0]]++;
    }
    int ans = 0;
    for (auto &i : m) {
            int k1 = i.second / 2;
            int k2 = i.second - k1;
            ans += (k1 * (k1 - 1)) / 2 + (k2 * (k2 - 1)) / 2;
    }
    cout << ans << endl;
    return 0;
}


// now all about hashing and prefix sum
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e7+10;
ll pre[N];
ll v[N];
#define all(x) (x).begin(), (x).end()
int solve(){
     ll n;cin>>n;
     cout<<pre[n]<<endl;
     return 0;
}
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
      ll n; cin>>n;
      ll v[n+1];
      for(int i=1;i<=n;i++){
         cin>>v[i];
      }
      for(int i=1;i<=n;i++){
          pre[v[i]]++;
      }
      ll t; cin>>t;
      while(t--){
      solve();
}
       return 0;
}

//for character hash array
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
const int N = 1e7+10;
ll pre[N];
int solve(){
     char ch; cin>>ch;
     cout<<pre[ch-'a']<<endl;
     return 0;
}
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
       ll n; cin>>n;
       string s; cin>>s;
       for(int i=0;i<n;i++){
          pre[s[i]-'a']++;
       }
       ll t; cin>>t;
       while(t--){
        solve();
       }
       return 0;
}


// using map for long long int
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
const int N = 1e7+10;
ll hash[N];
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
       ll n; cin>>n;
       ll arr[n];
       map<ll,ll>m;
       for(int i=0;i<n;i++){
          cin>>arr[i];
          m[arr[i]]++;
       }
       ll t;
       cin>>t;
       while(t--){
          ll num; cin>>num;
          cout<<m[num]<<endl;
       }
       return 0;
}



#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
const int N = 1e7+10;
ll hash[N];
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
       ll n; cin>>n;
       ll arr[n];
       unordered_map<ll,ll>m;
       for(int i=0;i<n;i++){
          cin>>arr[i];
          m[arr[i]]++;
       }
       ll t;
       cin>>t;
       while(t--){
          ll num; cin>>num;
          cout<<m[num]<<endl;
       }
       return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
const int N = 1e7+10;
ll hash[N];
ll n,cows;
ll pos[N];
bool repcow(int mindis){
     ll last_pos = -1;
     ll cow_ct = cows;
     for(int i=0;i<n;i++){
         if(pos[i]-last_pos>=mindis || last_pos==-1){
            cow_ct--;
            last_pos = pos[i];
         }
         if(cow_ct==0) break;
     }
     if(cow_ct==0) return true;
     return false;
}
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
      long long int t;
      cin>>t;
      while(t--){
      cin>>n>>cows;
      for(int i=0;i<n;i++){
          cin>>pos[i];
      }
      sort(pos,pos+n);
      ll lo = 0, hi = 1000000000, mid;
      while(hi-lo>1){
         mid = (hi+lo)/2;
         if(repcow(mid)){
            lo = mid;
         }
         else{
            hi = mid-1;            
         }
      }
      if(repcow(hi)){
        cout<<hi<<endl;
      }
      else{
        cout<<lo<<endl;
      }
}
       return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
const int N = 1e5+10;
const int M = 1e9+10;
ll fact[N];
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
       fact[0] = 1; fact[1] = 1;
       for(int i=2;i<N;i++){
            fact[i] = (fact[i-1]*i)%M;
          }
      long long int t;
      cin>>t;
      while(t--){
         ll n; cin>>n;
         cout<<fact[n]<<endl;
      }
       return 0;
}


//  Super short cutm in case of hasing
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
const int N = 1e7+10;
ll has[N];
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
       ll n; cin>>n;
       for(int i=1;i<=n;i++){
           cin>>has[i];
           has[i]+=has[i-1];
       }
       ll p; cin>>p;
       while(p--){
          ll l,r; cin>>l>>r;
          cout<<has[r]-has[l-1]<<endl;
       }
       return 0;
}

// gcd using pre computation technique
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
const int N = 1e3+10;
int arr[N][N];
ll has[N][N];
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
       ll n; cin>>n;
       for(int i=1;i<=n;i++){
           for(int j=1;j<=n;j++){
               cin>>arr[i][j];
               has[i][j] = arr[i][j]+has[i-1][j]+has[i][j-1]-has[i-1][j-1];
           }
       }
       ll t; cin>>t;
       while(t--){
           ll a,b,c,d;
           cin>>a>>b>>c>>d;
           ll result = has[c][d]-has[a-1][d]-has[c][b-1]+has[a-1][b-1];
           cout<<result<<endl;
       }
       return 0;
}
1
3 3  
2 6 9
1 1
2 2
2 3


// pre computation at its best
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
const int N = 1e5+10;
ll has[N];
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
       ll n,q; cin>>n>>q;
       while(q--){
         ll a,b,c;
         cin>>a>>b>>c;
         has[a]+=c;
         has[b+1]-=c;
       }
       for(int i=1;i<=n;i++){
          has[i]+=has[i-1];
       }
       for(int i=1;i<=n;i++){
         cout<<has[i]<<" ";
       }
       cout<<endl;
       return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int l = 0, r = 0, max_len = 0;
    map<int, int> freq;
    while (r < n) {
        freq[a[r]]++;
        while (freq.rbegin()->first - freq.begin()->first > 1) {
            freq[a[l]]--;
            if (freq[a[l]] == 0) {
                freq.erase(a[l]);
            }
            l++;
        }
        max_len = max(max_len, r - l + 1);
        r++;
    }
    cout << max_len << endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
const int N = 1e7+10;
ll pre[N];
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
       ll n; cin>>n;
       for(int i=1;i<=n;i++){
          cin>>pre[i];
          pre[i]+=pre[i-1];
       }
       ll maxi = INT_MIN;
       for(int i=1;i<=n;i++){
          ll sum = 0;
           for(int j=0;j<i;j++){
              sum = pre[i] - pre[j];
              maxi = max(maxi,sum);
           }
       }
       cout<<maxi<<endl;
       return 0;
}
8
-2 -3 4 -1 -2 1 5 -3


// kadans algorithm
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
const int N = 1e7+10;
ll pre[N];
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
       ll n; cin>>n;
       vector<ll>v(n); for(auto &i : v) cin>>i;
       ll sum = 0; ll maxi = INT_MIN;ll ansstart = -1, ansend = -1;ll start;
       for(int i=0;i<n;i++){
           if(sum==0){
              start = i;
           }
           sum+=v[i];
            if(sum>maxi){
              maxi = sum;
              ansstart = start; ansend = i;
           }
           else if(sum<0){
             sum=0;
           }
       }
       ll q;
       if(maxi==INT_MIN){
          maxi = v[0];
         for(int i=1;i<n;i++){
            if(maxi<v[i]){
                maxi = v[i];
                q = i;
            }
         }
         cout<<"Start: "<<q<<" "<<"End: "<<q<<endl;
         cout<<maxi<<endl;
       }
       else{
          cout<<"Start: "<<ansstart<<" "<<"End: "<<ansend<<endl;
          cout<<maxi<<endl;
       }
       return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
const int N = 1e7+10;
ll pre[N];
int solve(){
    ll n;
    cin >> n;
    ll a[n+1];
    for(int i = 1;i <= n;i++){
        cin >> a[i];
    }
    sort(a + 1 , a + 1 + n);
    ll l = 1;
    ll ans = 0;
    for(int i = 1;i <= n;i++){
        if(a[i] < l)continue;
        if(a[i] >= l){
            ans += (a[i] - l);
            l++;
        }
    }
    cout << ans << endl;
    return 0;
}
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
      ll t;
      cin>>t;
      while(t--){
      solve();
}
       return 0;
}


// minimum lcm , number theory
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
const int N = 1e7+10;
ll pre[N];
int solve(){
     ll n; cin>>n; ll ans = 1;
     for(int i=2;i*i<=n;i++){
         if(n%i==0){
            ans = (n/i);
            break;
         }
     }
     cout<<ans<<" "<<n-ans<<endl;
     return 0;
}
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
      ll t;
      cin>>t;
      while(t--){
      solve();
}
       return 0;
}

//  combination calculation in shortcut
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n; cin>>n;
    n = n-1;ll result = 1;
    for(ll i = 1;i<=11;i++){
        result*=n;
        n--;
        result/=i;
    }
    cout<<result<<endl;
   return 0;
}



//  new thing
      memset(arr,0,sizeof(arr)); 
      it is used to set all the value of index 0 ;



// two pointer
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
const int N = 1e5+10;
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
       ll n,x; cin>>n>>x;
       vector<pair<ll,ll>>v;
       for(ll i=0;i<n;i++){
         ll p;
         cin>>p;
         v.push_back({p,i+1});
       }
       sort(v.begin(),v.end());
       int lo=0,hi=v.size()-1;
        while(lo<hi){
        int sum=v[lo].first+v[hi].first;
        if(sum==x)
        {
          cout<<v[lo].second<<' '<<v[hi].second<<endl;
          return 0;
        }
        if(sum>x)
        hi--;
        else lo++;
       }
       cout<<"-1"<<endl;
       return 0;
}



#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
const int N = 1e5+10;
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
       ll n,a,b,c; cin>>n>>a>>b>>c;
       if((a+b+c)==n){
            cout<<"3"<<endl;
       }
       else if((a+b)==n || (b+c)==n || (c+a)==n){
            cout<<"2"<<endl;
       }
       else if(a>=n && b>=n && c>=n){
            cout<<"1"<<endl;
       }
       else{
        cout<<n<<endl;
       }
       return 0;
}


#include <bits/stdc++.h>
using namespace std;
 
int n, m[100008];
pair<int, int> a[100008];
 
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
 
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> a[i].first >> a[i].second, m[a[i].first]++;
    for(int i=0; i<n; i++)
        cout << n - 1 + m[a[i].second] << ' ' << n - 1 - m[a[i].second] << '\n';
}

// Longest subarray sum with the value K;
this works for positive, negative and 0s
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
const int N = 1e5+10;
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
       ll n,k; cin>>n>>k;
       ll arr[n];
       for(ll i=0;i<n;i++){
           cin>>arr[i];
       }      
       ll maxlength = 0; map<ll,ll>m; ll sum = 0;
       for(ll i=0;i<n;i++){
          sum+=arr[i];
          if(sum==k){
             maxlength = max(maxlength,i+1);
          }
          ll rem = sum - k;
          if(m.find(rem)!=m.end()){
             ll length = i - m[rem];
             maxlength = max(maxlength,length);
          }
          if(m.find(sum)==m.end()){
             m[sum] = i;
          }
       }
       cout<<maxlength<<endl;
       return 0;
}


//  most optimal of that 
only work for positives and 0s
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
const int N = 1e5+10;
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
       ll n,k; cin>>n>>k;
       ll arr[n];
       for(ll i=0;i<n;i++){
           cin>>arr[i];
       }      
       ll left = 0, right = 0;
       ll sum = arr[0]; ll maxlen= 0;
       while(right<n){
          while(left<=right && sum>k){
            sum-=arr[left];
             left++;
          }
         if(sum==k){
            maxlen = max(maxlen,right-left+1);
         }
         right++;
         if(right<n){
            sum+=arr[right];
         }
       }
       cout<<maxlen<<endl;
       return 0;
}


// find two elements index so that there sum will be k from the array
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
const int N = 1e5+10;
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
       ll n,k; cin>>n>>k;
       ll arr[n];
       for(ll i=0;i<n;i++){
           cin>>arr[i];
       }      
       map<ll,ll>m;
       for(int i=0;i<n;i++){
          ll a = arr[i];
          ll more = k - a;
          if(m.find(more)!=m.end()){
             cout<<"YES"<<endl;
             cout<<m[more]<<" "<<i<<endl;
             return 0;
          }
          m[a] = i;
       }
       cout<<"NO"<<endl;
       return 0;
}

most optimal solution of that

























// 
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
const int N = 1e5+10;
int solve(){
    ll n,m,k;
    cin>>n>>m>>k;
    if(m==0){
      cout<<"0"<<endl;
      return 0;
    }
    ll p = n/k;
    if(p>=m){
      cout<<m<<endl;
    }
    else{
      ll d = m - p;
      ll x = ceil(double(d)/((double)k-1.0));
      cout<<p - x<<endl;
    }
     return 0;
}
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
      ll t;
      cin>>t;
      while(t--){
      solve();
}
       return 0;
}


//  longest sub sequence with distinct elements
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
    }
    map<ll, ll> m; 
    ll j = 0;     
    ll ans = 0;  
    for (ll i = 0; i < n; i++) {
        if (m.find(v[i]) != m.end() && m[v[i]] >= j) {
            j = m[v[i]] + 1;
        }
        m[v[i]] = i;
        ans = max(ans, i - j + 1);
    }
    cout << ans << endl;
    return 0;
}

//  good to know
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
const int N = 1e5+10;
int solve(){
     ll n,k; cin>>n>>k;
     string s; cin>>s; ll ans = INT_MAX;
     vector<ll>pr(n+1);
     for(int i=1;i<=n;i++){
        pr[i] = pr[i-1]+(s[i-1]=='W'?1:0);
     }
     for(int i=0;i<=(n-k);i++){
       ans = min(pr[i+k]-pr[i],ans);
     }
     cout<<ans<<endl;
     return 0;
}
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
      ll t;
      cin>>t;
      while(t--){
      solve();
}
       return 0;
}


// minimum product
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
const int N = 1e5+10;
ll check(ll a,ll b,ll x,ll y,ll n){
     ll d1 = a - x;
     ll d2 = b - y;
     ll p =min(n,d1);
     a-=p;
     n-=p;
     ll q =min(n,d2);
     b-=q;
     n-=q;
     return (a*b);
}
int solve(){
     ll a,b,x,y,n;
     cin>>a>>b>>x>>y>>n;
     ll ans = min(check(a,b,x,y,n),check(b,a,y,x,n));
     cout<<ans<<endl;
     return 0;
}
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
      ll t;
      cin>>t;
      while(t--){
      solve();
}
       return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
const int N = 1e5+10;
int solve(){
     ll n; cin>>n;
     ll x = n/2;
     ll y = n-x;
     string s = to_string(x);
     string t = to_string(y);
     ll count = 0;ll count1 = 0;
     for(int i=0;i<s.size();i++){
         count+=s[i]+'0';
     }
     for(int j=0;j<t.size();j++){
         count1+=t[j]+'0';
     }
     if(abs(count-count1)<=1){
        cout<<y<<" "<<x<<endl;
     }
     else{
        string r = to_string(y);
        string d = to_string(x);
        ll i = 1;
        ll k = min(r.size(),d.size());
        while(k--){
           if(d[s.size()-i]=='9'){
            if(i%2!=0){
             r[r.size()-i]='4';
             d[d.size()-i]='5';
            }
            else{
             r[r.size()-i]='5';
             d[d.size()-i]='4';
            }
           }
           else{
             break;
           }
           i++;
        }
        y = stoi(r);
        x = stoi(d);
        cout<<y<<" "<<x<<endl;
     }
     return 0;
}
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
      ll t;
      cin>>t;
      while(t--){
      solve();
}
       return 0;
}



#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
const int N = 1e5+10;
int solve(){
    ll n; cin>>n;
    if(n%2==0){
        cout<<"NO"<<endl;
        return 0;
    }
    cout<<"YES"<<endl;
    ll x = 0;
    for(ll i=n;i>=1;i-=2){
        cout<<++x<<" "<<n+i<<endl;
    }
    for(ll i=n-1;i>=1;i-=2){
        cout<<++x<<" "<<n+i<<endl;
    }
    return 0;
}
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
      ll t;
      cin>>t;
      while(t--){
      solve();
}
       return 0;
}

 vector<int> subarraySum(vector<int> arr, int n, long long s) {
        int flag = 0;
        if(s==0){
            for(int i=0;i<n;i++){
               if(arr[i]==0){
                   flag=1;
                   return {i+1,i+1};
               }
            }
            if(flag==0){
                return {-1};
            }
        }
        long long right = 0, left = 0;
        long long sum = arr[0];
        if(sum==s){
            return{1,1};
        }
        while(right<n-1){
            if(sum+arr[right+1]<=s){
                sum+=arr[right+1];
                right++;
            }
            else{
                sum-=arr[left];
                left++;
            }
            if(sum==s){
              return {left+1,right+1};
            }
        }
        return{-1};
    }

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define yes cout <<"YES\n";
#define no cout <<"NO\n";
const int N = 1e5+10;
int solve(){
     ll n,q;
     cin>>n>>q;
     vector<ll>v(n),v1(q);
     for(auto &i : v){
        cin>>i;
     }
     map<ll,ll>m;
     for(int i=0;i<n;i++){
        ll x = (i+1)*(n-i)-1;
        m[x]++;
        if(i>0){
          ll y = i*(n-i);
          m[y]+=(v[i]-v[i-1]-1);
        }
     }
     while(q--){
        ll r; cin>>r;
        cout<<m[r]<<" ";
     }
     cout<<endl;
     return 0;
}
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
      ll t;
      cin>>t;
      while(t--){
      solve();
}
       return 0;
}


// recursion
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define yes cout <<"YES\n";
#define no cout <<"NO\n";
const int N = 1e5+10;
void solve(ll idx,vector<ll>&v,ll arr[],ll n){
         if(idx==n){
            for(auto &i:v){
              cout<<i<<" ";
            }
            if(v.size()==0){
              cout<<"{}";
            }
            cout<<endl;
            return;
         }
         v.push_back(arr[idx]);
         solve(idx+1,v,arr,n);
         v.pop_back();
         solve(idx+1,v,arr,n);
}
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
       ll arr[] = {1,2,3};
       ll n =3;
       vector<ll>v;
       solve(0,v,arr,n);
       return 0;
}


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define yes cout <<"YES\n";
#define no cout <<"NO\n";
const int N = 1e5+10;
void solve(ll x,vector<ll>&v,ll s,ll sum,ll arr[],ll n){
      if(x>=n){
        if(sum==s){
           for(auto &i : v){
              cout<<i<<" ";
           }
           cout<<endl;
        }
        return;
      }
      v.push_back(arr[x]);
      s+=arr[x];
      solve(x+1,v,s,sum,arr,n);
      s-=arr[x];
      v.pop_back();
      solve(x+1,v,s,sum,arr,n); 
}
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
       ll arr[] = {1,2,1};
       ll n = 3;
       ll sum = 2;
       ll s=0;
       vector<ll>v;
       solve(0,v,0,sum,arr,n);
       return 0;
}

// prefix sum  in c++  short technique
// partial_sum(r.begin(), r.end(), r.begin());
// partial_sum(b.begin(), b.end(), b.begin());

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define yes cout <<"YES\n";
#define no cout <<"NO\n";
const int N = 1e5+10;
int solve(){
     ll n;
     cin>>n;
     vector<ll>v(n);
     for(auto &i : v){
        cin>>i;
     }
     vector<ll>v1;
     v1 = v;
     sort(all(v1));
     if(v==v1){
        cout<<"0"<<endl;
        return 0;
     }
     ll ans= 1; ll i;
      for(i=n-1;i>=1;i--){
        if(v[i]<=v[i-1]){
          ans++;
        }
        else{
          break;
        }
      }
      for(ll j = i;j>=1;j--){
       if(v[j]>=v[j-1]){
          ans++;
       }
       else{
         break;
       }
      }
     cout<<n-ans<<endl;
     return 0;
}
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
      ll t;
      cin>>t;
      while(t--){
      solve();
}
       return 0;
}


#include<iostream>
using namespace std;
struct node{
    int data;
    struct node* link;
};
void noofnodes(struct node* head){
    struct node* ptr;
    if(head==NULL){
        cout<<"The node is empty";
    }
    ptr = head;
    while(ptr!=NULL){
        cout<<ptr->data<<endl;
        ptr = ptr->link;
    }
}
int main(){
    struct node* head = (struct node*)malloc(sizeof(struct node));
    head->data = 34;
    head->link = NULL;
    struct node* current = (struct node*)malloc(sizeof(struct node));
    current->data = 56;
    current->link = NULL;
    head->link = current;
    current = (struct node*)malloc(sizeof(struct node));
    current->data = 90;
    current->link = NULL;
    head->link->link = current;
    noofnodes(head);
    return 0;
}

#include<iostream>
using namespace std;
struct node{
    int data;
    struct node* link;
};
void add_at_the_end(struct node* head,int data){
    struct node* ptr;
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;
    ptr = head;
    while(ptr->link!=NULL){
        ptr = ptr->link;
    }
    ptr->link = temp;
    int count = 0;
    struct node* ptr1 = head;
    while(ptr1!=NULL){
        cout<<ptr1->data<<endl;
        ptr1 = ptr1->link;
    }
}
int main(){
    struct node* head = (struct node*)malloc(sizeof(struct node));
    head->data = 34;
    head->link = NULL;
    struct node* current = (struct node*)malloc(sizeof(struct node));
    current->data = 56;
    current->link = NULL;
    head->link = current;
    current = (struct node*)malloc(sizeof(struct node));
    current->data = 90;
    current->link = NULL;
    head->link->link = current;
    add_at_the_end(head,86);
    return 0;
}



#include<iostream>
using namespace std;
struct ll{
    struct node{
        int data;
        struct node* link; 
    };
    struct node* head = NULL;
    struct node* tail = NULL;
    void add_node(int value){
         struct node* temp = (struct node*)malloc(sizeof(struct node));
         temp->data = value;
         temp->link = NULL;
         if(head == NULL){
             head = temp;
             tail = temp;
         }
         else{
            tail->link = temp;
            tail = temp;
         }
    }
    void printvalue(){
        struct node* ptr = head;
        while(ptr!=NULL){
           cout<<ptr->data<<endl;
           ptr = ptr->link;
        }
    }
    void freelist(){
        struct node* ptr1 = head;
        while(ptr1!=NULL){
           struct node* next = ptr1->link;
           free(ptr1);
           ptr1 = next;
        }
        head = tail = NULL;
    }
};
int main(){
    ll list;
    list.add_node(89);
    list.add_node(90);
    list.add_node(91);
    list.printvalue();
    list.freelist();
    return 0;
}



// insert at first
#include<iostream>
using namespace std;
struct ll{
    struct node{
        int data;
        struct node* link; 
    };
    struct node* head = NULL;
    struct node* tail = NULL;
    void add_node(int value){
         struct node* temp = (struct node*)malloc(sizeof(struct node));
         temp->data = value;
         temp->link = NULL;
         if(head == NULL){
             head = temp;
             tail = temp;
         }
         else{
            tail->link = temp;
            tail = temp;
         }
    }
    void insert_first(int value){
         struct node* temp1 = (struct node*)malloc(sizeof(struct node));
         temp1->data = value;
         temp1->link = NULL;
         if(head==NULL){
            head = temp1;
            tail = temp1;
         }
         else{
            temp1->link = head;
            head = temp1;
         }
    }
    void printnode(){
        struct node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<endl;
            temp = temp->link;
        }
    }
    void freelist(){
        struct node* ptr1 = head;
        while(ptr1!=NULL){
           struct node* next = ptr1->link;
           free(ptr1);
           ptr1 = next;
        }
        head = tail = NULL;
    }
};
int main(){
    ll list;
    list.add_node(89);
    list.add_node(90);
    list.add_node(91);
    list.insert_first(94);
    list.printnode();
    list.freelist();
    return 0;
}



// insert at last
#include<iostream>
using namespace std;
struct ll{
    struct node{
        int data;
        struct node* link; 
    };
    struct node* head = NULL;
    struct node* tail = NULL;
    void add_node(int value){
         struct node* temp = (struct node*)malloc(sizeof(struct node));
         temp->data = value;
         temp->link = NULL;
         if(head == NULL){
             head = temp;
             tail = temp;
         }
         else{
            tail->link = temp;
            tail = temp;
         }
    }
    void insert_last(int value){
         struct node* temp1 = (struct node*)malloc(sizeof(struct node));
         temp1->data = value;
         temp1->link = NULL;
         if(head==NULL){
            head = temp1;
            tail = temp1;
         }
         else{
            tail->link = temp1;
            tail = temp1;
         }
    }
    void printnode(){
        struct node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<endl;
            temp = temp->link;
        }
    }
    void freelist(){
        struct node* ptr1 = head;
        while(ptr1!=NULL){
           struct node* next = ptr1->link;
           free(ptr1);
           ptr1 = next;
        }
        head = tail = NULL;
    }
};
int main(){
    ll list;
    list.add_node(89);
    list.add_node(90);
    list.add_node(91);
    list.insert_last(94);
    list.printnode();
    list.freelist();
    return 0;
}


// only traverse
#include<iostream>
using namespace std;
struct ll{
    struct node{
        int data;
        struct node* link; 
    };
    struct node* head = NULL;
    struct node* tail = NULL;
    void add_node(int value){
         struct node* temp = (struct node*)malloc(sizeof(struct node));
         temp->data = value;
         temp->link = NULL;
         if(head == NULL){
             head = temp;
             tail = temp;
         }
         else{
            tail->link = temp;
            tail = temp;
         }
    }
    void printnode(){
        struct node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<endl;
            temp = temp->link;
        }
    }
    void freelist(){
        struct node* ptr1 = head;
        while(ptr1!=NULL){
           struct node* next = ptr1->link;
           free(ptr1);
           ptr1 = next;
        }
        head = tail = NULL;
    }
};
int main(){
    ll list;
    list.add_node(89);
    list.add_node(90);
    list.add_node(91);
    list.printnode();
    list.freelist();
    return 0;
}
// delete first  element
#include<iostream>
using namespace std;
struct ll{
    struct node{
        int data;
        struct node* link; 
    };
    struct node* head = NULL;
    struct node* tail = NULL;
    void add_node(int value){
         struct node* temp = (struct node*)malloc(sizeof(struct node));
         temp->data = value;
         temp->link = NULL;
         if(head == NULL){
             head = temp;
             tail = temp;
         }
         else{
            tail->link = temp;
            tail = temp;
         }
    }
    int delete_first(){
        if(head==NULL){
            return -1;
        }
        else if(head==tail){
            struct node* temp1 = head;
            int x = head->data;
            head = NULL;
            tail = NULL;
            free(temp1);
            return x;
        }
        else{
            struct node* temp2 = head;
            int x = head->data;
            head = head->link;
            free(temp2);
            return x;
        }
    }
    void printnode(){
        struct node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<endl;
            temp = temp->link;
        }
    }
    void freelist(){
        struct node* ptr1 = head;
        while(ptr1!=NULL){
           struct node* next = ptr1->link;
           free(ptr1);
           ptr1 = next;
        }
        head = tail = NULL;
    }
};
int main(){
    ll list;
    list.add_node(89);
    list.add_node(90);
    list.add_node(91);
    list.delete_first();
    list.printnode();
    list.freelist();
    return 0;
}

// delete last element

#include<iostream>
using namespace std;
struct ll{
    struct node{
        int data;
        struct node* link; 
    };
    struct node* head = NULL;
    struct node* tail = NULL;
    void add_node(int value){
        struct node* temp = (struct node*)malloc(sizeof(struct node));
        temp->data = value;
        temp->link = NULL;
        if(head==NULL){
            head = temp;
            tail = temp;
        }
        else{
            tail->link = temp;
            tail = temp;
        }
    }
    void delete_last(){
        struct node* ptr1 = tail;
        struct node* ptr2 = head;
        if(head==NULL){
            return;
        }
        else if(head==tail){
            head = NULL;
            tail = NULL;
            return;
        }
        else{
          while(ptr2->link->link!=NULL){
               ptr2 = ptr2->link;
          }
          ptr2->link =  NULL;
          tail = ptr2;
          free(ptr1);
        }
    }
    void print(){
        struct node* ptr = head;
        while(ptr!=NULL){
            cout<<ptr->data<<endl;
            ptr = ptr->link;
        }
    }
    void free_memory(){
        struct node* temp1 = head;
        while(temp1!=NULL){
           struct node* next = temp1->link;
           free(temp1);
           temp1 = next;
        }
        head = tail = NULL;
    }
};
int main(){
    ll list;
    list.add_node(37);
    list.add_node(38);
    list.add_node(39);
    list.delete_last();
    list.print();
    list.free_memory();
    return 0;
}

// random element cut down
#include<iostream>
using namespace std;
struct ll {
    struct node {
        int data;
        struct node* link; 
    };
    struct node* head = NULL;
    struct node* tail = NULL;
    void add_node(int value) {
        struct node* temp = (struct node*)malloc(sizeof(struct node));
        temp->data = value;
        temp->link = NULL;
        if(head == NULL) {
            head = temp;
            tail = temp;
        } 
        else {
            tail->link = temp;
            tail = temp;
        }
    }
    void delete_element(int value) {
        if(head == NULL) {
            return;
        }
        if(head->data == value) {
            struct node* temp = head;
            head = head->link;
            if(head == NULL) {
                tail = NULL;  
            }
            free(temp);
            return;
        }
        struct node* ptr2 = head;
        while(ptr2->link != NULL) {
            if(ptr2->link->data == value) {
                struct node* temp = ptr2->link;
                ptr2->link = ptr2->link->link;
                if(temp == tail) {
                    ptr2->link = NULL;
                    tail = ptr2;  
                }
                free(temp);
                return;
            }
            ptr2 = ptr2->link;
        }
    }
    void print() {
        struct node* ptr = head;
        while(ptr != NULL) {
            cout << ptr->data << endl;
            ptr = ptr->link;
        }
    }
    void free_memory() {
        struct node* temp1 = head;
        while(temp1 != NULL) {
            struct node* next = temp1->link;
            free(temp1);
            temp1 = next;
        }
        head = tail = NULL;
    }
};
int main() {
    int x;
    cin >> x;
    ll list;
    list.add_node(37);
    list.add_node(38);
    list.add_node(39);
    list.delete_element(x);
    list.print();
    list.free_memory();
    return 0;
}
//  insert at first in doubly linked list
#include<iostream>
using namespace std;
struct ll {
    struct node {
        int data;
        struct node* prev;
        struct node* next; 
    };
    struct node* head = NULL;
    struct node* tail = NULL;
    void add_node(int value) {
        struct node* temp = (struct node*)malloc(sizeof(struct node));
        temp->prev = NULL;
        temp->data = value;
        temp->next = NULL;
        if(head == NULL) {
            head = temp;
            tail = temp;
        } 
        else {
            tail->next = temp;
            tail = temp;
        }
    }
    void add_first(int value){
        struct node* temp = (struct node*)malloc(sizeof(struct node));
        temp->prev = NULL;
        temp->data = value;
        temp->next = NULL;
        if(head==NULL){
           head = temp;
           tail = temp;
        }
        else{
           temp->next = head;
           head->prev = temp;
           head = head->prev;
        }
    }
    void print() {
        struct node* ptr = head;
        while(ptr != NULL) {
            cout << ptr->data << endl;
            ptr = ptr->next;
        }
    }
    void free_memory() {
        struct node* temp1 = head;
        while(temp1 != NULL) {
            struct node* next = temp1->next;
            free(temp1);
            temp1 = next;
        }
        head = tail = NULL;
    }
};
int main() {
    // int x;
    // cin >> x;
    ll list;
    list.add_node(37);
    list.add_node(38);
    list.add_node(39);
    list.add_first(55);
    list.print();
    list.free_memory();
    return 0;
}

// insert at last in doubly linked list
#include<iostream>
using namespace std;
struct ll {
    struct node {
        int data;
        struct node* prev;
        struct node* next; 
    };
    struct node* head = NULL;
    struct node* tail = NULL;
    void add_node(int value) {
        struct node* temp = (struct node*)malloc(sizeof(struct node));
        temp->prev = NULL;
        temp->data = value;
        temp->next = NULL;
        if(head == NULL) {
            head = temp;
            tail = temp;
        } 
        else {
            tail->next = temp;
            tail = temp;
        }
    }
    void add_last(int value){
        struct node* temp = (struct node*)malloc(sizeof(struct node));
        temp->prev = NULL;
        temp->data = value;
        temp->next = NULL;
        if(head==NULL){
           head = temp;
           tail = temp;
        }
        else{
           tail->next = temp;
           temp->prev = tail;
           tail = tail->prev;
        }
    }
    void print() {
        struct node* ptr = head;
        while(ptr != NULL) {
            cout << ptr->data << endl;
            ptr = ptr->next;
        }
    }
    void free_memory() {
        struct node* temp1 = head;
        while(temp1 != NULL) {
            struct node* next = temp1->next;
            free(temp1);
            temp1 = next;
        }
        head = tail = NULL;
    }
};
int main() {
    // int x;
    // cin >> x;
    ll list;
    list.add_node(37);
    list.add_node(38);
    list.add_node(39);
    list.add_last(55);
    list.print();
    list.free_memory();
    return 0;
}

// using doubly linked list the first node has been cut down
#include<iostream>
using namespace std;
struct ll {
    struct node {
        int data;
        struct node* prev;
        struct node* next; 
    };
    struct node* head = NULL;
    struct node* tail = NULL;
    void add_node(int value) {
        struct node* temp = (struct node*)malloc(sizeof(struct node));
        temp->prev = NULL;
        temp->data = value;
        temp->next = NULL;
        if(head == NULL) {
            head = temp;
            tail = temp;
        } 
        else {
            tail->next = temp;
            tail = temp;
        }
    }
    void delete_first(){
        struct node* temp = head;
        if(head==NULL){
           return;
        }
        else if(head == tail){
           head = NULL;
           tail = NULL;
        }
        else{
           head = head->next;
           head->prev = NULL;
        }
        free(temp);
    }
    void print() {
        struct node* ptr = head;
        while(ptr != NULL) {
            cout << ptr->data << endl;
            ptr = ptr->next;
        }
    }
    void free_memory() {
        struct node* temp1 = head;
        while(temp1 != NULL) {
            struct node* next = temp1->next;
            free(temp1);
            temp1 = next;
        }
        head = tail = NULL;
    }
};
int main() {
    // int x;
    // cin >> x;
    ll list;
    list.add_node(37);
    list.add_node(38);
    list.add_node(39);
    list.delete_first();
    list.print();
    list.free_memory();
    return 0;
}
*/
/*#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int hsh[N];
int main(){
    int x;
    cin>>x;
    int a[x];
    for(int i=0;i<x;i++){
        cin>>a[i];
        hsh[a[i]]++;
    }
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<hsh[n]<<endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
const int N = 1e7+10;
int hsh[N];
int main(){
    vector<int>v;
    vector<int>v1;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
        v1.push_back(x);
    }
    sort(v.begin(),v.end());
    int p = v[n-1]-v[0];
    for(int i=0;i<p;i++){
        hsh[v1[i]-v[0]]++;
    }
    int t;
    cin>>t;
    while(t--){
        int l;
        cin>>l;
        cout<<hsh[l-v[0]]<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
const N = 1e7+10;
ll arr[N];
ll pre[N];
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        pre[i] = pre[i-1]+arr[i];
    }
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        cout<<pre[b]-pre[a-1]<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    vector<long long int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    long long int count;
    long long int p=0;
    vector<long long int>v1;
    for(long long int i=1;i<=v[0];i++){
        if(v[0]%i==0){
            v1.push_back(i);
        }
    }
    for(long long int i=0;i<v1.size();i++){
        count = 0;
        for(int j=0;j<v.size();j++){
            if(v[j]%v1[i]==0){
                count++;
            }
        }
        if(count == v.size()){
            p++;
        }
    }
    cout<<p<<endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    vector<long long int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    long long int g = 0;
    for(long long int i=0;i<n;i++){
        g = gcd(g,v[i]);
    }
    long long int count = 0;
    long long int j ;
    for(long long int i=1;i*i<=g;i++){
        if(g%i==0){
            count++;
            j = g/i;
            if(j>i){
                count++;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}
*
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int solve(){
    long long int a,b;
    cin>>a>>b;
    vector<int>v(a);
    for(int i=0;i<a;i++){
        cin>>v[i];
    }   
    sort(v.begin(),v.end());
    set<int>s;
    for(int i=0;i<v.size();i++){
        s.insert(v[i]);
    }
    vector<int> v1;
    for(auto value : &s){
        v1.push_back(value);
    }
    vector<int>v2;
    for(auto valu : v1){
        v2.push_back(valu);
    }
    for(int i=0;i<v1.size()-1;i++){
        int sum =0;
        if(v1[i+1]-v1[i]==1){
            for(int j=0;j<v.size();j++){
                if((v[j]==v[i] || v[j]==v[i+1]) && ((sum+v[j])<=b)){
                    sum+=v[j];
                }
            }
        }
        v2.push_back(sum);
    }
    
    return 0;
}
int main()
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
      long long int t;
      cin>>t;
      while(t--){
      solve();
}
       return 0;
}

2 2 1 2 3
2 3 4



#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int solve(){
    ll n,q;
    cin>>n>>q;
    ll arr[n];
    ll pre[n];
    pre[0]=0;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        pre[i] = pre[i-1]+arr[i];
    }
    while(q--){
       ll l,r,k;
       cin>>l>>r>>k;
       ll sum = 0;
       sum+=(r-l+1)*k+pre[l-1]+pre[n]-pre[k+1];
       cout<<sum<<endl;
    }
    return 0;
}
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
      long long int t;
      cin>>t;
      while(t--){
      solve();
}
       return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int solve(){
    string s;
    cin>>s;
    stack<char>st;
    for(int i=0;i<s.size();i++){
        if(s[i]=='('){
            st.push(s[i]);
        }
        else if(s[i]==')' &&(!s.empty()) && st.top()=='('){
            st.pop();
        }
    }
    if(s.empty()){
        cout<<"NO"<<endl;
        return 0;
    }

    return 0;
}
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
      long long int t;
      cin>>t;
      while(t--){
      solve();
}
       return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int solve(){
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int ans = 0;
    int mx_p = 0;
    int sum = 0;
        if(sum-mx_p==mx_p){
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
      long long int t;
      cin>>t;
      while(t--){
      solve();
}
       return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int solve(){
    ll n,p;
    cin>>n>>p;
    if(n==1 && p<10){
        cout<<p<<endl;
        return 0;
    }
    else if(n==1 && p==10){
        cout<<"-1"<<endl;
        return 0;
    }    
    else if(n>1){
       if(p==10){
          for(int i=0;i<n-1;i++){
            cout<<"1";
          }
          cout<<"0"<<endl;
       }
       else{
         for(int i=0;i<n-2;i++){
            cout<<"1";
         }
         cout<<6*p<<endl;
       }
    }
    return 0;
}
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
      long long int t;
      cin>>t;
      while(t--){
      solve();
}
       return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a;
    cin>>a;
    vector<string>s;
    while(a!=0){
        s.push_back(a%2);
        a/=2;
    }
    s.reverse();
    for(int i=0;i<s.size();i++){
        cout<<s[i];
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int solve(){
    ll x;
    cin>>x;
    for(ll i=1LL;i<=(ll)cbrt(x);i++){
        ll d = x - (i*i*i);
        if(d<=0){
            break;
        }
        ll p = cbrt(d);
        if(p*p*p == d){
            cout<<"YES"<<endl;
            return 0;
        }
    }   
    cout<<"NO"<<endl;
    return 0;
}
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
      long long int t;
      cin>>t;
      while(t--){
      solve();
}
       return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int solve(){
    ll n; cin>>n; vector<ll>v(n),d(n);
    for(auto &i : v) cin>>i;     
    for(int i=n-1;i>=0;i--){
       d[i] = v[i];   
       ll a = i+v[i];  
       if(a<n){
        d[i]+=d[a];
       }
    } 
    for(auto b : d) cout<<b<<endl;
    // cout<<*max_element(d.begin(),d.end())<<endl;
    return 0;
}
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
      long long int t;
      cin>>t;
      while(t--){
      solve();
}
       return 0;
}


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<string> v;
void generate(string &s,int open,int close){
     if(open==0 && close==0){
        v.push_back(s);
        return;
     }
    if(open>0){
       s.push_back('(');
       generate(s,open-1,close);
       s.pop_back();
    }
    if(close>0){
       if(open<close){
       s.push_back(')');
       generate(s,open,close-1);
       s.pop_back();
       }
    }
}
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
       int n;
       cin>>n;
       string s="";
       generate(s,n,n);
       for(int i=0;i<v.size();i++){
         cout<<v[i]<<endl;
       }
       return 0;
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
       int x; cin>>x;
       double p = pow(x,1.0/3);
       cout<<setprecision(9)<<p<<endl;
       return 0;
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const double N = 1e-6;
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
       double x,n; cin>>x>>n;
       double lo = 1,hi = x;
       double mid;
       while(hi-lo>N){
          mid = (lo+hi)/2;
          if(pow(mid,n)<x){
            lo = mid;
          }
          else{
            hi = mid;
          }
       }
       cout<<pow(x,1.0/n)<<endl;
       cout<<lo<<endl;
       return 0;
}


#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define Y cout << "YES\n";
#define N cout << "NO\n";

void solve(){
    ll n,m; cin>>n>>m;
    ll mex=0;
    while(n--){
        ll l; cin>>l;
        set<ll> st;
        while(l--){
            ll x; cin>>x;
            st.insert(x);
        }
        ll y=0,j=0;
        for(;true;){
            if(st.find(j)==st.end()){
                if(y==0) y=1;
                else{
                    mex=max(mex,j);
                    break;
                }
            }
            j++;
        }
    }
    // cout<<mex<<endl;
    ll ans=mex*min(mex+1,m+1);
    // cout<<ans<<endl;
    if(m>mex) ans+=(m*(m+1)/2-(mex)*(mex+1)/2);
    cout<<ans<<endl;
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--) solve();
}


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int solve(){
    ll n,m;
    cin>>n>>m;
    vector<ll>v; ll mex; 
    set<ll>s;
    while(n--){
       ll a;
       cin>>a;
       while(a--){
         ll  x;cin>>x;
         s.insert(x);
       }
       ll i = 0;
       for(auto e : s){
         if(i==e){
            i++;
            continue;
         }
         else{
            mex = i;
            break;
         }
       }
       if(n!=0){ s.clear();}
       s.insert(mex);
    }
    ll d = s.size();
    ll i = 0;
    for(auto e : s){
         if(i==e){
            i++;
            continue;
         }
         else{
            mex = i;
            break;
         }
    }
    s.insert(mex);
    if(d==s.size()){
      mex = i;
    }
    ll p = min(m,mex);
    if(p>m){
      cout<<(m+1)*p<<endl;
    }
    ll result = (mex+1)*mex;
    ll add = ((m*(m+1))/2) - (mex*(mex+1))/2;
    cout<<result+add<<endl; 
    return 0;
}
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
      long long int t;
      cin>>t;
      while(t--){
      solve();
}
       return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int solve(){
    ll n; cin>>n;
    if(n%2==0){
        cout<<"No"<<endl;
    }
    else{
        cout<<"Yes"<<endl;
         ll l = 1;
        vector<pair<ll,ll>>p(n);
        for(int i=0;i<n;i++){
            p[i].first = l;
            l++;
        }
        for(int i=0;i<n;i++){
            p[i].second = l;
            l++;
        }
        for(int i=0;i<n;i++){
            cout<<p[i].first<<" "<<p[i].second<<endl;
        }
    }
    return 0;
}
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
      long long int t;
      cin>>t;
      while(t--){
      solve();
}
       return 0;
}


#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define Y cout << "YES\n";
#define N cout << "NO\n";

void solve(){
    ll n,m; cin>>n>>m;
    vector<ll> v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    ll mx=*max_element(v.begin(),v.end());
    for(ll i=0;i<m;i++){
        char c; ll p,q;
        cin>>c>>p>>q;
        if(c=='+'){
            if(mx>=p && mx<=q) mx++;
            cout<<mx<<" ";
        }else{
            if(mx>=p && mx<=q) mx--;
            cout<<mx<<" ";
        }
    }
    cout<<endl;
    return;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e7+10;
ll arr[N]; ll pre[N];
#define all(x) (x).begin(), (x).end()
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
       ll n,k; cin>>n>>k;
       while(k--){
          ll a,b,c;
          cin>>a>>b>>c;
          arr[a]+=c;
          arr[b+1]-=c;
       }
       for(int i=1;i<=n;i++){
          pre[i] = pre[i-1]+arr[i];
       }
       ll d = *max_element(pre+1,pre+n);
       cout<<d<<endl;
       return 0;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--) solve();
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
       ll n; cin>>n;
       string s; ll i=1; ll sum = 19;
       if(n==1){
        cout<<"19"<<endl;
       }
       else{
         sum+=9;
         
         if(p==10){
            i++;
            if(i==n){
                cout<<sum<<endl;
            }
         }
       }
       return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()

int solve() {
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    while (k--) {
        ll a, b;
        cin >> a >> b;
        map<char, ll> m;
        for (int i = a - 1; i < b; i++) {
            m[s[i]]++;
        }
        ll odd = 0;
        for (auto &i : m) {
            if (i.second % 2 != 0) {
                odd++;
            }
        }
        if (odd <= 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
int solve(){
     ll n; cin>>n;
     vector<map<ll,ll>>m;
     vector<map<ll,ll>>m1;
     while(n--){
       ll a,b; cin>>a>>b;
       if(b==0){
          m.push_back({a,b});
       }
       else if(b==1){
          m1.push_back({a,b});
       }
     }
     if(m.size()==0 || m1.size()==0){
        cout<<"0"<<endl;
     }
     else{
        ll count = 0;
        for(auto &i : m1){
          for(auto &j : m){
            if(i.first == j.first){
               count+=m.size()-1;
            }
          }
        }
        
     }
     return 0;
}
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
      long long int t;
      cin>>t;
      while(t--){
      solve();
}
       return 0;
}


// module power
#include<bits/stdc++.h>
using namespace std;
int pw(int a,int b,int m){
       if(b==0){
          return (a%m); 
       }
       if(b%2==0){
          int t = pw(a,b/2,m);
          return (1ll*t*t%m);
       }
       else{
         int t = pw(a,(b-1)/2,m);
          t = (1ll*t*t%m); 
         return (1ll*a*t%m);
       }
}
int main(){
     int a,b,m;
     cin>>a>>b>>m;
     cout<<pw(a,b,m)<<endl;
    return 0;
}


// module division
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int pw(int a,int b,int m){
       if(b==0){
          return (a%m); 
       }
       if(b%2==0){
          int t = pw(a,b/2,m);
          return (1ll*t*t%m);
       }
       else{
         int t = pw(a,(b-1)/2,m);
          t = (1ll*t*t%m); 
         return (1ll*a*t%m);
       }
}
int main(){
     ll a,b,m;
     cin>>a>>b>>m; // this will work only in the time when m is a prime number;
     ll res1 = (a/b)%m;
     a = a%m;
     ll inv_b = pw(b,m-2,m); // fermets little theorem
     ll res2 = a*inv_b%m;
     cout<<res1<<" "<<res2<<endl;
    return 0;
}


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
       int num = 7;
       int count = __builtin_popcount(num);// this is for how many 1's in the binary digit for int
       cout<<count<<endl;
       return 0;
}


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
       ll num;
       cin>>num;
       ll count = __builtin_popcountll(num);// this is for how many 1's in the binary digit for long long int
       cout<<count<<endl;
       return 0;
}



#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
       string s; cin>>s;
       sort(s.begin(),s.end());// important
       do{
          cout<<s<<endl;
       } while(next_permutation(s.begin(),s.end()));// next permutation in stl
       return 0;
}

// this is the question where i felt uneasy
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ll n;
    cin >> n;
    vector<string>s(n); for(auto &i : s) cin>>i; 
    map<char,ll>m;
    for(int i=0;i<n;i++){
        m[s[i][0]]++;
    }
    int ans = 0;
    for (auto &i : m) {
            int k1 = i.second / 2;
            int k2 = i.second - k1;
            ans += (k1 * (k1 - 1)) / 2 + (k2 * (k2 - 1)) / 2;
    }
    cout << ans << endl;
    return 0;
}


// now all about hashing and prefix sum
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e7+10;
ll pre[N];
ll v[N];
#define all(x) (x).begin(), (x).end()
int solve(){
     ll n;cin>>n;
     cout<<pre[n]<<endl;
     return 0;
}
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
      ll n; cin>>n;
      ll v[n+1];
      for(int i=1;i<=n;i++){
         cin>>v[i];
      }
      for(int i=1;i<=n;i++){
          pre[v[i]]++;
      }
      ll t; cin>>t;
      while(t--){
      solve();
}
       return 0;
}

//for character hash array
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
const int N = 1e7+10;
ll pre[N];
int solve(){
     char ch; cin>>ch;
     cout<<pre[ch-'a']<<endl;
     return 0;
}
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
       ll n; cin>>n;
       string s; cin>>s;
       for(int i=0;i<n;i++){
          pre[s[i]-'a']++;
       }
       ll t; cin>>t;
       while(t--){
        solve();
       }
       return 0;
}


// using map for long long int
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
const int N = 1e7+10;
ll hash[N];
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
       ll n; cin>>n;
       ll arr[n];
       map<ll,ll>m;
       for(int i=0;i<n;i++){
          cin>>arr[i];
          m[arr[i]]++;
       }
       ll t;
       cin>>t;
       while(t--){
          ll num; cin>>num;
          cout<<m[num]<<endl;
       }
       return 0;
}



#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
const int N = 1e7+10;
ll hash[N];
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
       ll n; cin>>n;
       ll arr[n];
       unordered_map<ll,ll>m;
       for(int i=0;i<n;i++){
          cin>>arr[i];
          m[arr[i]]++;
       }
       ll t;
       cin>>t;
       while(t--){
          ll num; cin>>num;
          cout<<m[num]<<endl;
       }
       return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
const int N = 1e7+10;
ll hash[N];
ll n,cows;
ll pos[N];
bool repcow(int mindis){
     ll last_pos = -1;
     ll cow_ct = cows;
     for(int i=0;i<n;i++){
         if(pos[i]-last_pos>=mindis || last_pos==-1){
            cow_ct--;
            last_pos = pos[i];
         }
         if(cow_ct==0) break;
     }
     if(cow_ct==0) return true;
     return false;
}
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
      long long int t;
      cin>>t;
      while(t--){
      cin>>n>>cows;
      for(int i=0;i<n;i++){
          cin>>pos[i];
      }
      sort(pos,pos+n);
      ll lo = 0, hi = 1000000000, mid;
      while(hi-lo>1){
         mid = (hi+lo)/2;
         if(repcow(mid)){
            lo = mid;
         }
         else{
            hi = mid-1;            
         }
      }
      if(repcow(hi)){
        cout<<hi<<endl;
      }
      else{
        cout<<lo<<endl;
      }
}
       return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
const int N = 1e5+10;
const int M = 1e9+10;
ll fact[N];
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
       fact[0] = 1; fact[1] = 1;
       for(int i=2;i<N;i++){
            fact[i] = (fact[i-1]*i)%M;
          }
      long long int t;
      cin>>t;
      while(t--){
         ll n; cin>>n;
         cout<<fact[n]<<endl;
      }
       return 0;
}


//  Super short cutm in case of hasing
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
const int N = 1e7+10;
ll has[N];
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
       ll n; cin>>n;
       for(int i=1;i<=n;i++){
           cin>>has[i];
           has[i]+=has[i-1];
       }
       ll p; cin>>p;
       while(p--){
          ll l,r; cin>>l>>r;
          cout<<has[r]-has[l-1]<<endl;
       }
       return 0;
}

// gcd using pre computation technique
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
const int N = 1e3+10;
int arr[N][N];
ll has[N][N];
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
       ll n; cin>>n;
       for(int i=1;i<=n;i++){
           for(int j=1;j<=n;j++){
               cin>>arr[i][j];
               has[i][j] = arr[i][j]+has[i-1][j]+has[i][j-1]-has[i-1][j-1];
           }
       }
       ll t; cin>>t;
       while(t--){
           ll a,b,c,d;
           cin>>a>>b>>c>>d;
           ll result = has[c][d]-has[a-1][d]-has[c][b-1]+has[a-1][b-1];
           cout<<result<<endl;
       }
       return 0;
}
1
3 3  
2 6 9
1 1
2 2
2 3


// pre computation at its best
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
const int N = 1e5+10;
ll has[N];
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
       ll n,q; cin>>n>>q;
       while(q--){
         ll a,b,c;
         cin>>a>>b>>c;
         has[a]+=c;
         has[b+1]-=c;
       }
       for(int i=1;i<=n;i++){
          has[i]+=has[i-1];
       }
       for(int i=1;i<=n;i++){
         cout<<has[i]<<" ";
       }
       cout<<endl;
       return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int l = 0, r = 0, max_len = 0;
    map<int, int> freq;
    while (r < n) {
        freq[a[r]]++;
        while (freq.rbegin()->first - freq.begin()->first > 1) {
            freq[a[l]]--;
            if (freq[a[l]] == 0) {
                freq.erase(a[l]);
            }
            l++;
        }
        max_len = max(max_len, r - l + 1);
        r++;
    }
    cout << max_len << endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
const int N = 1e7+10;
ll pre[N];
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
       ll n; cin>>n;
       for(int i=1;i<=n;i++){
          cin>>pre[i];
          pre[i]+=pre[i-1];
       }
       ll maxi = INT_MIN;
       for(int i=1;i<=n;i++){
          ll sum = 0;
           for(int j=0;j<i;j++){
              sum = pre[i] - pre[j];
              maxi = max(maxi,sum);
           }
       }
       cout<<maxi<<endl;
       return 0;
}
8
-2 -3 4 -1 -2 1 5 -3


// kadans algorithm
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
const int N = 1e7+10;
ll pre[N];
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
       ll n; cin>>n;
       vector<ll>v(n); for(auto &i : v) cin>>i;
       ll sum = 0; ll maxi = INT_MIN;ll ansstart = -1, ansend = -1;ll start;
       for(int i=0;i<n;i++){
           if(sum==0){
              start = i;
           }
           sum+=v[i];
            if(sum>maxi){
              maxi = sum;
              ansstart = start; ansend = i;
           }
           else if(sum<0){
             sum=0;
           }
       }
       ll q;
       if(maxi==INT_MIN){
          maxi = v[0];
         for(int i=1;i<n;i++){
            if(maxi<v[i]){
                maxi = v[i];
                q = i;
            }
         }
         cout<<"Start: "<<q<<" "<<"End: "<<q<<endl;
         cout<<maxi<<endl;
       }
       else{
          cout<<"Start: "<<ansstart<<" "<<"End: "<<ansend<<endl;
          cout<<maxi<<endl;
       }
       return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
const int N = 1e7+10;
ll pre[N];
int solve(){
    ll n;
    cin >> n;
    ll a[n+1];
    for(int i = 1;i <= n;i++){
        cin >> a[i];
    }
    sort(a + 1 , a + 1 + n);
    ll l = 1;
    ll ans = 0;
    for(int i = 1;i <= n;i++){
        if(a[i] < l)continue;
        if(a[i] >= l){
            ans += (a[i] - l);
            l++;
        }
    }
    cout << ans << endl;
    return 0;
}
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
      ll t;
      cin>>t;
      while(t--){
      solve();
}
       return 0;
}


// minimum lcm , number theory
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
const int N = 1e7+10;
ll pre[N];
int solve(){
     ll n; cin>>n; ll ans = 1;
     for(int i=2;i*i<=n;i++){
         if(n%i==0){
            ans = (n/i);
            break;
         }
     }
     cout<<ans<<" "<<n-ans<<endl;
     return 0;
}
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
      ll t;
      cin>>t;
      while(t--){
      solve();
}
       return 0;
}

//  combination calculation in shortcut
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n; cin>>n;
    n = n-1;ll result = 1;
    for(ll i = 1;i<=11;i++){
        result*=n;
        n--;
        result/=i;
    }
    cout<<result<<endl;
   return 0;
}



//  new thing
      memset(arr,0,sizeof(arr)); 
      it is used to set all the value of index 0 ;



// two pointer
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
const int N = 1e5+10;
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
       ll n,x; cin>>n>>x;
       vector<pair<ll,ll>>v;
       for(ll i=0;i<n;i++){
         ll p;
         cin>>p;
         v.push_back({p,i+1});
       }
       sort(v.begin(),v.end());
       int lo=0,hi=v.size()-1;
        while(lo<hi){
        int sum=v[lo].first+v[hi].first;
        if(sum==x)
        {
          cout<<v[lo].second<<' '<<v[hi].second<<endl;
          return 0;
        }
        if(sum>x)
        hi--;
        else lo++;
       }
       cout<<"-1"<<endl;
       return 0;
}



#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
const int N = 1e5+10;
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
       ll n,a,b,c; cin>>n>>a>>b>>c;
       if((a+b+c)==n){
            cout<<"3"<<endl;
       }
       else if((a+b)==n || (b+c)==n || (c+a)==n){
            cout<<"2"<<endl;
       }
       else if(a>=n && b>=n && c>=n){
            cout<<"1"<<endl;
       }
       else{
        cout<<n<<endl;
       }
       return 0;
}


#include <bits/stdc++.h>
using namespace std;
 
int n, m[100008];
pair<int, int> a[100008];
 
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
 
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> a[i].first >> a[i].second, m[a[i].first]++;
    for(int i=0; i<n; i++)
        cout << n - 1 + m[a[i].second] << ' ' << n - 1 - m[a[i].second] << '\n';
}

// Longest subarray sum with the value K;
this works for positive, negative and 0s
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
const int N = 1e5+10;
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
       ll n,k; cin>>n>>k;
       ll arr[n];
       for(ll i=0;i<n;i++){
           cin>>arr[i];
       }      
       ll maxlength = 0; map<ll,ll>m; ll sum = 0;
       for(ll i=0;i<n;i++){
          sum+=arr[i];
          if(sum==k){
             maxlength = max(maxlength,i+1);
          }
          ll rem = sum - k;
          if(m.find(rem)!=m.end()){
             ll length = i - m[rem];
             maxlength = max(maxlength,length);
          }
          if(m.find(sum)==m.end()){
             m[sum] = i;
          }
       }
       cout<<maxlength<<endl;
       return 0;
}


//  most optimal of that 
only work for positives and 0s
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
const int N = 1e5+10;
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
       ll n,k; cin>>n>>k;
       ll arr[n];
       for(ll i=0;i<n;i++){
           cin>>arr[i];
       }      
       ll left = 0, right = 0;
       ll sum = arr[0]; ll maxlen= 0;
       while(right<n){
          while(left<=right && sum>k){
            sum-=arr[left];
             left++;
          }
         if(sum==k){
            maxlen = max(maxlen,right-left+1);
         }
         right++;
         if(right<n){
            sum+=arr[right];
         }
       }
       cout<<maxlen<<endl;
       return 0;
}


// find two elements index so that there sum will be k from the array
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
const int N = 1e5+10;
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
       ll n,k; cin>>n>>k;
       ll arr[n];
       for(ll i=0;i<n;i++){
           cin>>arr[i];
       }      
       map<ll,ll>m;
       for(int i=0;i<n;i++){
          ll a = arr[i];
          ll more = k - a;
          if(m.find(more)!=m.end()){
             cout<<"YES"<<endl;
             cout<<m[more]<<" "<<i<<endl;
             return 0;
          }
          m[a] = i;
       }
       cout<<"NO"<<endl;
       return 0;
}

most optimal solution of that

























// 
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
const int N = 1e5+10;
int solve(){
    ll n,m,k;
    cin>>n>>m>>k;
    if(m==0){
      cout<<"0"<<endl;
      return 0;
    }
    ll p = n/k;
    if(p>=m){
      cout<<m<<endl;
    }
    else{
      ll d = m - p;
      ll x = ceil(double(d)/((double)k-1.0));
      cout<<p - x<<endl;
    }
     return 0;
}
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
      ll t;
      cin>>t;
      while(t--){
      solve();
}
       return 0;
}


//  longest sub sequence with distinct elements
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
    }
    map<ll, ll> m; 
    ll j = 0;     
    ll ans = 0;  
    for (ll i = 0; i < n; i++) {
        if (m.find(v[i]) != m.end() && m[v[i]] >= j) {
            j = m[v[i]] + 1;
        }
        m[v[i]] = i;
        ans = max(ans, i - j + 1);
    }
    cout << ans << endl;
    return 0;
}

//  good to know
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
const int N = 1e5+10;
int solve(){
     ll n,k; cin>>n>>k;
     string s; cin>>s; ll ans = INT_MAX;
     vector<ll>pr(n+1);
     for(int i=1;i<=n;i++){
        pr[i] = pr[i-1]+(s[i-1]=='W'?1:0);
     }
     for(int i=0;i<=(n-k);i++){
       ans = min(pr[i+k]-pr[i],ans);
     }
     cout<<ans<<endl;
     return 0;
}
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
      ll t;
      cin>>t;
      while(t--){
      solve();
}
       return 0;
}


// minimum product
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
const int N = 1e5+10;
ll check(ll a,ll b,ll x,ll y,ll n){
     ll d1 = a - x;
     ll d2 = b - y;
     ll p =min(n,d1);
     a-=p;
     n-=p;
     ll q =min(n,d2);
     b-=q;
     n-=q;
     return (a*b);
}
int solve(){
     ll a,b,x,y,n;
     cin>>a>>b>>x>>y>>n;
     ll ans = min(check(a,b,x,y,n),check(b,a,y,x,n));
     cout<<ans<<endl;
     return 0;
}
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
      ll t;
      cin>>t;
      while(t--){
      solve();
}
       return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
const int N = 1e5+10;
int solve(){
     ll n; cin>>n;
     ll x = n/2;
     ll y = n-x;
     string s = to_string(x);
     string t = to_string(y);
     ll count = 0;ll count1 = 0;
     for(int i=0;i<s.size();i++){
         count+=s[i]+'0';
     }
     for(int j=0;j<t.size();j++){
         count1+=t[j]+'0';
     }
     if(abs(count-count1)<=1){
        cout<<y<<" "<<x<<endl;
     }
     else{
        string r = to_string(y);
        string d = to_string(x);
        ll i = 1;
        ll k = min(r.size(),d.size());
        while(k--){
           if(d[s.size()-i]=='9'){
            if(i%2!=0){
             r[r.size()-i]='4';
             d[d.size()-i]='5';
            }
            else{
             r[r.size()-i]='5';
             d[d.size()-i]='4';
            }
           }
           else{
             break;
           }
           i++;
        }
        y = stoi(r);
        x = stoi(d);
        cout<<y<<" "<<x<<endl;
     }
     return 0;
}
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
      ll t;
      cin>>t;
      while(t--){
      solve();
}
       return 0;
}



#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
const int N = 1e5+10;
int solve(){
    ll n; cin>>n;
    if(n%2==0){
        cout<<"NO"<<endl;
        return 0;
    }
    cout<<"YES"<<endl;
    ll x = 0;
    for(ll i=n;i>=1;i-=2){
        cout<<++x<<" "<<n+i<<endl;
    }
    for(ll i=n-1;i>=1;i-=2){
        cout<<++x<<" "<<n+i<<endl;
    }
    return 0;
}
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
      ll t;
      cin>>t;
      while(t--){
      solve();
}
       return 0;
}

 vector<int> subarraySum(vector<int> arr, int n, long long s) {
        int flag = 0;
        if(s==0){
            for(int i=0;i<n;i++){
               if(arr[i]==0){
                   flag=1;
                   return {i+1,i+1};
               }
            }
            if(flag==0){
                return {-1};
            }
        }
        long long right = 0, left = 0;
        long long sum = arr[0];
        if(sum==s){
            return{1,1};
        }
        while(right<n-1){
            if(sum+arr[right+1]<=s){
                sum+=arr[right+1];
                right++;
            }
            else{
                sum-=arr[left];
                left++;
            }
            if(sum==s){
              return {left+1,right+1};
            }
        }
        return{-1};
    }

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define yes cout <<"YES\n";
#define no cout <<"NO\n";
const int N = 1e5+10;
int solve(){
     ll n,q;
     cin>>n>>q;
     vector<ll>v(n),v1(q);
     for(auto &i : v){
        cin>>i;
     }
     map<ll,ll>m;
     for(int i=0;i<n;i++){
        ll x = (i+1)*(n-i)-1;
        m[x]++;
        if(i>0){
          ll y = i*(n-i);
          m[y]+=(v[i]-v[i-1]-1);
        }
     }
     while(q--){
        ll r; cin>>r;
        cout<<m[r]<<" ";
     }
     cout<<endl;
     return 0;
}
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
      ll t;
      cin>>t;
      while(t--){
      solve();
}
       return 0;
}


// recursion
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define yes cout <<"YES\n";
#define no cout <<"NO\n";
const int N = 1e5+10;
void solve(ll idx,vector<ll>&v,ll arr[],ll n){
         if(idx>=n){
            for(auto &i:v){
              cout<<i<<" ";
            }
            if(v.size()==0){
              cout<<"{}";
            }
            cout<<endl;
            return;
         }
         v.push_back(arr[idx]);
         solve(idx+1,v,arr,n);
         v.pop_back();
         solve(idx+1,v,arr,n);
}
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
       ll arr[] = {1,2,3};
       ll n =3;
       vector<ll>v;
       solve(0,v,arr,n);
       return 0;
}


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define yes cout <<"YES\n";
#define no cout <<"NO\n";
const int N = 1e5+10;
void solve(ll x,vector<ll>&v,ll s,ll sum,ll arr[],ll n){
      if(x>=n){
        if(sum==s){
           for(auto &i : v){
              cout<<i<<" ";
           }
           cout<<endl;
        }
        return;
      }
      v.push_back(arr[x]);
      s+=arr[x];
      solve(x+1,v,s,sum,arr,n);
      s-=arr[x];
      v.pop_back();
      solve(x+1,v,s,sum,arr,n); 
}
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
       ll arr[] = {1,2,1};
       ll n = 3;
       ll sum = 2;
       ll s=0;
       vector<ll>v;
       solve(0,v,0,sum,arr,n);
       return 0;
}

// prefix sum  in c++  short technique
// partial_sum(r.begin(), r.end(), r.begin());
// partial_sum(b.begin(), b.end(), b.begin());

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define yes cout <<"YES\n";
#define no cout <<"NO\n";
const int N = 1e5+10;
int solve(){
     ll n;
     cin>>n;
     vector<ll>v(n);
     for(auto &i : v){
        cin>>i;
     }
     vector<ll>v1;
     v1 = v;
     sort(all(v1));
     if(v==v1){
        cout<<"0"<<endl;
        return 0;
     }
     ll ans= 1; ll i;
      for(i=n-1;i>=1;i--){
        if(v[i]<=v[i-1]){
          ans++;
        }
        else{
          break;
        }
      }
      for(ll j = i;j>=1;j--){
       if(v[j]>=v[j-1]){
          ans++;
       }
       else{
         break;
       }
      }
     cout<<n-ans<<endl;
     return 0;
}
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
      ll t;
      cin>>t;
      while(t--){
      solve();
}
       return 0;
}

#include<iostream>
using namespace std;
struct node{
    int data;
    struct node* link;
};
void noofnodes(struct node* head){
    struct node* ptr;
    if(head==NULL){
        cout<<"The node is empty";
    }
    ptr = head;
    while(ptr!=NULL){
        cout<<ptr->data<<endl;
        ptr = ptr->link;
    }
}
int main(){
    struct node* head = (struct node*)malloc(sizeof(struct node));
    head->data = 34;
    head->link = NULL;
    struct node* current = (struct node*)malloc(sizeof(struct node));
    current->data = 56;
    current->link = NULL;
    head->link = current;
    current = (struct node*)malloc(sizeof(struct node));
    current->data = 90;
    current->link = NULL;
    head->link->link = current;
    noofnodes(head);
    return 0;
}

#include<iostream>
using namespace std;
struct node{
    int data;
    struct node* link;
};
void add_at_the_end(struct node* head,int data){
    struct node* ptr;
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;
    ptr = head;
    while(ptr->link!=NULL){
        ptr = ptr->link;
    }
    ptr->link = temp;
    int count = 0;
    struct node* ptr1 = head;
    while(ptr1!=NULL){
        cout<<ptr1->data<<endl;
        ptr1 = ptr1->link;
    }
}
int main(){
    struct node* head = (struct node*)malloc(sizeof(struct node));
    head->data = 34;
    head->link = NULL;
    struct node* current = (struct node*)malloc(sizeof(struct node));
    current->data = 56;
    current->link = NULL;
    head->link = current;
    current = (struct node*)malloc(sizeof(struct node));
    current->data = 90;
    current->link = NULL;
    head->link->link = current;
    add_at_the_end(head,86);
    return 0;
}


////////////////////////////////////
#include<iostream>
using namespace std;
struct ll{
    struct node{
        int data;
        node* link; 
    };
    struct node* head = NULL;
    struct node* tail = NULL;
    void add_node(int value){
         struct node* temp = (struct node*)malloc(sizeof(struct node));
         temp->data = value;
         temp->link = NULL;
         if(head == NULL){
             head = temp;
             tail = temp;
         }
         else{
            tail->link = temp;
            tail = temp;
         }
    }
    void printvalue(){
        struct node* ptr = head;
        while(ptr!=NULL){
           cout<<ptr->data<<endl;
           ptr = ptr->link;
        }
    }
    void freelist(){
        struct node* ptr1 = head;
        while(ptr1!=NULL){
           struct node* next = ptr1->link;
           free(ptr1);
           ptr1 = next;
        }
        head = tail = NULL;
    }
};
int main(){
    ll list;
    list.add_node(89);
    list.add_node(90);
    list.add_node(91);
    list.printvalue();
    list.freelist();
    return 0;
}



// insert at first
#include<iostream>
using namespace std;
struct ll{
    struct node{
        int data;
        struct node* link; 
    };
    struct node* head = NULL;
    struct node* tail = NULL;
    void add_node(int value){
         struct node* temp = (struct node*)malloc(sizeof(struct node));
         temp->data = value;
         temp->link = NULL;
         if(head == NULL){
             head = temp;
             tail = temp;
         }
         else{
            tail->link = temp;
            tail = temp;
         }
    }
    void insert_first(int value){
         node* temp1 = new node();
         temp1->data = value;
         temp1->link = NULL;
         if(head==NULL){
            head = temp1;
            tail = temp1;
         }
         else{
            temp1->link = head;
            head = temp1;
         }
    }
    void printnode(){
        struct node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<endl;
            temp = temp->link;
        }
    }
    void freelist(){
        struct node* ptr1 = head;
        while(ptr1!=NULL){
           struct node* next = ptr1->link;
           free(ptr1);
           ptr1 = next;
        }
        head = tail = NULL;
    }
};
int main(){
    ll list;
    list.add_node(89);
    list.add_node(90);
    list.add_node(91);
    list.insert_first(94);
    list.printnode();
    list.freelist();
    return 0;
}



// insert at last
#include<iostream>
using namespace std;
struct ll{
    struct node{
        int data;
        struct node* link; 
    };
    struct node* head = NULL;
    struct node* tail = NULL;
    void add_node(int value){
         struct node* temp = (struct node*)malloc(sizeof(struct node));
         temp->data = value;
         temp->link = NULL;
         if(head == NULL){
             head = temp;
             tail = temp;
         }
         else{
            tail->link = temp;
            tail = temp;
         }
    }
    void insert_last(int value){
         struct node* temp1 = (struct node*)malloc(sizeof(struct node));
         temp1->data = value;
         temp1->link = NULL;
         if(head==NULL){
            head = temp1;
            tail = temp1;
         }
         else{
            tail->link = temp1;
            tail = temp1;
         }
    }
    void printnode(){
        struct node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<endl;
            temp = temp->link;
        }
    }
    void freelist(){
        struct node* ptr1 = head;
        while(ptr1!=NULL){
           struct node* next = ptr1->link;
           free(ptr1);
           ptr1 = next;
        }
        head = tail = NULL;
    }
};
int main(){
    ll list;
    list.add_node(89);
    list.add_node(90);
    list.add_node(91);
    list.insert_last(94);
    list.printnode();
    list.freelist();
    return 0;
}


// only traverse
#include<iostream>
using namespace std;
struct ll{
    struct node{
        int data;
        struct node* link; 
    };
    struct node* head = NULL;
    struct node* tail = NULL;
    void add_node(int value){
         struct node* temp = (struct node*)malloc(sizeof(struct node));
         temp->data = value;
         temp->link = NULL;
         if(head == NULL){
             head = temp;
             tail = temp;
         }
         else{
            tail->link = temp;
            tail = temp;
         }
    }
    void printnode(){
        struct node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<endl;
            temp = temp->link;
        }
    }
    void freelist(){
        struct node* ptr1 = head;
        while(ptr1!=NULL){
           struct node* next = ptr1->link;
           free(ptr1);
           ptr1 = next;
        }
        head = tail = NULL;
    }
};
int main(){
    ll list;
    list.add_node(89);
    list.add_node(90);
    list.add_node(91);
    list.printnode();
    list.freelist();
    return 0;
}
// delete first  element
#include<iostream>
using namespace std;
struct ll{
    struct node{
        int data;
        struct node* link; 
    };
    struct node* head = NULL;
    struct node* tail = NULL;
    void add_node(int value){
         struct node* temp = (struct node*)malloc(sizeof(struct node));
         temp->data = value;
         temp->link = NULL;
         if(head == NULL){
             head = temp;
             tail = temp;
         }
         else{
            tail->link = temp;
            tail = temp;
         }
    }
    int delete_first(){
        if(head==NULL){
            return -1;
        }
        else if(head==tail){
            struct node* temp1 = head;
            int x = head->data;
            head = NULL;
            tail = NULL;
            free(temp1);
            return x;
        }
        else{
            struct node* temp2 = head;
            int x = head->data;
            head = head->link;
            free(temp2);
            return x;
        }
    }
    void printnode(){
        struct node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<endl;
            temp = temp->link;
        }
    }
    void freelist(){
        struct node* ptr1 = head;
        while(ptr1!=NULL){
           struct node* next = ptr1->link;
           free(ptr1);
           ptr1 = next;
        }
        head = tail = NULL;
    }
};
int main(){
    ll list;
    list.add_node(89);
    list.add_node(90);
    list.add_node(91);
    list.delete_first();
    list.printnode();
    list.freelist();
    return 0;
}

// delete last element

#include<iostream>
using namespace std;
struct ll{
    struct node{
        int data;
        struct node* link; 
    };
    struct node* head = NULL;
    struct node* tail = NULL;
    void add_node(int value){
        struct node* temp = (struct node*)malloc(sizeof(struct node));
        temp->data = value;
        temp->link = NULL;
        if(head==NULL){
            head = temp;
            tail = temp;
        }
        else{
            tail->link = temp;
            tail = temp;
        }
    }
    void delete_last(){
        struct node* ptr1 = tail;
        struct node* ptr2 = head;
        if(head==NULL){
            return;
        }
        else if(head==tail){
            node* temp = head;
            head = NULL;
            tail = NULL;
            free(temp);
            return;
        }
        else{
          while(ptr2->link->link!=NULL){
               ptr2 = ptr2->link;
          }
          ptr2->link =  NULL;
          tail = ptr2;
          free(ptr1);
        }
    }
    void print(){
        struct node* ptr = head;
        while(ptr!=NULL){
            cout<<ptr->data<<endl;
            ptr = ptr->link;
        }
    }
    void free_memory(){
        struct node* temp1 = head;
        while(temp1!=NULL){
           struct node* next = temp1->link;
           free(temp1);
           temp1 = next;
        }
        head = tail = NULL;
    }
};
int main(){
    ll list;
    list.add_node(37);
    list.add_node(38);
    list.add_node(39);
    list.delete_last();
    list.print();
    list.free_memory();
    return 0;
}

// random element cut down
#include<iostream>
using namespace std;
struct ll {
    struct node {
        int data;
        struct node* link; 
    };
    struct node* head = NULL;
    struct node* tail = NULL;
    void add_node(int value) {
        struct node* temp = (struct node*)malloc(sizeof(struct node));
        temp->data = value;
        temp->link = NULL;
        if(head == NULL) {
            head = temp;
            tail = temp;
        } 
        else {
            tail->link = temp;
            tail = temp;
        }
    }
    void delete_element(int value) {
        if(head == NULL) {
            return;
        }
        if(head->data == value) {
            struct node* temp = head;
            head = head->link;
            if(head == NULL) {
                tail = NULL;  
            }
            free(temp);
            return;
        }
        struct node* ptr2 = head;
        while(ptr2->link != NULL) {
            if(ptr2->link->data == value) {
                struct node* temp = ptr2->link;
                ptr2->link = ptr2->link->link;
                if(temp == tail) {
                    ptr2->link = NULL;
                    tail = ptr2;  
                }
                free(temp);
                return;
            }
            ptr2 = ptr2->link;
        }
    }
    void print() {
        struct node* ptr = head;
        while(ptr != NULL) {
            cout << ptr->data << endl;
            ptr = ptr->link;
        }
    }
    void free_memory() {
        struct node* temp1 = head;
        while(temp1 != NULL) {
            struct node* next = temp1->link;
            free(temp1);
            temp1 = next;
        }
        head = tail = NULL;
    }
};
int main() {
    int x;
    cin >> x;
    ll list;
    list.add_node(37);
    list.add_node(38);
    list.add_node(39);
    list.delete_element(x);
    list.print();
    list.free_memory();
    return 0;
}

//  insert at first in doubly linked list
#include<iostream>
using namespace std;
struct ll {
    struct node {
        int data;
        struct node* prev;
        struct node* next; 
    };
    struct node* head = NULL;
    struct node* tail = NULL;
    void add_node(int value) {
        struct node* temp = (struct node*)malloc(sizeof(struct node));
        temp->prev = NULL;
        temp->data = value;
        temp->next = NULL;
        if(head == NULL) {
            head = temp;
            tail = temp;
        } 
        else {
            tail->next = temp;
            tail = temp;
        }
    }
    void add_first(int value){
        struct node* temp = (struct node*)malloc(sizeof(struct node));
        temp->prev = NULL;
        temp->data = value;
        temp->next = NULL;
        if(head==NULL){
           head = temp;
           tail = temp;
        }
        else{
           temp->next = head;
           head->prev = temp;
           head = head->prev;
        }
    }
    void print() {
        struct node* ptr = head;
        while(ptr != NULL) {
            cout << ptr->data << endl;
            ptr = ptr->next;
        }
    }
    void free_memory() {
        struct node* temp1 = head;
        while(temp1 != NULL) {
            struct node* next = temp1->next;
            free(temp1);
            temp1 = next;
        }
        head = tail = NULL;
    }
};
int main() {
    // int x;
    // cin >> x;
    ll list;
    list.add_node(37);
    list.add_node(38);
    list.add_node(39);
    list.add_first(55);
    list.print();
    list.free_memory();
    return 0;
}

// insert at last in doubly linked list
#include<iostream>
using namespace std;
struct ll {
    struct node {
        int data;
        struct node* prev;
        struct node* next; 
    };
    struct node* head = NULL;
    struct node* tail = NULL;
    void add_node(int value) {
        struct node* temp = (struct node*)malloc(sizeof(struct node));
        temp->prev = NULL;
        temp->data = value;
        temp->next = NULL;
        if(head == NULL) {
            head = temp;
            tail = temp;
        } 
        else {
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
    }
    void add_last(int value){
        struct node* temp = (struct node*)malloc(sizeof(struct node));
        temp->prev = NULL;
        temp->data = value;
        temp->next = NULL;
        if(head==NULL){
           head = temp;
           tail = temp;
        }
        else{
           tail->next = temp;
           temp->prev = tail;
           tail = tail->prev;
        }
    }
    void print() {
        struct node* ptr = head;
        while(ptr != NULL) {
            cout << ptr->data << endl;
            ptr = ptr->next;
        }
    }
    void free_memory() {
        struct node* temp1 = head;
        while(temp1 != NULL) {
            struct node* next = temp1->next;
            free(temp1);
            temp1 = next;
        }
        head = tail = NULL;
    }
};
int main() {
    // int x;
    // cin >> x;
    ll list;
    list.add_node(37);
    list.add_node(38);
    list.add_node(39);
    list.add_last(55);
    list.print();
    list.free_memory();
    return 0;
}


// doubly linked list for delete first element if exists
#include<iostream>
using namespace std;
struct ll {
    struct node {
        int data;
        struct node* prev;
        struct node* next; 
    };
    struct node* head = NULL;
    struct node* tail = NULL;
    void add_node(int value) {
        struct node* temp = (struct node*)malloc(sizeof(struct node));
        temp->prev = NULL;
        temp->data = value;
        temp->next = NULL;
        if(head == NULL) {
            head = temp;
            tail = temp;
        } 
        else {
            tail->next = temp;
            tail = temp;
        }
    }
    void delete_first(){
        struct node* temp = head;
        if(head==NULL){
           return;
        }
        else if(head == tail){
           head = NULL;
           tail = NULL;
        }
        else{
           head = head->next;
           head->prev = NULL;
        }
        free(temp);
    }
    void print() {
        struct node* ptr = head;
        while(ptr != NULL) {
            cout << ptr->data << endl;
            ptr = ptr->next;
        }
    }
    void free_memory() {
        struct node* temp1 = head;
        while(temp1 != NULL) {
            struct node* next = temp1->next;
            free(temp1);
            temp1 = next;
        }
        head = tail = NULL;
    }
};
int main() {
    // int x;
    // cin >> x;
    ll list;
    list.add_node(37);
    list.add_node(38);
    list.add_node(39);
    list.delete_first();
    list.print();
    list.free_memory();
    return 0;
}
*/
/*#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int hsh[N];
int main(){
    int x;
    cin>>x;
    int a[x];
    for(int i=0;i<x;i++){
        cin>>a[i];
        hsh[a[i]]++;
    }
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<hsh[n]<<endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
const int N = 1e7+10;
int hsh[N];
int main(){
    vector<int>v;
    vector<int>v1;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
        v1.push_back(x);
    }
    sort(v.begin(),v.end());
    int p = v[n-1]-v[0];
    for(int i=0;i<p;i++){
        hsh[v1[i]-v[0]]++;
    }
    int t;
    cin>>t;
    while(t--){
        int l;
        cin>>l;
        cout<<hsh[l-v[0]]<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
const N = 1e7+10;
ll arr[N];
ll pre[N];
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        pre[i] = pre[i-1]+arr[i];
    }
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        cout<<pre[b]-pre[a-1]<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    vector<long long int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    long long int count;
    long long int p=0;
    vector<long long int>v1;
    for(long long int i=1;i<=v[0];i++){
        if(v[0]%i==0){
            v1.push_back(i);
        }
    }
    for(long long int i=0;i<v1.size();i++){
        count = 0;
        for(int j=0;j<v.size();j++){
            if(v[j]%v1[i]==0){
                count++;
            }
        }
        if(count == v.size()){
            p++;
        }
    }
    cout<<p<<endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    vector<long long int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    long long int g = 0;
    for(long long int i=0;i<n;i++){
        g = gcd(g,v[i]);
    }
    long long int count = 0;
    long long int j ;
    for(long long int i=1;i*i<=g;i++){
        if(g%i==0){
            count++;
            j = g/i;
            if(j>i){
                count++;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}
*
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int solve(){
    long long int a,b;
    cin>>a>>b;
    vector<int>v(a);
    for(int i=0;i<a;i++){
        cin>>v[i];
    }   
    sort(v.begin(),v.end());
    set<int>s;
    for(int i=0;i<v.size();i++){
        s.insert(v[i]);
    }
    vector<int> v1;
    for(auto value : &s){
        v1.push_back(value);
    }
    vector<int>v2;
    for(auto valu : v1){
        v2.push_back(valu);
    }
    for(int i=0;i<v1.size()-1;i++){
        int sum =0;
        if(v1[i+1]-v1[i]==1){
            for(int j=0;j<v.size();j++){
                if((v[j]==v[i] || v[j]==v[i+1]) && ((sum+v[j])<=b)){
                    sum+=v[j];
                }
            }
        }
        v2.push_back(sum);
    }
    
    return 0;
}
int main()
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
      long long int t;
      cin>>t;
      while(t--){
      solve();
}
       return 0;
}

2 2 1 2 3
2 3 4



#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int solve(){
    ll n,q;
    cin>>n>>q;
    ll arr[n];
    ll pre[n];
    pre[0]=0;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        pre[i] = pre[i-1]+arr[i];
    }
    while(q--){
       ll l,r,k;
       cin>>l>>r>>k;
       ll sum = 0;
       sum+=(r-l+1)*k+pre[l-1]+pre[n]-pre[k+1];
       cout<<sum<<endl;
    }
    return 0;
}
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
      long long int t;
      cin>>t;
      while(t--){
      solve();
}
       return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int solve(){
    string s;
    cin>>s;
    stack<char>st;
    for(int i=0;i<s.size();i++){
        if(s[i]=='('){
            st.push(s[i]);
        }
        else if(s[i]==')' &&(!s.empty()) && st.top()=='('){
            st.pop();
        }
    }
    if(s.empty()){
        cout<<"NO"<<endl;
        return 0;
    }

    return 0;
}
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
      long long int t;
      cin>>t;
      while(t--){
      solve();
}
       return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int solve(){
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int ans = 0;
    int mx_p = 0;
    int sum = 0;
        if(sum-mx_p==mx_p){
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
      long long int t;
      cin>>t;
      while(t--){
      solve();
}
       return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int solve(){
    ll n,p;
    cin>>n>>p;
    if(n==1 && p<10){
        cout<<p<<endl;
        return 0;
    }
    else if(n==1 && p==10){
        cout<<"-1"<<endl;
        return 0;
    }    
    else if(n>1){
       if(p==10){
          for(int i=0;i<n-1;i++){
            cout<<"1";
          }
          cout<<"0"<<endl;
       }
       else{
         for(int i=0;i<n-2;i++){
            cout<<"1";
         }
         cout<<6*p<<endl;
       }
    }
    return 0;
}
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
      long long int t;
      cin>>t;
      while(t--){
      solve();
}
       return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a;
    cin>>a;
    vector<string>s;
    while(a!=0){
        s.push_back(a%2);
        a/=2;
    }
    s.reverse();
    for(int i=0;i<s.size();i++){
        cout<<s[i];
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int solve(){
    ll x;
    cin>>x;
    for(ll i=1LL;i<=(ll)cbrt(x);i++){
        ll d = x - (i*i*i);
        if(d<=0){
            break;
        }
        ll p = cbrt(d);
        if(p*p*p == d){
            cout<<"YES"<<endl;
            return 0;
        }
    }   
    cout<<"NO"<<endl;
    return 0;
}
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
      long long int t;
      cin>>t;
      while(t--){
      solve();
}
       return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int solve(){
    ll n; cin>>n; vector<ll>v(n),d(n);
    for(auto &i : v) cin>>i;     
    for(int i=n-1;i>=0;i--){
       d[i] = v[i];   
       ll a = i+v[i];  
       if(a<n){
        d[i]+=d[a];
       }
    } 
    for(auto b : d) cout<<b<<endl;
    // cout<<*max_element(d.begin(),d.end())<<endl;
    return 0;
}
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
      long long int t;
      cin>>t;
      while(t--){
      solve();
}
       return 0;
}


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<string> v;
void generate(string &s,int open,int close){
     if(open==0 && close==0){
        v.push_back(s);
        return;
     }
    if(open>0){
       s.push_back('(');
       generate(s,open-1,close);
       s.pop_back();
    }
    if(close>0){
       if(open<close){
       s.push_back(')');
       generate(s,open,close-1);
       s.pop_back();
       }
    }
}
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
       int n;
       cin>>n;
       string s="";
       generate(s,n,n);
       for(int i=0;i<v.size();i++){
         cout<<v[i]<<endl;
       }
       return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
       int x; cin>>x;
       double p = pow(x,1.0/3);
       cout<<setprecision(9)<<p<<endl;
       return 0;
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const double N = 1e-6;
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
       double x,n; cin>>x>>n;
       double lo = 1,hi = x;
       double mid;
       while(hi-lo>N){
          mid = (lo+hi)/2;
          if(pow(mid,n)<x){
            lo = mid;
          }
          else{
            hi = mid;
          }
       }
       cout<<pow(x,1.0/n)<<endl;
       cout<<lo<<endl;
       return 0;
}


#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define Y cout << "YES\n";
#define N cout << "NO\n";

void solve(){
    ll n,m; cin>>n>>m;
    ll mex=0;
    while(n--){
        ll l; cin>>l;
        set<ll> st;
        while(l--){
            ll x; cin>>x;
            st.insert(x);
        }
        ll y=0,j=0;
        for(;true;){
            if(st.find(j)==st.end()){
                if(y==0) y=1;
                else{
                    mex=max(mex,j);
                    break;
                }
            }
            j++;
        }
    }
    // cout<<mex<<endl;
    ll ans=mex*min(mex+1,m+1);
    // cout<<ans<<endl;
    if(m>mex) ans+=(m*(m+1)/2-(mex)*(mex+1)/2);
    cout<<ans<<endl;
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--) solve();
}


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int solve(){
    ll n,m;
    cin>>n>>m;
    vector<ll>v; ll mex; 
    set<ll>s;
    while(n--){
       ll a;
       cin>>a;
       while(a--){
         ll  x;cin>>x;
         s.insert(x);
       }
       ll i = 0;
       for(auto e : s){
         if(i==e){
            i++;
            continue;
         }
         else{
            mex = i;
            break;
         }
       }
       if(n!=0){ s.clear();}
       s.insert(mex);
    }
    ll d = s.size();
    ll i = 0;
    for(auto e : s){
         if(i==e){
            i++;
            continue;
         }
         else{
            mex = i;
            break;
         }
    }
    s.insert(mex);
    if(d==s.size()){
      mex = i;
    }
    ll p = min(m,mex);
    if(p>m){
      cout<<(m+1)*p<<endl;
    }
    ll result = (mex+1)*mex;
    ll add = ((m*(m+1))/2) - (mex*(mex+1))/2;
    cout<<result+add<<endl; 
    return 0;
}
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
      long long int t;
      cin>>t;
      while(t--){
      solve();
}
       return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int solve(){
    ll n; cin>>n;
    if(n%2==0){
        cout<<"No"<<endl;
    }
    else{
        cout<<"Yes"<<endl;
         ll l = 1;
        vector<pair<ll,ll>>p(n);
        for(int i=0;i<n;i++){
            p[i].first = l;
            l++;
        }
        for(int i=0;i<n;i++){
            p[i].second = l;
            l++;
        }
        for(int i=0;i<n;i++){
            cout<<p[i].first<<" "<<p[i].second<<endl;
        }
    }
    return 0;
}
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
      long long int t;
      cin>>t;
      while(t--){
      solve();
}
       return 0;
}


#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define Y cout << "YES\n";
#define N cout << "NO\n";

void solve(){
    ll n,m; cin>>n>>m;
    vector<ll> v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    ll mx=*max_element(v.begin(),v.end());
    for(ll i=0;i<m;i++){
        char c; ll p,q;
        cin>>c>>p>>q;
        if(c=='+'){
            if(mx>=p && mx<=q) mx++;
            cout<<mx<<" ";
        }else{
            if(mx>=p && mx<=q) mx--;
            cout<<mx<<" ";
        }
    }
    cout<<endl;
    return;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e7+10;
ll arr[N]; ll pre[N];
#define all(x) (x).begin(), (x).end()
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
       ll n,k; cin>>n>>k;
       while(k--){
          ll a,b,c;
          cin>>a>>b>>c;
          arr[a]+=c;
          arr[b+1]-=c;
       }
       for(int i=1;i<=n;i++){
          pre[i] = pre[i-1]+arr[i];
       }
       ll d = *max_element(pre+1,pre+n);
       cout<<d<<endl;
       return 0;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--) solve();
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
       ll n; cin>>n;
       string s; ll i=1; ll sum = 19;
       if(n==1){
        cout<<"19"<<endl;
       }
       else{
         sum+=9;
         
         if(p==10){
            i++;
            if(i==n){
                cout<<sum<<endl;
            }
         }
       }
       return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()

int solve() {
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    while (k--) {
        ll a, b;
        cin >> a >> b;
        map<char, ll> m;
        for (int i = a - 1; i < b; i++) {
            m[s[i]]++;
        }
        ll odd = 0;
        for (auto &i : m) {
            if (i.second % 2 != 0) {
                odd++;
            }
        }
        if (odd <= 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
int solve(){
     ll n; cin>>n;
     vector<map<ll,ll>>m;
     vector<map<ll,ll>>m1;
     while(n--){
       ll a,b; cin>>a>>b;
       if(b==0){
          m.push_back({a,b});
       }
       else if(b==1){
          m1.push_back({a,b});
       }
     }
     if(m.size()==0 || m1.size()==0){
        cout<<"0"<<endl;
     }
     else{
        ll count = 0;
        for(auto &i : m1){
          for(auto &j : m){
            if(i.first == j.first){
               count+=m.size()-1;
            }
          }
        }
        
     }
     return 0;
}
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
      long long int t;
      cin>>t;
      while(t--){
      solve();
}
       return 0;
}


// module power
#include<bits/stdc++.h>
using namespace std;
int pw(int a,int b,int m){
       if(b==0){
          return (a%m); 
       }
       if(b%2==0){
          int t = pw(a,b/2,m);
          return (1ll*t*t%m);
       }
       else{
         int t = pw(a,(b-1)/2,m);
          t = (1ll*t*t%m); 
         return (1ll*a*t%m);
       }
}
int main(){
     int a,b,m;
     cin>>a>>b>>m;
     cout<<pw(a,b,m)<<endl;
    return 0;
}


// module division
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int pw(int a,int b,int m){
       if(b==0){
          return (a%m); 
       }
       if(b%2==0){
          int t = pw(a,b/2,m);
          return (1ll*t*t%m);
       }
       else{
         int t = pw(a,(b-1)/2,m);
          t = (1ll*t*t%m); 
         return (1ll*a*t%m);
       }
}
int main(){
     ll a,b,m;
     cin>>a>>b>>m; // this will work only in the time when m is a prime number;
     ll res1 = (a/b)%m;
     a = a%m;
     ll inv_b = pw(b,m-2,m); // fermets little theorem
     ll res2 = a*inv_b%m;
     cout<<res1<<" "<<res2<<endl;
    return 0;
}


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
       int num = 7;
       int count = __builtin_popcount(num);// this is for how many 1's in the binary digit for int
       cout<<count<<endl;
       return 0;
}


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
       ll num;
       cin>>num;
       ll count = __builtin_popcountll(num);// this is for how many 1's in the binary digit for long long int
       cout<<count<<endl;
       return 0;
}



#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
       string s; cin>>s;
       sort(s.begin(),s.end());// important
       do{
          cout<<s<<endl;
       } while(next_permutation(s.begin(),s.end()));// next permutation in stl
       return 0;
}

// this is the question where i felt uneasy
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ll n;
    cin >> n;
    vector<string>s(n); for(auto &i : s) cin>>i; 
    map<char,ll>m;
    for(int i=0;i<n;i++){
        m[s[i][0]]++;
    }
    int ans = 0;
    for (auto &i : m) {
            int k1 = i.second / 2;
            int k2 = i.second - k1;
            ans += (k1 * (k1 - 1)) / 2 + (k2 * (k2 - 1)) / 2;
    }
    cout << ans << endl;
    return 0;
}


// now all about hashing and prefix sum
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e7+10;
ll pre[N];
ll v[N];
#define all(x) (x).begin(), (x).end()
int solve(){
     ll n;cin>>n;
     cout<<pre[n]<<endl;
     return 0;
}
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
      ll n; cin>>n;
      ll v[n+1];
      for(int i=1;i<=n;i++){
         cin>>v[i];
      }
      for(int i=1;i<=n;i++){
          pre[v[i]]++;
      }
      ll t; cin>>t;
      while(t--){
      solve();
}
       return 0;
}

//for character hash array
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
const int N = 1e7+10;
ll pre[N];
int solve(){
     char ch; cin>>ch;
     cout<<pre[ch-'a']<<endl;
     return 0;
}
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
       ll n; cin>>n;
       string s; cin>>s;
       for(int i=0;i<n;i++){
          pre[s[i]-'a']++;
       }
       ll t; cin>>t;
       while(t--){
        solve();
       }
       return 0;
}


// using map for long long int
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
const int N = 1e7+10;
ll hash[N];
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
       ll n; cin>>n;
       ll arr[n];
       map<ll,ll>m;
       for(int i=0;i<n;i++){
          cin>>arr[i];
          m[arr[i]]++;
       }
       ll t;
       cin>>t;
       while(t--){
          ll num; cin>>num;
          cout<<m[num]<<endl;
       }
       return 0;
}



#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
const int N = 1e7+10;
ll hash[N];
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
       ll n; cin>>n;
       ll arr[n];
       unordered_map<ll,ll>m;
       for(int i=0;i<n;i++){
          cin>>arr[i];
          m[arr[i]]++;
       }
       ll t;
       cin>>t;
       while(t--){
          ll num; cin>>num;
          cout<<m[num]<<endl;
       }
       return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
const int N = 1e7+10;
ll hash[N];
ll n,cows;
ll pos[N];
bool repcow(int mindis){
     ll last_pos = -1;
     ll cow_ct = cows;
     for(int i=0;i<n;i++){
         if(pos[i]-last_pos>=mindis || last_pos==-1){
            cow_ct--;
            last_pos = pos[i];
         }
         if(cow_ct==0) break;
     }
     if(cow_ct==0) return true;
     return false;
}
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
      long long int t;
      cin>>t;
      while(t--){
      cin>>n>>cows;
      for(int i=0;i<n;i++){
          cin>>pos[i];
      }
      sort(pos,pos+n);
      ll lo = 0, hi = 1000000000, mid;
      while(hi-lo>1){
         mid = (hi+lo)/2;
         if(repcow(mid)){
            lo = mid;
         }
         else{
            hi = mid-1;            
         }
      }
      if(repcow(hi)){
        cout<<hi<<endl;
      }
      else{
        cout<<lo<<endl;
      }
}
       return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
const int N = 1e5+10;
const int M = 1e9+10;
ll fact[N];
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
       fact[0] = 1; fact[1] = 1;
       for(int i=2;i<N;i++){
            fact[i] = (fact[i-1]*i)%M;
          }
      long long int t;
      cin>>t;
      while(t--){
         ll n; cin>>n;
         cout<<fact[n]<<endl;
      }
       return 0;
}


//  Super short cutm in case of hasing
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
const int N = 1e7+10;
ll has[N];
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
       ll n; cin>>n;
       for(int i=1;i<=n;i++){
           cin>>has[i];
           has[i]+=has[i-1];
       }
       ll p; cin>>p;
       while(p--){
          ll l,r; cin>>l>>r;
          cout<<has[r]-has[l-1]<<endl;
       }
       return 0;
}

// gcd using pre computation technique
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
const int N = 1e3+10;
int arr[N][N];
ll has[N][N];
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
       ll n; cin>>n;
       for(int i=1;i<=n;i++){
           for(int j=1;j<=n;j++){
               cin>>arr[i][j];
               has[i][j] = arr[i][j]+has[i-1][j]+has[i][j-1]-has[i-1][j-1];
           }
       }
       ll t; cin>>t;
       while(t--){
           ll a,b,c,d;
           cin>>a>>b>>c>>d;
           ll result = has[c][d]-has[a-1][d]-has[c][b-1]+has[a-1][b-1];
           cout<<result<<endl;
       }
       return 0;
}
1
3 3  
2 6 9
1 1
2 2
2 3


// pre computation at its best
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
const int N = 1e5+10;
ll has[N];
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
       ll n,q; cin>>n>>q;
       while(q--){
         ll a,b,c;
         cin>>a>>b>>c;
         has[a]+=c;
         has[b+1]-=c;
       }
       for(int i=1;i<=n;i++){
          has[i]+=has[i-1];
       }
       for(int i=1;i<=n;i++){
         cout<<has[i]<<" ";
       }
       cout<<endl;
       return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int l = 0, r = 0, max_len = 0;
    map<int, int> freq;
    while (r < n) {
        freq[a[r]]++;
        while (freq.rbegin()->first - freq.begin()->first > 1) {
            freq[a[l]]--;
            if (freq[a[l]] == 0) {
                freq.erase(a[l]);
            }
            l++;
        }
        max_len = max(max_len, r - l + 1);
        r++;
    }
    cout << max_len << endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
const int N = 1e7+10;
ll pre[N];
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
       ll n; cin>>n;
       for(int i=1;i<=n;i++){
          cin>>pre[i];
          pre[i]+=pre[i-1];
       }
       ll maxi = INT_MIN;
       for(int i=1;i<=n;i++){
          ll sum = 0;
           for(int j=0;j<i;j++){
              sum = pre[i] - pre[j];
              maxi = max(maxi,sum);
           }
       }
       cout<<maxi<<endl;
       return 0;
}
8
-2 -3 4 -1 -2 1 5 -3


// kadans algorithm
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
const int N = 1e7+10;
ll pre[N];
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
       ll n; cin>>n;
       vector<ll>v(n); for(auto &i : v) cin>>i;
       ll sum = 0; ll maxi = INT_MIN;ll ansstart = -1, ansend = -1;ll start;
       for(int i=0;i<n;i++){
           if(sum==0){
              start = i;
           }
           sum+=v[i];
            if(sum>maxi){
              maxi = sum;
              ansstart = start; ansend = i;
           }
           else if(sum<0){
             sum=0;
           }
       }
       ll q;
       if(maxi==INT_MIN){
          maxi = v[0];
         for(int i=1;i<n;i++){
            if(maxi<v[i]){
                maxi = v[i];
                q = i;
            }
         }
         cout<<"Start: "<<q<<" "<<"End: "<<q<<endl;
         cout<<maxi<<endl;
       }
       else{
          cout<<"Start: "<<ansstart<<" "<<"End: "<<ansend<<endl;
          cout<<maxi<<endl;
       }
       return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
const int N = 1e7+10;
ll pre[N];
int solve(){
    ll n;
    cin >> n;
    ll a[n+1];
    for(int i = 1;i <= n;i++){
        cin >> a[i];
    }
    sort(a + 1 , a + 1 + n);
    ll l = 1;
    ll ans = 0;
    for(int i = 1;i <= n;i++){
        if(a[i] < l)continue;
        if(a[i] >= l){
            ans += (a[i] - l);
            l++;
        }
    }
    cout << ans << endl;
    return 0;
}
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
      ll t;
      cin>>t;
      while(t--){
      solve();
}
       return 0;
}


// minimum lcm , number theory
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
const int N = 1e7+10;
ll pre[N];
int solve(){
     ll n; cin>>n; ll ans = 1;
     for(int i=2;i*i<=n;i++){
         if(n%i==0){
            ans = (n/i);
            break;
         }
     }
     cout<<ans<<" "<<n-ans<<endl;
     return 0;
}
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
      ll t;
      cin>>t;
      while(t--){
      solve();
}
       return 0;
}

//  combination calculation in shortcut
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n; cin>>n;
    n = n-1;ll result = 1;
    for(ll i = 1;i<=11;i++){
        result*=n;
        n--;
        result/=i;
    }
    cout<<result<<endl;
   return 0;
}



//  new thing
      memset(arr,0,sizeof(arr)); 
      it is used to set all the value of index 0 ;



// two pointer
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
const int N = 1e5+10;
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
       ll n,x; cin>>n>>x;
       vector<pair<ll,ll>>v;
       for(ll i=0;i<n;i++){
         ll p;
         cin>>p;
         v.push_back({p,i+1});
       }
       sort(v.begin(),v.end());
       int lo=0,hi=v.size()-1;
        while(lo<hi){
        int sum=v[lo].first+v[hi].first;
        if(sum==x)
        {
          cout<<v[lo].second<<' '<<v[hi].second<<endl;
          return 0;
        }
        if(sum>x)
        hi--;
        else lo++;
       }
       cout<<"-1"<<endl;
       return 0;
}



#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
const int N = 1e5+10;
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
       ll n,a,b,c; cin>>n>>a>>b>>c;
       if((a+b+c)==n){
            cout<<"3"<<endl;
       }
       else if((a+b)==n || (b+c)==n || (c+a)==n){
            cout<<"2"<<endl;
       }
       else if(a>=n && b>=n && c>=n){
            cout<<"1"<<endl;
       }
       else{
        cout<<n<<endl;
       }
       return 0;
}


#include <bits/stdc++.h>
using namespace std;
 
int n, m[100008];
pair<int, int> a[100008];
 
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
 
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> a[i].first >> a[i].second, m[a[i].first]++;
    for(int i=0; i<n; i++)
        cout << n - 1 + m[a[i].second] << ' ' << n - 1 - m[a[i].second] << '\n';
}

// Longest subarray sum with the value K;
this works for positive, negative and 0s
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
const int N = 1e5+10;
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
       ll n,k; cin>>n>>k;
       ll arr[n];
       for(ll i=0;i<n;i++){
           cin>>arr[i];
       }      
       ll maxlength = 0; map<ll,ll>m; ll sum = 0;
       for(ll i=0;i<n;i++){
          sum+=arr[i];
          if(sum==k){
             maxlength = max(maxlength,i+1);
          }
          ll rem = sum - k;
          if(m.find(rem)!=m.end()){
             ll length = i - m[rem];
             maxlength = max(maxlength,length);
          }
          if(m.find(sum)==m.end()){
             m[sum] = i;
          }
       }
       cout<<maxlength<<endl;
       return 0;
}


//  most optimal of that 
only work for positives and 0s
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
const int N = 1e5+10;
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
       ll n,k; cin>>n>>k;
       ll arr[n];
       for(ll i=0;i<n;i++){
           cin>>arr[i];
       }      
       ll left = 0, right = 0;
       ll sum = arr[0]; ll maxlen= 0;
       while(right<n){
          while(left<=right && sum>k){
            sum-=arr[left];
             left++;
          }
         if(sum==k){
            maxlen = max(maxlen,right-left+1);
         }
         right++;
         if(right<n){
            sum+=arr[right];
         }
       }
       cout<<maxlen<<endl;
       return 0;
}


// find two elements index so that there sum will be k from the array
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
const int N = 1e5+10;
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
       ll n,k; cin>>n>>k;
       ll arr[n];
       for(ll i=0;i<n;i++){
           cin>>arr[i];
       }      
       map<ll,ll>m;
       for(int i=0;i<n;i++){
          ll a = arr[i];
          ll more = k - a;
          if(m.find(more)!=m.end()){
             cout<<"YES"<<endl;
             cout<<m[more]<<" "<<i<<endl;
             return 0;
          }
          m[a] = i;
       }
       cout<<"NO"<<endl;
       return 0;
}

most optimal solution of that

























// 
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
const int N = 1e5+10;
int solve(){
    ll n,m,k;
    cin>>n>>m>>k;
    if(m==0){
      cout<<"0"<<endl;
      return 0;
    }
    ll p = n/k;
    if(p>=m){
      cout<<m<<endl;
    }
    else{
      ll d = m - p;
      ll x = ceil(double(d)/((double)k-1.0));
      cout<<p - x<<endl;
    }
     return 0;
}
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
      ll t;
      cin>>t;
      while(t--){
      solve();
}
       return 0;
}


//  longest sub sequence with distinct elements
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
    }
    map<ll, ll> m; 
    ll j = 0;     
    ll ans = 0;  
    for (ll i = 0; i < n; i++) {
        if (m.find(v[i]) != m.end() && m[v[i]] >= j) {
            j = m[v[i]] + 1;
        }
        m[v[i]] = i;
        ans = max(ans, i - j + 1);
    }
    cout << ans << endl;
    return 0;
}

//  good to know
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
const int N = 1e5+10;
int solve(){
     ll n,k; cin>>n>>k;
     string s; cin>>s; ll ans = INT_MAX;
     vector<ll>pr(n+1);
     for(int i=1;i<=n;i++){
        pr[i] = pr[i-1]+(s[i-1]=='W'?1:0);
     }
     for(int i=0;i<=(n-k);i++){
       ans = min(pr[i+k]-pr[i],ans);
     }
     cout<<ans<<endl;
     return 0;
}
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
      ll t;
      cin>>t;
      while(t--){
      solve();
}
       return 0;
}


// minimum product
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
const int N = 1e5+10;
ll check(ll a,ll b,ll x,ll y,ll n){
     ll d1 = a - x;
     ll d2 = b - y;
     ll p =min(n,d1);
     a-=p;
     n-=p;
     ll q =min(n,d2);
     b-=q;
     n-=q;
     return (a*b);
}
int solve(){
     ll a,b,x,y,n;
     cin>>a>>b>>x>>y>>n;
     ll ans = min(check(a,b,x,y,n),check(b,a,y,x,n));
     cout<<ans<<endl;
     return 0;
}
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
      ll t;
      cin>>t;
      while(t--){
      solve();
}
       return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
const int N = 1e5+10;
int solve(){
     ll n; cin>>n;
     ll x = n/2;
     ll y = n-x;
     string s = to_string(x);
     string t = to_string(y);
     ll count = 0;ll count1 = 0;
     for(int i=0;i<s.size();i++){
         count+=s[i]+'0';
     }
     for(int j=0;j<t.size();j++){
         count1+=t[j]+'0';
     }
     if(abs(count-count1)<=1){
        cout<<y<<" "<<x<<endl;
     }
     else{
        string r = to_string(y);
        string d = to_string(x);
        ll i = 1;
        ll k = min(r.size(),d.size());
        while(k--){
           if(d[s.size()-i]=='9'){
            if(i%2!=0){
             r[r.size()-i]='4';
             d[d.size()-i]='5';
            }
            else{
             r[r.size()-i]='5';
             d[d.size()-i]='4';
            }
           }
           else{
             break;
           }
           i++;
        }
        y = stoi(r);
        x = stoi(d);
        cout<<y<<" "<<x<<endl;
     }
     return 0;
}
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
      ll t;
      cin>>t;
      while(t--){
      solve();
}
       return 0;
}



#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
const int N = 1e5+10;
int solve(){
    ll n; cin>>n;
    if(n%2==0){
        cout<<"NO"<<endl;
        return 0;
    }
    cout<<"YES"<<endl;
    ll x = 0;
    for(ll i=n;i>=1;i-=2){
        cout<<++x<<" "<<n+i<<endl;
    }
    for(ll i=n-1;i>=1;i-=2){
        cout<<++x<<" "<<n+i<<endl;
    }
    return 0;
}
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
      ll t;
      cin>>t;
      while(t--){
      solve();
}
       return 0;
}

 vector<int> subarraySum(vector<int> arr, int n, long long s) {
        int flag = 0;
        if(s==0){
            for(int i=0;i<n;i++){
               if(arr[i]==0){
                   flag=1;
                   return {i+1,i+1};
               }
            }
            if(flag==0){
                return {-1};
            }
        }
        long long right = 0, left = 0;
        long long sum = arr[0];
        if(sum==s){
            return{1,1};
        }
        while(right<n-1){
            if(sum+arr[right+1]<=s){
                sum+=arr[right+1];
                right++;
            }
            else{
                sum-=arr[left];
                left++;
            }
            if(sum==s){
              return {left+1,right+1};
            }
        }
        return{-1};
    }

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define yes cout <<"YES\n";
#define no cout <<"NO\n";
const int N = 1e5+10;
int solve(){
     ll n,q;
     cin>>n>>q;
     vector<ll>v(n),v1(q);
     for(auto &i : v){
        cin>>i;
     }
     map<ll,ll>m;
     for(int i=0;i<n;i++){
        ll x = (i+1)*(n-i)-1;
        m[x]++;
        if(i>0){
          ll y = i*(n-i);
          m[y]+=(v[i]-v[i-1]-1);
        }
     }
     while(q--){
        ll r; cin>>r;
        cout<<m[r]<<" ";
     }
     cout<<endl;
     return 0;
}
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
      ll t;
      cin>>t;
      while(t--){
      solve();
}
       return 0;
}


// recursion
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define yes cout <<"YES\n";
#define no cout <<"NO\n";
const int N = 1e5+10;
void solve(ll idx,vector<ll>&v,ll arr[],ll n){
         if(idx>=n){
            for(auto &i:v){
              cout<<i<<" ";
            }
            if(v.size()==0){
              cout<<"{}";
            }
            cout<<endl;
            return;
         }
         v.push_back(arr[idx]);
         solve(idx+1,v,arr,n);
         v.pop_back();
         solve(idx+1,v,arr,n);
}
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
       ll arr[] = {1,2,3};
       ll n =3;
       vector<ll>v;
       solve(0,v,arr,n);
       return 0;
}


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define yes cout <<"YES\n";
#define no cout <<"NO\n";
const int N = 1e5+10;
void solve(ll x,vector<ll>&v,ll s,ll sum,ll arr[],ll n){
      if(x>=n){
        if(sum==s){
           for(auto &i : v){
              cout<<i<<" ";
           }
           cout<<endl;
        }
        return;
      }
      v.push_back(arr[x]);
      s+=arr[x];
      solve(x+1,v,s,sum,arr,n);
      s-=arr[x];
      v.pop_back();
      solve(x+1,v,s,sum,arr,n); 
}
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
       ll arr[] = {1,2,1};
       ll n = 3;
       ll sum = 2;
       ll s=0;
       vector<ll>v;
       solve(0,v,0,sum,arr,n);
       return 0;
}

// prefix sum  in c++  short technique
// partial_sum(r.begin(), r.end(), r.begin());
// partial_sum(b.begin(), b.end(), b.begin());

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define yes cout <<"YES\n";
#define no cout <<"NO\n";
const int N = 1e5+10;
int solve(){
     ll n;
     cin>>n;
     vector<ll>v(n);
     for(auto &i : v){
        cin>>i;
     }
     vector<ll>v1;
     v1 = v;
     sort(all(v1));
     if(v==v1){
        cout<<"0"<<endl;
        return 0;
     }
     ll ans= 1; ll i;
      for(i=n-1;i>=1;i--){
        if(v[i]<=v[i-1]){
          ans++;
        }
        else{
          break;
        }
      }
      for(ll j = i;j>=1;j--){
       if(v[j]>=v[j-1]){
          ans++;
       }
       else{
         break;
       }
      }
     cout<<n-ans<<endl;
     return 0;
}
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
      ll t;
      cin>>t;
      while(t--){
      solve();
}
       return 0;
}

#include<iostream>
using namespace std;
struct node{
    int data;
    struct node* link;
};
void noofnodes(struct node* head){
    struct node* ptr;
    if(head==NULL){
        cout<<"The node is empty";
    }
    ptr = head;
    while(ptr!=NULL){
        cout<<ptr->data<<endl;
        ptr = ptr->link;
    }
}
int main(){
    struct node* head = (struct node*)malloc(sizeof(struct node));
    head->data = 34;
    head->link = NULL;
    struct node* current = (struct node*)malloc(sizeof(struct node));
    current->data = 56;
    current->link = NULL;
    head->link = current;
    current = (struct node*)malloc(sizeof(struct node));
    current->data = 90;
    current->link = NULL;
    head->link->link = current;
    noofnodes(head);
    return 0;
}
///////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;
struct node{
    int data;
    struct node* link;
};
void add_at_the_end(struct node* head,int data){
    struct node* ptr;
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;
    ptr = head;
    while(ptr->link!=NULL){
        ptr = ptr->link;
    }
    ptr->link = temp;
    int count = 0;
    struct node* ptr1 = head;
    while(ptr1!=NULL){
        cout<<ptr1->data<<endl;
        ptr1 = ptr1->link;
    }
}
int main(){
    struct node* head = (struct node*)malloc(sizeof(struct node));
    head->data = 34;
    head->link = NULL;
    struct node* current = (struct node*)malloc(sizeof(struct node));
    current->data = 56;
    current->link = NULL;
    head->link = current;
    current = (struct node*)malloc(sizeof(struct node));
    current->data = 90;
    current->link = NULL;
    head->link->link = current;
    add_at_the_end(head,86);
    return 0;
}


/////////////////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;
struct ll{
    struct node{
        int data;
        struct node* link; 
    };
    struct node* head = NULL;
    struct node* tail = NULL;
    void add_node(int value){
         struct node* temp = (struct node*)malloc(sizeof(struct node));
         temp->data = value;
         temp->link = NULL;
         if(head == NULL){
             head = temp;
             tail = temp;
         }
         else{
            tail->link = temp;
            tail = temp;
         }
    }
    void printvalue(){
        struct node* ptr = head;
        while(ptr!=NULL){
           cout<<ptr->data<<endl;
           ptr = ptr->link;
        }
    }
    void freelist(){
        struct node* ptr1 = head;
        while(ptr1!=NULL){
           struct node* next = ptr1->link;
           free(ptr1);
           ptr1 = next;
        }
        head = tail = NULL;
    }
};
int main(){
    ll list;
    list.add_node(89);
    list.add_node(90);
    list.add_node(91);
    list.printvalue();
    list.freelist();
    return 0;
}



// insert at first
#include<iostream>
using namespace std;
struct ll{
    struct node{
        int data;
        struct node* link; 
    };
    struct node* head = NULL;
    struct node* tail = NULL;
    void add_node(int value){
         struct node* temp = (struct node*)malloc(sizeof(struct node));
         temp->data = value;
         temp->link = NULL;
         if(head == NULL){
             head = temp;
             tail = temp;
         }
         else{
            tail->link = temp;
            tail = temp;
         }
    }
    void insert_first(int value){
         struct node* temp1 = (struct node*)malloc(sizeof(struct node));
         temp1->data = value;
         temp1->link = NULL;
         if(head==NULL){
            head = temp1;
            tail = temp1;
         }
         else{
            temp1->link = head;
            head = temp1;
         }
    }
    void printnode(){
        struct node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<endl;
            temp = temp->link;
        }
    }
    void freelist(){
        struct node* ptr1 = head;
        while(ptr1!=NULL){
           struct node* next = ptr1->link;
           free(ptr1);
           ptr1 = next;
        }
        head = tail = NULL;
    }
};
int main(){
    ll list;
    list.add_node(89);
    list.add_node(90);
    list.add_node(91);
    list.insert_first(94);
    list.printnode();
    list.freelist();
    return 0;
}



// insert at last
#include<iostream>
using namespace std;
struct ll{
    struct node{
        int data;
        struct node* link; 
    };
    struct node* head = NULL;
    struct node* tail = NULL;
    void add_node(int value){
         struct node* temp = (struct node*)malloc(sizeof(struct node));
         temp->data = value;
         temp->link = NULL;
         if(head == NULL){
             head = temp;
             tail = temp;
         }
         else{
            tail->link = temp;
            tail = temp;
         }
    }
    void insert_last(int value){
         struct node* temp1 = (struct node*)malloc(sizeof(struct node));
         temp1->data = value;
         temp1->link = NULL;
         if(head==NULL){
            head = temp1;
            tail = temp1;
         }
         else{
            tail->link = temp1;
            tail = temp1;
         }
    }
    void printnode(){
        struct node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<endl;
            temp = temp->link;
        }
    }
    void freelist(){
        struct node* ptr1 = head;
        while(ptr1!=NULL){
           struct node* next = ptr1->link;
           free(ptr1);
           ptr1 = next;
        }
        head = tail = NULL;
    }
};
int main(){
    ll list;
    list.add_node(89);
    list.add_node(90);
    list.add_node(91);
    list.insert_last(94);
    list.printnode();
    list.freelist();
    return 0;
}


// only traverse
#include<iostream>
using namespace std;
struct ll{
    struct node{
        int data;
        struct node* link; 
    };
    struct node* head = NULL;
    struct node* tail = NULL;
    void add_node(int value){
         struct node* temp = (struct node*)malloc(sizeof(struct node));
         temp->data = value;
         temp->link = NULL;
         if(head == NULL){
             head = temp;
             tail = temp;
         }
         else{
            tail->link = temp;
            tail = temp;
         }
    }
    void printnode(){
        struct node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<endl;
            temp = temp->link;
        }
    }
    void freelist(){
        struct node* ptr1 = head;
        while(ptr1!=NULL){
           struct node* next = ptr1->link;
           free(ptr1);
           ptr1 = next;
        }
        head = tail = NULL;
    }
};
int main(){
    ll list;
    list.add_node(89);
    list.add_node(90);
    list.add_node(91);
    list.printnode();
    list.freelist();
    return 0;
}
// delete first  element
#include<iostream>
using namespace std;
struct ll{
    struct node{
        int data;
        struct node* link; 
    };
    struct node* head = NULL;
    struct node* tail = NULL;
    void add_node(int value){
         struct node* temp = (struct node*)malloc(sizeof(struct node));
         temp->data = value;
         temp->link = NULL;
         if(head == NULL){
             head = temp;
             tail = temp;
         }
         else{
            tail->link = temp;
            tail = temp;
         }
    }
    void delete_first(){
        if(head==NULL){
            return;
        }
        else if(head==tail){
            struct node* temp1 = head;
            head = NULL;
            tail = NULL;
            free(temp1);
        }
        else{
            struct node* temp2 = head;
            head = head->link;
            free(temp2);
        }
    }
    void printnode(){
        struct node* temp = head;
        while(temp!=NULL){
            node* ptr = temp->link;
            cout<<temp->data<<endl;
            delete temp;
            temp = ptr;
        }
    }
};
int main(){
    ll list;
    list.add_node(89);
    list.add_node(90);
    list.add_node(91);
    list.delete_first();
    list.printnode();
    return 0;
}

// delete last element

#include<iostream>
using namespace std;
struct ll{
    struct node{
        int data;
        struct node* link; 
    };
    struct node* head = NULL;
    struct node* tail = NULL;
    void add_node(int value){
        struct node* temp = (struct node*)malloc(sizeof(struct node));
        temp->data = value;
        temp->link = NULL;
        if(head==NULL){
            head = temp;
            tail = temp;
        }
        else{
            tail->link = temp;
            tail = temp;
        }
    }
    void delete_last(){
        struct node* ptr1 = tail;
        struct node* ptr2 = head;
        if(head==NULL){
            return;
        }
        else if(head==tail){
            node* temp3 = head;
            delete(temp3);
            head = NULL;
            tail = NULL;
            return;
        }
        else{
          while(ptr2->link->link!=NULL){
               ptr2 = ptr2->link;
          }
          ptr2->link =  NULL;
          tail = ptr2;
          free(ptr1);
        }
    }
    void print(){
        struct node* ptr = head;
        while(ptr!=NULL){
            cout<<ptr->data<<endl;
            ptr = ptr->link;
        }
    }
    void free_memory(){
        struct node* temp1 = head;
        while(temp1!=NULL){
           struct node* next = temp1->link;
           free(temp1);
           temp1 = next;
        }
        head = tail = NULL;
    }
};
int main(){
    ll list;
    list.add_node(37);
    list.add_node(38);
    list.add_node(39);
    list.delete_last();
    list.print();
    list.free_memory();
    return 0;
}

// random element cut down
#include<iostream>
using namespace std;
struct ll {
    struct node {
        int data;
        struct node* link; 
    };
    struct node* head = NULL;
    struct node* tail = NULL;
    void add_node(int value) {
        struct node* temp = (struct node*)malloc(sizeof(struct node));
        temp->data = value;
        temp->link = NULL;
        if(head == NULL) {
            head = temp;
            tail = temp;
        } 
        else {
            tail->link = temp;
            tail = temp;
        }
    }
    void delete_element(int value) {
        if(head == NULL) {
            return;
        }
        if(head->data == value) {
            struct node* temp = head;
            head = head->link;
            if(head == NULL) {
                tail = NULL;  
            }
            free(temp);
            return;
        }
        struct node* ptr2 = head;
        while(ptr2->link != NULL) {
            if(ptr2->link->data == value) {
                struct node* temp = ptr2->link;
                ptr2->link = ptr2->link->link;
                if(temp == tail) {
                    ptr2->link = NULL;
                    tail = ptr2;  
                }
                free(temp);
                return;
            }
            ptr2 = ptr2->link;
        }
    }
    void print() {
        struct node* ptr = head;
        while(ptr != NULL) {
            cout << ptr->data << endl;
            ptr = ptr->link;
        }
    }
    void free_memory() {
        struct node* temp1 = head;
        while(temp1 != NULL) {
            struct node* next = temp1->link;
            free(temp1);
            temp1 = next;
        }
        head = tail = NULL;
    }
};
int main() {
    int x;
    cin >> x;
    ll list;
    list.add_node(37);
    list.add_node(38);
    list.add_node(39);
    list.delete_element(x);
    list.print();
    list.free_memory();
    return 0;
}

//  insert at first in doubly linked list

#include<iostream>
using namespace std;
struct ll {
    struct node {
        int data;
        struct node* prev;
        struct node* next; 
    };
    struct node* head = NULL;
    struct node* tail = NULL;
    void add_node(int value) {
        struct node* temp = (struct node*)malloc(sizeof(struct node));
        temp->prev = NULL;
        temp->data = value;
        temp->next = NULL;
        if(head == NULL) {
            head = temp;
            tail = temp;
        } 
        else {
            tail->next = temp;
            tail = temp;
        }
    }
    void add_first(int value){
        struct node* temp = (struct node*)malloc(sizeof(struct node));
        temp->prev = NULL;
        temp->data = value;
        temp->next = NULL;
        if(head==NULL){
           head = temp;
           tail = temp;
        }
        else{
           temp->next = head;
           head->prev = temp;
           head = head->prev;
        }
    }
    void print() {
        struct node* ptr = head;
        while(ptr != NULL) {
            cout << ptr->data << endl;
            ptr = ptr->next;
        }
    }
    void free_memory() {
        struct node* temp1 = head;
        while(temp1 != NULL) {
            struct node* next = temp1->next;
            free(temp1);
            temp1 = next;
        }
        head = tail = NULL;
    }
};
int main() {
    // int x;
    // cin >> x;
    ll list;
    list.add_node(37);
    list.add_node(38);
    list.add_node(39);
    list.add_first(55);
    list.print();
    list.free_memory();
    return 0;
}

// insert at last in doubly linked list
#include<iostream>
using namespace std;
struct ll {
    struct node {
        int data;
        struct node* prev;
        struct node* next; 
    };
    struct node* head = NULL;
    struct node* tail = NULL;
    void add_node(int value) {
        struct node* temp = (struct node*)malloc(sizeof(struct node));
        temp->prev = NULL;
        temp->data = value;
        temp->next = NULL;
        if(head == NULL) {
            head = temp;
            tail = temp;
        } 
        else {
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
    }
    void add_last(int value){
        struct node* temp = (struct node*)malloc(sizeof(struct node));
        temp->prev = NULL;
        temp->data = value;
        temp->next = NULL;
        if(head==NULL){
           head = temp;
           tail = temp;
        }
        else{
           tail->next = temp;
           temp->prev = tail;
           tail = tail->prev;
        }
    }
    void print() {
        struct node* ptr = head;
        while(ptr != NULL) {
            cout << ptr->data << endl;
            ptr = ptr->next;
        }
    }
    void free_memory() {
        struct node* temp1 = head;
        while(temp1 != NULL) {
            struct node* next = temp1->next;
            free(temp1);
            temp1 = next;
        }
        head = tail = NULL;
    }
};
int main() {
    // int x;
    // cin >> x;
    ll list;
    list.add_node(37);
    list.add_node(38);
    list.add_node(39);
    list.add_last(55);
    list.print();
    list.free_memory();
    return 0;
}



// using doubly linked list how to cut down last element
#include<iostream>
using namespace std;
struct ll {
    struct node {
        int data;
        struct node* prev;
        struct node* next; 
    };
    struct node* head = NULL;
    struct node* tail = NULL;
    void add_node(int value) {
        struct node* temp = (struct node*)malloc(sizeof(struct node));
        temp->prev = NULL;
        temp->data = value;
        temp->next = NULL;
        if(head == NULL) {
            head = temp;
            tail = temp;
        } 
        else {
            tail->next = temp;
            temp->prev = tail;
            tail = tail->next;
        }
    }
    void delete_last(){
        struct node* temp = tail;
        if(head==NULL){
           return;
        }
        else if(head == tail){
           head = NULL;
           tail = NULL;
        }
        else{
           tail = tail->prev;
           tail->next = NULL;
        }
        delete(temp);
    }
    void print() {
        struct node* ptr = head;
        while(ptr != NULL) {
            cout << ptr->data << endl;
            ptr = ptr->next;
        }
    }
    void free_memory() {
        struct node* temp1 = head;
        while(temp1 != NULL) {
            struct node* next = temp1->next;
            free(temp1);
            temp1 = next;
        }
        head = tail = NULL;
    }
};
int main() {
    // int x;
    // cin >> x;
    ll list;
    list.add_node(37);
    list.add_node(38);
    list.add_node(39);
    list.delete_last();
    list.print();
    list.free_memory();
    return 0;
}


// #include<iostream>
// using namespace std;
// struct ll{
//     struct node{
//       int data;
//       struct node* link;
//     };
//     node* head = NULL;
//     node* tail = NULL;
//     void add_node(int x){
//        node* temp = (struct node*)malloc(sizeof(struct node));
//        temp->data = x;
//        temp->link = NULL;
//        if(head == NULL){
//          head = temp;
//          tail = temp;
//        }
//        else{
//          tail->link = temp;
//          tail = temp;
//        }
//     }
//     void insert_first(int p){
//        node* ptr1 = (struct node*)malloc(sizeof(struct node));
//        ptr1->data = p;
//        ptr1->link = NULL;
//        if(head == NULL){
//          head = ptr1;
//          tail = ptr1;
//        }
//        else{
//           ptr1->link = head;
//           head = ptr1;
//        }
//     }
//     void print_all(){
//        node* ptr = head;
//        while(ptr!=NULL){
//           cout<<ptr->data<<endl;
//           ptr = ptr->link;
//        }
//     }
//     void free_memory(){
//         node* ptr2 = head;
//         while(ptr2!=NULL){
//            node* next = ptr2->link;
//            free(ptr2);
//            ptr2 = next;
//         }
//         head = tail = NULL;
//     }
// };
// int main(){
//     ll list;
//     int t;
//     cin>>t;
//     while(t--){
//         int x; cin>>x;
//         list.add_node(x);
//     }
//     int p;
//     cin>>p;
//     list.insert_first(p);
//     list.print_all();
//     list.free_memory();
//     return 0;
// }

// #include<iostream>
// using namespace std;
// struct ll{
//     struct node{
//       int data;
//       struct node* link;
//     };
//     node* head = NULL;
//     node* tail = NULL;
//     void add_node(int x){
//        node* temp = (struct node*)malloc(sizeof(struct node));
//        temp->data = x;
//        temp->link = NULL;
//        if(head == NULL){
//          head = temp;
//          tail = temp;
//        }
//        else{
//          tail->link = temp;
//          tail = temp;
//        }
//     }
//     void delete_first(){
//         if(head == NULL){
//            return ;
//         }
//         else if(head==tail){
//           node* temp = head;
//           head = NULL;
//           tail = NULL;
//           free(temp);
//           return;
//         }
//         else{
//           node* temp = head;
//           head = head->link;
//           free(temp);
//           return;
//         }
//     }
//     void print_all(){
//        node* ptr = head;
//        while(ptr!=NULL){
//           cout<<ptr->data<<endl;
//           ptr = ptr->link;
//        }
//     }
//     void free_memory(){
//         node* ptr1 = head;
//         while(ptr1!=NULL){
//            node* next = ptr1->link;
//            free(ptr1);
//            ptr1 = next;
//         }
//         head = tail = NULL;
//     }
// };
// int main(){
//     ll list;
//     int t;
//     cin>>t;
//     while(t--){
//         int x; cin>>x;
//         list.add_node(x);
//     }
//     list.delete_first();
//     list.print_all();
//     list.free_memory();
//     return 0;
// }

// #include<iostream>
// using namespace std;
// struct ll{
//     struct node{
//       int data;
//       struct node* link;
//     };
//     node* head = NULL;
//     node* tail = NULL;
//     void add_node(int x){
//        node* temp = (struct node*)malloc(sizeof(struct node));
//        temp->data = x;
//        temp->link = NULL;
//        if(head == NULL){
//          head = temp;
//          tail = temp;
//        }
//        else{
//          tail->link = temp;
//          tail = temp;
//        }
//     }
//     void delete_last(){
//         if(head == NULL){
//           return;
//         }
//         else if(head==tail){
//           node* temp = head;
//           head = NULL;
//           tail = NULL;
//           free(temp);
//           return;
//         }
//         else{
//           node* temp = tail;
//           node* ptr1 = head;
//           while(ptr1->link->link!=NULL){
//              ptr1 = ptr1->link;
//           }
//           ptr1->link = NULL;
//           tail = ptr1;
//           free(temp);
//           return;
//         }
//     }
//     void print_all(){
//        node* ptr = head;
//        while(ptr!=NULL){
//           cout<<ptr->data<<endl;
//           ptr = ptr->link;
//        }
//     }
//     void free_memory(){
//         node* ptr1 = head;
//         while(ptr1!=NULL){
//            node* next = ptr1->link;
//            free(ptr1);
//            ptr1 = next;
//         }
//         head = tail = NULL;
//     }
// };
// int main(){
//     ll list;
//     int t;
//     cin>>t;
//     while(t--){
//         int x; cin>>x;
//         list.add_node(x);
//     }
//     list.delete_last();
//     list.print_all();
//     list.free_memory();
//     return 0;
// }


// #include<iostream>
// using namespace std;
// struct ll{
//     struct node{
//       int data;
//       struct node* link;
//     };
//     node* head = NULL;
//     node* tail = NULL;
//     void add_node(int x){
//        node* temp = (struct node*)malloc(sizeof(struct node));
//        temp->data = x;
//        temp->link = NULL;
//        if(head == NULL){
//          head = temp;
//          tail = temp;
//        }
//        else{
//          tail->link = temp;
//          tail = temp;
//        }
//     }
//     void delete_random(int x){
//         if(head == NULL){
//           return;
//         }
//         if(head->data == x){
//           head = head->link;
//           node* temp = head;
//           if(head==NULL){
//              tail = NULL;
//           } 
//           free(temp);
//           return;
//         }
//         node* ptr = head;
//         while(ptr->link!=NULL){
//            if(ptr->link->data ==x){
//               node* ptr1 = ptr->link;
//               ptr->link = ptr->link->link;
//               if(ptr1 ==tail){
//                 ptr->link = NULL;
//                 tail = ptr;
//               }
//               free(ptr1);
//               return;
//            }
//            ptr = ptr->link;
//         }
//     }
//     void print_all(){
//        node* ptr = head;
//        while(ptr!=NULL){
//           cout<<ptr->data<<endl;
//           ptr = ptr->link;
//        }
//     }
//     void free_memory(){
//         node* ptr1 = head;
//         while(ptr1!=NULL){
//            node* next = ptr1->link;
//            free(ptr1);
//            ptr1 = next;
//         }
//         head = tail = NULL;
//     }
// };
// int main(){
//     ll list;
//     int t;
//     cin>>t;
//     while(t--){
//         int x; cin>>x;
//         list.add_node(x);
//     }
//     int l;
//     cin>>l;
//     list.delete_random(l);
//     list.print_all();
//     list.free_memory();
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// #define all(x) (x).begin(), (x).end()
// #define yes cout <<"YES\n";
// #define no cout <<"NO\n";
// const int N = 1e5+10;
// int solve(){
//      string s;
//      cin>>s;
//      stack<char>st;
//      for(int i=0;i<s.size();i++){
//         if(s[i]=='(' || s[i]=='{' || s[i]=='['){
//            st.push(s[i]);
//         }
//         else{
//           if(st.empty()){
//             cout<<"This is not a valid string"<<endl;
//             return 0;
//           }
//           if((st.top()=='(' && s[i]==')') || (st.top()=='{' && s[i]=='}') || (st.top()=='[' && s[i]==']')){
//               st.pop();
//           }
//         }
//      }
//      if(st.empty()){
//         cout<<"This is valid string"<<endl;
//      }
//      else{
//         cout<<"This isnot a valid string"<<endl;
//      }
//      return 0;
// }
// int main()
// {
// ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//       ll t;
//       cin>>t;
//       while(t--){
//       solve();
// }
//        return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// #define all(x) (x).begin(), (x).end()
// #define yes cout <<"YES\n";
// #define no cout <<"NO\n";
// const int N = 1e5+10;
// int solve(){
//      string s; cin>>s;
//      stack<int>st;
//      for(int i=0;i<s.size();i++){
//          if((s[i]>='0' && s[i]<='9')){
//             st.push(s[i]-'0');
//          }
//          else{
//             int result;
//             if(s[i]=='+'){
//                int ch2 = st.top();
//                st.pop();
//                int ch1 = st.top();
//                st.pop();
//                result = ch1 + ch2;
//             }
//             else if(s[i]=='-'){
//                int ch2 = st.top();
//                st.pop();
//                int ch1 = st.top();
//                st.pop();
//                result = ch1 - ch2;
//             }
//             else if(s[i]=='*'){
//                int ch2 = st.top();
//                st.pop();
//                int ch1 = st.top();
//                st.pop();
//                result = ch1 * ch2;
//             }
//             else if(s[i]=='/'){
//                int ch2 = st.top();
//                st.pop();
//                int ch1 = st.top();
//                st.pop();
//                result = ch1 / ch2;
//             }
//             st.push(result);
//          }
//      }
//      cout<<st.top()<<endl;
//      return 0;
// }
// int main()
// {
// ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//       ll t;
//       cin>>t;
//       while(t--){
//       solve();
// }
//        return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// #define all(x) (x).begin(), (x).end()
// #define yes cout <<"YES\n";
// #define no cout <<"NO\n";
// const int N = 1e5+10;
// int solve(){
//      string s;
//      cin>>s;
//      stack<int>st;
//      for(int i=0;i<s.size();i++){
//         if(s[i]>='0' && s[i]<='9'){
//             st.push(s[i]-'0');
//         }
//         else{
//           int z;
//           int y = st.top();
//           st.pop();
//           int x = st.top();
//           st.pop();
//           if(s[i]=='+'){
//             z = x + y;
//           }
//           else if(s[i]=='-'){
//             z = x - y;
//           }
//           else if(s[i]=='*'){
//             z = x * y;
//           }
//           else if(s[i]=='/'){
//             z = x / y;
//           }
//           st.push(z);
//         }
//      }
//      if(st.size()==1){
//         cout<<st.top()<<endl;
//      }
//      else{
//        cout<<"There are something wrong"<<endl;
//      }
//      return 0;
// }
// int main()
// {
// ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//       ll t;
//       cin>>t;
//       while(t--){
//       solve();
// }
//        return 0;
// }

*/

// recursion
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// #define all(x) (x).begin(), (x).end()
// #define yes cout <<"YES\n";
// #define no cout <<"NO\n";
// const int N = 1e5+10;
// void solve(int arr[],vector<int>&v,int n,int ind){
//      if(ind==n){
//         if(v.size()==0){
//             cout<<"{}"<<endl;
//             return;
//         }
//         for(auto &i : v){
//             cout<<i<<" ";
//         }
//         cout<<endl;
//         return;
//      }
//      v.push_back(arr[ind]);
//      solve(arr,v,n,ind+1);
//      v.pop_back();
//      solve(arr,v,n,ind+1);
// }
// int main()
// {
// ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//        int arr[] = {3,1,2};
//        vector<int>v;
//        int n = sizeof(arr)/sizeof(int);
//        solve(arr,v,n,0);
//        return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// #define all(x) (x).begin(), (x).end()
// #define yes cout <<"YES\n";
// #define no cout <<"NO\n";
// const int N = 1e5+10;
// void solve(int arr[],vector<int>&v,int n,int ind){
//      if(ind==n){
//         for(auto &i : v){
//             cout<<i<<" ";
//         }
//         if(v.size()==0){
//             cout<<"{}";
//         }
//         cout<<endl;
//         return;
//      }
//      solve(arr,v,n,ind+1);
//      v.push_back(arr[ind]);
//      solve(arr,v,n,ind+1);
//      v.pop_back();
// }
// int main()
// {
// ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//        int arr[] = {3,1,2};
//        vector<int>v;
//        int n = sizeof(arr)/sizeof(int);
//        solve(arr,v,n,0);
//        return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// #define all(x) (x).begin(), (x).end()
// #define yes cout <<"YES\n";
// #define no cout <<"NO\n";
// const int N = 1e5+10;
// void solve(int arr[],vector<int>&v,int n,int ind,int sum,int p){
//      if(ind==n){
//         if(p == sum){
//            for(auto &i : v){
//              cout<<i<<" ";
//            }
//            cout<<endl;
//         }
//         return;
//      }
//      v.push_back(arr[ind]);
//      p+=arr[ind];
//      solve(arr,v,n,ind+1,sum,p);
//      p-=arr[ind];
//      v.pop_back();
//      solve(arr,v,n,ind+1,sum,p);
// }
// int main()
// {
// ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//        int arr[] = {1,2,1};
//        vector<int>v;
//        int n = sizeof(arr)/sizeof(int);
//        int sum = 2;
//        solve(arr,v,n,0,sum,0);
//        return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// #define all(x) (x).begin(), (x).end()
// #define yes cout <<"YES\n";
// #define no cout <<"NO\n";
// const int N = 1e5+10;
// int solve(int ind,int arr[],int n,int sum){
//      if(ind == n){
//         if(sum==2){
//           return 1;
//         }
//         else{
//           return 0;
//         }
//      }
//      sum+=arr[ind];
//      int l = solve(ind+1,arr,n,sum);
//      sum-=arr[ind];
//      int r = solve(ind+1,arr,n,sum);
//      return l+r;    
// }
// int main()
// {
// ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//        int arr[] = {1,3,1};
//        int n = 3;
//        cout<<solve(0,arr,n,0)<<endl;
//        return 0;
// }



// string permutation
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// #define all(x) (x).begin(), (x).end()
// #define yes cout <<"YES\n";
// #define no cout <<"NO\n";
// const int N = 1e5+10;
// void solve(int ind,string &s){
//      if(ind == s.size()){
//        cout<<s<<endl;
//        return;
//      }
//      for(int i=ind;i<s.size();i++){
//        swap(s[ind],s[i]);
//        solve(ind+1,s);
//        swap(s[ind],s[i]);
//      }
// }
// int main()
// {
// ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//        string s;
//        cin>>s;
//        solve(0,s);
//        return 0;
// }


// string permutation
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// #define all(x) (x).begin(), (x).end()
// #define yes cout <<"YES\n";
// #define no cout <<"NO\n";
// const int N = 1e5+10;
// void solve(string &s,int ind){
//      if(ind==s.size()){
//         cout<<s<<endl;
//         return;
//      }
//      for(int i=ind;i<=s.size()-1;i++){
//          swap(s[ind],s[i]);
//          solve(s,ind+1); 
//          swap(s[ind],s[i]);
//      }
// }
// int main()
// {
// ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//        string s;
//        cin>>s;
//        solve(s,0);
//        return 0;
// }

//  even indexed and odd indexed
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// #define all(x) (x).begin(), (x).end()
// #define yes cout <<"YES\n";
// #define no cout <<"NO\n";
// const int N = 1e5+10;
// void solve(int cur[],int l,int sz){
//     if(l==sz){
//        for(int i=0;i<sz;i++){
//         if(i!=0){
//             cout<<" ";
//         }
//          cout<<cur[i];
//        }
//        cout<<endl;
//        return;
//     }
//    for(int i=0;i<5;i++){
//      if(i%2!=l%2){
//         continue;
//      }
//      cur[l] = i;
//      solve(cur,l+1,sz);
//    }
// }
// int main()
// {
// ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//        int n;
//        cin>>n;
//        int cur[n];
//        solve(cur,0,n);
//        return 0;
// }


// At coder ploblem C..........[unsolved]
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// #define all(x) (x).begin(), (x).end()
// #define yes cout <<"YES\n";
// #define no cout <<"NO\n";
// const int N = 1e5+10;
// int main()
// {
// ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//       ll n,k;
//       cin>>n>>k;
//       string s;
//       cin>>s;
//       vector<ll>v;
//       ll count0 = 0, count1 = 0;
//       for(int i=0;i<s.size();i++){
//           if(s[i]=='0'){
//             count0++;
//           }
//           if(s[i]=='1'){
//             count1++;
//           }
//           if(s[i]=='0' && count1!=0){
//             v.push_back(count1);
//             count1=0;
//           }
//           if(s[i]=='1' &&  count0!=0){
//             v.push_back(count0);
//             count0 = 0;
//           }
//       }
//       if(count0!=0){
//          v.push_back(count0);
//       }
//       if(count1!=0){
//          v.push_back(count1);
//       }
//       ll p = 0;
//       ll l = 0;
//       if(s[0]=='0'){
//          for(int i=0;i<v.size();i+=2){
//              if(p==k){
//                p = v[i];
//                v.erase(v.begin()+i);
//                break;
//              }
//              p++;
//          }
//       }
//       if(s[0]=='1'){
//          for(int i=0;i<v.size();i+=2){
//             p++;
//             if(p==k){
//                p = v[i];
//                v.erase(v.begin()+i);
//                break;
//             }
//          }
//       }
//       ll d =0;
//       if(s[0]=='0'){
//          for(int i=0;i<v.size();i+=2){
//              if(d==k-1){
//                d = v[i];
//                v.insert(v.begin()+i,p);
//                break;
//              }
//              d++;
//          }
//       }
//       if(s[0]=='1'){
//          for(int i=0;i<v.size();i+=2){
//             d++;
//             if(d==k-1){
//                d = v[i];
//                v.insert(v.begin()+i,p);
//                break;
//             }
//          }
//       }
//       for(int i=0;i<v.size();i++){
//          cout<<v[i]<<" ";
//       }
//       return 0;
// }


// Merge Sort algorrithm
// #include <bits/stdc++.h>
// using namespace std;
// void merge(int arr[],int low,int mid,int high){
//     vector<int>v;
//     int left = low;
//     int right = mid+1;
//     while(left<=mid  && right<=high){
//         if(arr[left]<=arr[right]){
//             v.push_back(arr[left]);
//             left++;
//         }
//         else{
//             v.push_back(arr[right]);
//             right++;
//         }
//     }
//     while(left<=mid){
//         v.push_back(arr[left]);
//         left++;
//     }
//     while(right<=high){
//          v.push_back(arr[right]);
//          right++;
//     }
//     for(int i=low;i<=high;i++){
//         arr[i] = v[i-low];
//     }
// }
// void mergeSort(int arr[],int low,int high){
//      if(low==high){
//         return;
//      }
//      int mid = (low+high)/2;
//      mergeSort(arr,low,mid);
//      mergeSort(arr,mid+1,high);
//      merge(arr,low,mid,high);
// }
// int main()
// {
// ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//        int n;
//        cin>>n;
//        int arr[n];
//        for(int i=0;i<n;i++){
//          cin>>arr[i];
//        }
//        mergeSort(arr,0,n-1);
//        for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//        }
//        cout<<endl;
//        return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// void fillDiagonal(vector<vector<int>>& arr, int n, int m, int k, int i) {
//     if (i >= n) {
//         return;
//     }
//     arr[i][i] = m;
//     fillDiagonal(arr, n, m + k, k, i + 1);
// }
// void fillUpperTriangle(vector<vector<int>>& arr, int n, int i, int j) {
//     if (j >= n) {
//         return;
//     }
//     arr[i][j] = arr[i][j - 1] - 1;
//     fillUpperTriangle(arr, n, i, j + 1);
// }
// void fillLowerTriangle(vector<vector<int>>& arr, int n, int i, int j) {
//     if (i >= n) {
//         return;
//     }
//     arr[i][j] = arr[i - 1][j] - 1;
//     fillLowerTriangle(arr, n, i + 1, j);
// }

// void tripleRecursion(int n, int m, int k) {
//     vector<vector<int>> arr(n, vector<int>(n, 0));
//     fillDiagonal(arr, n, m, k, 0);
//     for (int i = 0; i < n; i++) {
//         if (i + 1 < n) {
//             fillUpperTriangle(arr, n, i, i + 1);
//         }
//     }
//     for (int j = 0; j < n; j++) {
//         if (j + 1 < n) {
//             fillLowerTriangle(arr, n, j + 1, j);
//         }
//     }
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
// }
// int main() {
//     int n;
//     int m;
//     int k;
//     cin >> n >> m >> k;
//     tripleRecursion(n, m, k);
//     return 0;
// }


// Infix to postfix;
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// #define all(x) (x).begin(), (x).end()
// #define yes cout <<"YES\n";
// #define no cout <<"NO\n";
// const int N = 1e5+10;
// int prio(char ch){
//     if(ch=='+' || ch=='-') return 1;
//     else if(ch=='*' ||  ch=='/') return 2;
//     else if(ch=='^') return 3;
//     return 0;
// }
// int main()
// {
// ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//        string s;
//        cin>>s;
//        stack<char>st2;
//        string s1;
//        for(int i=0;i<s.size();i++){
//           if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9')){
//               s1+=s[i];
//           }
//           else{
//             if(s[i]=='('){
//                 st2.push(s[i]);
//             }
//             else if(s[i]==')'){
//               while(!st2.empty() &&  st2.top()!='('){
//                 char ch = st2.top();
//                 s1+=ch;
//                 st2.pop();
//               }
//              st2.pop();
//             }
//             else{
//                 while(!st2.empty() && prio(s[i])<=prio(st2.top())){
//                     char ch = st2.top();
//                     s1+=ch;
//                     st2.pop();
//                 }
//                 st2.push(s[i]);
//             }
//           }
//        }
//        while(!st2.empty()){
//          char t = st2.top();
//          s1+=t;
//          st2.pop();
//        }
//        cout<<s1<<endl;
//        return 0;
// }


// postfix to infix
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// #define all(x) (x).begin(), (x).end()
// #define yes cout <<"YES\n";
// #define no cout <<"NO\n";
// const int N = 1e5+10;
// int main()
// {
// ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//        string s;
//        cin>>s;
//        stack<int>st;
//        for(int i=0;i<s.size();i++){
//          if(s[i]>='0' && s[i]<='9'){
//             st.push(s[i]-'0');
//          }
//          else{
//             if(s[i]=='+'){
//                 int y = st.top();
//                 st.pop();
//                 int x = st.top();
//                 st.pop();
//                 int z = x + y;
//                 st.push(z);
//             }
//             else if(s[i]=='-'){
//                 int y = st.top();
//                 st.pop();
//                 int x = st.top();
//                 st.pop();
//                 int z = x - y;
//                 st.push(z);
//             }
//             else if(s[i]=='*'){
//                 int y = st.top();
//                 st.pop();
//                 int x = st.top();
//                 st.pop();
//                 int z = x * y;
//                 st.push(z);
//             }
//             else if(s[i]=='/'){
//                 int y = st.top();
//                 st.pop();
//                 int x = st.top();
//                 st.pop();
//                 int z = x / y;
//                 st.push(z);
//             }
//          }
//        }
//        cout<<st.top()<<endl;
//        return 0;
// }



// selection sort
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         int minindex = i;
//         for(int j=i+1;j<n;j++){
//             if(arr[j]<arr[minindex]){
//                 minindex = j;
//             }
//         }
//         if(arr[i]>arr[minindex]){
//             int temp = arr[i];
//             arr[i] = arr[minindex];
//             arr[minindex] = temp;
//         }
//     }
//     for(int i = 0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }


// Bubble sort
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// #define all(x) (x).begin(), (x).end()
// #define yes cout <<"YES\n";
// #define no cout <<"NO\n";
// const int N = 1e5+10;
// int main()
// {
// ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//        int n;
//        cin>>n;
//        vector<int>v(n);
//        for(int i=0;i<n;i++){
//           cin>>v[i];
//        }
//        for(int i=0;i<n;i++){
//           for(int j=i+1;j<n;j++){
//              if(v[i]>v[j]){
//                 int temp = v[i];
//                 v[i] = v[j];
//                 v[j] = temp;
//              }
//           }
//        }
//        for(int i=0;i<n;i++){
//           cout<<v[i]<<" ";
//        }
//        cout<<endl;
//        return 0;
// }

// Insertion sort
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// #define all(x) (x).begin(), (x).end()
// #define yes cout <<"YES\n";
// #define no cout <<"NO\n";
// const int N = 1e5+10;
// int main()
// {
// ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//        int n;
//        cin>>n;
//        int arr[n];
//        for(int i = 0;i<n;i++){
//          cin>>arr[i];
//        }
//        for(int i=0;i<n;i++){
//            int j = i;
//            while(j>0 && arr[j-1]>arr[j]){
//               swap(arr[j-1],arr[j]);
//               j--;
//            }
//        }
//        for(int i=0;i<n;i++){
//           cout<<arr[i]<<" ";
//        }
//        cout<<endl;
//        return 0;
// }


// even - odd index
// string permutation
// string -- substring generate-->k length
/*
practice code
#include <iostream>

using namespace std;

class Solution {
    //Write your code here
    struct node{
       char val;
       struct node* next;
    };
    node* head1 = NULL;
    node* tail1 = NULL;
    node* head2 = NULL;
    node* tail2 = NULL;
    public:
    void pushCharacter(char p){
        struct node* temp = new node();
        temp->val = p;
        temp->next = NULL;
        if(head1==NULL){
          head1 = temp;
          tail1 = temp;
        }
        else{
          tail1->next = temp;
          tail1 = temp;
        }
    }
   
    void enqueueCharacter(char p){
        struct node* temp = new node();
        temp->val = p;
        temp->next = NULL;
        if(head2==NULL){
          head2 = temp;
          tail2 = temp;
        }
        else{
          temp->next = head2;
          head2 = temp;
        }
    }

    char  popCharacter(){
      struct node* temp = head1;
      char ch = head1->val;
      head1 = head1->next;
      delete temp;
      return ch;
    }
    
    char dequeueCharacter(){
      struct node* temp = head2;
      char ch = head2->val;
      head2 = head2->next;
      delete temp;
      return ch;
    }
};

int main() {
    // read the string s.
    string s;
    getline(cin, s);
    
  	// create the Solution class object p.
    Solution obj;
    
    // push/enqueue all the characters of string s to stack.
    for (int i = 0; i < s.length(); i++) {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }
    
    bool isPalindrome = true;
    
    // pop the top character from stack.
    // dequeue the first character from queue.
    // compare both the characters.
    for (int i = 0; i < s.length() / 2; i++) {
        if (obj.popCharacter() != obj.dequeueCharacter()) {
            isPalindrome = false;
            
            break;
        }
    }
    
    // finally print whether string s is palindrome or not.
    if (isPalindrome) {
        cout << "The word, " << s << ", is a palindrome.";
    } else {
        cout << "The word, " << s << ", is not a palindrome.";
    }
    
    return 0;
}
*/

/////////////////////////////
/*
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    
    int n;
    cin>>n;
    vector<int>v;
    while(n--){
       int p;
       cin>>p;
       if(p==1){
          int k;
          cin>>k;
          v.push_back(k);
       }
       else if(p==2){
         v.erase(v.begin());
       }
       else if(p==3){
         cout<<v[0]<<endl;
       }
    }
    return 0;
}
*/

/*
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  
    int n;
    cin>>n;
    vector<int>v;
    while(n--){
       int p;
       cin>>p;
       if(p==1){
          int k;
          cin>>k;
          v.push_back(k);
       }
       else if(p==2){
         v.erase(v.begin());
       }
       else if(p==3){
         cout<<v[0]<<endl;
       }
    }
    return 0;
}
*/



/*
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
  //Write your code here.
  if(n==1){
    return a;
  }
  if(n==2){
    return b;
  }
  if(n==3){
    return c;
  }
  return (find_nth_term(n-1, a, b, c)+find_nth_term(n-2, a, b, c)+find_nth_term(n-3, a, b, c));
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}
*/

/*


#include <bits/stdc++.h>
using namespace std;

void diagonal(vector<vector<int>>&v,int n,int m,int k,int i){
    if(i>=n){
        return;
    }
    v[i][i] = m;
    diagonal(v,n,m+k,k,i+1);
}

void upper(vector<vector<int>>&v,int n,int i,int j){
    if(j>=n){
        return;
    }
    v[i][j] = v[i][j-1]-1;
    upper(v,n,i,j+1);
}
 
void lower(vector<vector<int>>&v,int n,int i,int j){
     if(i>=n){
        return;
     }
     v[i][j] = v[i-1][j]-1;
     lower(v,n,i+1,j);
} 

void tripleRecursion(int n, int m, int k) {
      vector<vector<int>>v(n,vector<int>(n,0));   
      diagonal(v,n,m,k,0);
      for(int i=0;i<n;i++){
        if(i<n-1){
            upper(v,n,i,i+1);
        }
      }
      for(int i=0;i<n;i++){
        if(i<n-1){
            lower(v,n,i+1,i);
        }
      }
      for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
      }
}
int main() {
    int n;
    int m;
    int k;
    cin >> n >> m >> k;
    tripleRecursion(n, m, k);
    return 0;
}
*/



// Using Comparator
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// #define all(x) (x).begin(), (x).end()
// #define yes cout <<"YES\n";
// #define no cout <<"NO\n";
// const int N = 1e5+10;
// bool cmp(pair<int,int>p,pair<int,int>q){
//     if(p.first!=q.first){
//        return p.first<q.first;
//     }
//     else{
//       return p.second>q.second;
//     }
// }
// int main()
// {
// ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//        int n;
//        cin>>n;
//        vector<pair<int,int>>p(n);
//        for(int i=0;i<n;i++){
//          int x,y;
//          cin>>x>>y;
//          p[i] = {x,y};
//        }
//        sort(p.begin(),p.end(),cmp);
//        for(int i=0;i<p.size();i++){
//           cout<<p[i].first<<" "<<p[i].second<<endl;
//        }
//        return 0;
// }



// #include <iostream>
// using namespace std;
// const int N = 260;
// int arr[N];
// int main()
// {
// ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//        string s,s1;
//        cin>>s;
//        for(int i=0;i<s.size();i++){
//          arr[s[i]-'0']++;
//        }
//        for(int i=0;i<N;i++){
//          for(int j=0;j<arr[i];j++){
//                s1.push_back(i+'0');
//          }
//        }
//        cout<<s1<<endl;
//        return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// void merge(int arr[],int low,int mid,int high){
//     vector<int>v;
//     int left = low;
//     int right = mid+1;
//     while(left<=mid  && right<=high){
//         if(arr[left]<=arr[right]){
//             v.push_back(arr[left]);
//             left++;
//         }
//         else{
//             v.push_back(arr[right]);
//             right++;
//         }
//     }
//     while(left<=mid){
//         v.push_back(arr[left]);
//         left++;
//     }
//     while(right<=high){
//          v.push_back(arr[right]);
//          right++;
//     }
//     for(int i=low;i<=high;i++){
//         arr[i] = v[i-low];
//     }
// }
// void mergeSort(int arr[],int low,int high){
//      if(low==high){
//         return;
//      }
//      int mid = (low+high)/2;
//      mergeSort(arr,low,mid);
//      mergeSort(arr,mid+1,high);
//      merge(arr,low,mid,high);
// }
// int main(){
//   int n;
//   cin>>n;
//   int arr[n];
//   for (int i = 0; i < n; i++)
//   {
//     int x, y; cin >> x >> y;
//     arr[i] = x * 10000 + y;
//   }
//   mergeSort(arr,0,n-1);
//   for(int i=0;i<n;i++){
//      int y = arr[i]%10000;
//      int x = (arr[i] - y)/10000;
//      cout<<x<<" "<<y<<endl;
//   }
//   return 0;
// }

/////////////////////////////////////////////////////////////////////////////
//  All important sort
// // bubble sort
// #include<iostream>
// using namespace std;
// int main(){
//    int n;
//    cin>>n;
//    int arr[n];
//    for(int i=0;i<n;i++){
//        cin>>arr[i];
//    }
//    for(int i=0;i<n;i++){
//       for(int j=i+1;j<n;j++){
//          if(arr[i]>arr[j]){
//             int temp = arr[i];
//             arr[i] = arr[j];
//             arr[j] = temp;
//          }
//       }
//    }
//    for(int i=0;i<n;i++){
//       cout<<arr[i]<<" ";
//    }
//    cout<<endl;
//    return 0;
// }

//  selection sort
// #include<iostream>
// using namespace std;
// int main(){
//    int n; cin>>n;
//    int arr[n];
//    for(int i=0;i<n;i++){
//        cin>>arr[i];
//    }
//    for(int i=0;i<n;i++){
//       int minindex = i;
//       for(int j=i+1;j<n;j++){
//           if(arr[minindex]>arr[j]){
//             minindex = j;
//           }
//       }
//       if(arr[i]>arr[minindex]){
//          int temp = arr[i];
//          arr[i] = arr[minindex];
//          arr[minindex] = temp;
//       }
//    }
//    for(int i=0;i<n;i++){
//       cout<<arr[i]<<" ";
//    }
//    cout<<endl;
//    return 0;
// }


// insertion sort
// #include<iostream>
// using namespace std;
// int main(){
//    int n;
//    cin>>n;
//    int arr[n];
//    for(int i=0;i<n;i++){
//       cin>>arr[i];
//    }
//    for(int i=0;i<n;i++){
//       int j = i;
//       while(j>0 && arr[j-1]>arr[j]){
//          swap(arr[j],arr[j-1]);
//          j--;
//       }
//    }
//    for(int i=0;i<n;i++){
//       cout<<arr[i]<<" ";
//    }
//    cout<<endl;
//    return 0;
// }

// counting sort
// #include<iostream>
// using namespace std;
// const int N = 10000000;
// int arr1[N];
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//        cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//       arr1[arr[i]]++;
//     }
//     for(int i=0;i<N;i++){
//       for(int j=0;j<arr1[i];j++){
//          cout<<i<<" ";
//       }
//     }
//     cout<<endl;
//    return 0;
// }


// merge sort
// #include<iostream>
// using namespace std;
// const int N = 1e7;
// int arr1[N];
// void merge(int arr[],int low,int mid,int high){
//     int left = low;
//     int right = mid+1;
//     int k = 0;
//     while(left<=mid && right<=high){
//       if(arr[left]<=arr[right]){
//          arr1[k] = arr[left]; left++;
//          k++;
//       }
//       else{
//          arr1[k] = arr[right]; right++;
//          k++;
//       }
//     }
//     while(left<=mid){
//       arr1[k] = arr[left]; left++;
//       k++;
//     }
//     while(right<=high){
//       arr1[k] = arr[right];
//       right++; k++;
//     }
//     for(int i = low;i<=high;i++){
//        arr[i] = arr1[i-low];
//     }
// }
// void mergesort(int arr[],int low,int high){
//    if(low==high){
//       return;
//    }
//    int mid = (low+high)/2;
//    mergesort(arr,low,mid);
//    mergesort(arr,mid+1,high);
//    merge(arr,low,mid,high);
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//       cin>>arr[i];
//     }
//     mergesort(arr,0,n-1);
//     for(int i=0;i<n;i++){
//       cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }


//////////////////////////////////////////////////////////////////////////////////////////////////
// // bubble sort
// #include<iostream>
// using namespace std;
// int main(){
//    int n;
//    cin>>n;
//    int arr[n];
//    for(int i=0;i<n;i++){
//        cin>>arr[i];
//    }
//    for(int i=0;i<n;i++){
//       for(int j=i+1;j<n;j++){
//          if(arr[i]>arr[j]){
//             int temp = arr[i];
//             arr[i] = arr[j];
//             arr[j] = temp;
//          }
//       }
//    }
//    for(int i=0;i<n;i++){
//       cout<<arr[i]<<" ";
//    }
//    cout<<endl;
//    return 0;
// }

//  selection sort
// #include<iostream>
// using namespace std;
// int main(){
//    int n; cin>>n;
//    int arr[n];
//    for(int i=0;i<n;i++){
//        cin>>arr[i];
//    }
//    for(int i=0;i<n;i++){
//       int minindex = i;
//       for(int j=i+1;j<n;j++){
//           if(arr[minindex]>arr[j]){
//             minindex = j;
//           }
//       }
//       if(arr[i]>arr[minindex]){
//          int temp = arr[i];
//          arr[i] = arr[minindex];
//          arr[minindex] = temp;
//       }
//    }
//    for(int i=0;i<n;i++){
//       cout<<arr[i]<<" ";
//    }
//    cout<<endl;
//    return 0;
// }


// insertion sort
// #include<iostream>
// using namespace std;
// int main(){
//    int n;
//    cin>>n;
//    int arr[n];
//    for(int i=0;i<n;i++){
//       cin>>arr[i];
//    }
//    for(int i=0;i<n;i++){
//       int j = i;
//       while(j>0 && arr[j-1]>arr[j]){
//          swap(arr[j],arr[j-1]);
//          j--;
//       }
//    }
//    for(int i=0;i<n;i++){
//       cout<<arr[i]<<" ";
//    }
//    cout<<endl;
//    return 0;
// }

// counting sort
// #include<iostream>
// using namespace std;
// const int N = 10000000;
// int arr1[N];
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//        cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//       arr1[arr[i]]++;
//     }
//     for(int i=0;i<N;i++){
//       for(int j=0;j<arr1[i];j++){
//          cout<<i<<" ";
//       }
//     }
//     cout<<endl;
//    return 0;
// }


// merge sort
// #include<iostream>
// using namespace std;
// const int N = 1e7;
// int arr1[N];
// void merge(int arr[],int low,int mid,int high){
//     int left = low;
//     int right = mid+1;
//     int k = 0;
//     while(left<=mid && right<=high){
//       if(arr[left]<=arr[right]){
//          arr1[k] = arr[left]; left++;
//          k++;
//       }
//       else{
//          arr1[k] = arr[right]; right++;
//          k++;
//       }
//     }
//     while(left<=mid){
//       arr1[k] = arr[left]; left++;
//       k++;
//     }
//     while(right<=high){
//       arr1[k] = arr[right];
//       right++; k++;
//     }
//     for(int i = low;i<=high;i++){
//        arr[i] = arr1[i-low];
//     }
// }
// void mergesort(int arr[],int low,int high){
//    if(low==high){
//       return;
//    }
//    int mid = (low+high)/2;
//    mergesort(arr,low,mid);
//    mergesort(arr,mid+1,high);
//    merge(arr,low,mid,high);
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//       cin>>arr[i];
//     }
//     mergesort(arr,0,n-1);
//     for(int i=0;i<n;i++){
//       cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//    return 0;
// }

//void bs(vector<int>&v,int left,int right,int k,int ans){
//     if(left>right){
//       if(ans==INT_MIN){
//          cout<<"Not valid"<<endl;
//       }
//       else{
//          cout<<ans<<endl;
//       }
//       return;
//     }
//     int mid = (left+right)/2;
//     if(v[mid]<k){
//       ans = v[mid];
//       bs(v,mid+1,right,k,ans);
//     }
//     else{
//       bs(v,left,mid-1,k,ans);
//     }
// }
// int main(){
//    int n,k;
//    cin>>n>>k;
//    vector<int>v(n);
//    for(int i=0;i<n;i++){
//       cin>>v[i];
//    }
//    int left = 0;
//    int right = n-1;
//    int ans = INT_MIN;
//    bs(v,left,right,k,ans);
//    return 0;
// }



// #include <iostream>
// using namespace std;
// void generateWords(string &word, int index, int countA, int K) {
//     if (index == K) {
//         if (countA > 4) {
//             cout << word << endl;
//         }
//         return;
//     }
//     for (char letter : {'A', 'B', 'C'}) {
//         word[index] = letter;
//         if (letter == 'A') {
//             generateWords(word, index + 1, countA + 1, K);
//         } else {
//             generateWords(word, index + 1, countA, K);
//         }
//     }
// }

// int main() {
//     int K;
//     cin >> K;
//     string word(K, ' '); 
//     generateWords(word, 0, 0, K);  
//     return 0;
// }


// Radix sort
// #include<bits/stdc++.h>
// using namespace std;
// void radix(vector<int>&v){
//     int maxele = *max_element(v.begin(),v.end());
//     vector<int>out;
//     for(int i=1; maxele/i>0; i*=10){
//         vector<int>index[10];
//         for(int j=0;j<v.size();j++){
//             int l = (v[j]/i)%10;
//             index[l].push_back(v[j]);
//         }
//         for(int k=0;k<=9;k++){
//             for(int p : index[k]){
//                 out.push_back(p);
//             }
//         }
//         v = out;
//         out.clear();
//     }
// }
// int main(){
//    int n;
//    cin>>n;
//    vector<int>v(n);
//    for(auto &i : v) cin>>i;

//    cout<<"Sorted array : ";
//    radix(v);
//    for(int i=0;i<n;i++){
//       cout<<v[i]<<" ";
//    }
//    cout<<endl;
//    return 0;
// }


// Radix sort

// #include<bits/stdc++.h>
// using namespace std;

// void radix(vector<int>&v){
//     int maxi = *max_element(v.begin(),v.end());
//     vector<int>out;
//     for(int i = 1;maxi/i>0;i*=10){
//         vector<int>index[10];
//         for(int j=0;j<v.size();j++){
//             int value = (v[j]/i)%10;
//             index[value].push_back(v[j]);
//         }
//         for(int k=0;k<=9;k++){
//             for(int l : index[k]){
//               out.push_back(l);
//             }
//         }
//         v = out;
//         out.clear();
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     vector<int>v(n);
//     for(auto &i : v) cin>>i;

//     radix(v);
//       cout<<"Sorted array : ";
//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }


// Mid preparation
// // #include<bits/stdc++.h>
// // using namespace std;
// // void solve(string &s,int index,int countA,int k){
// //      if(index == k){
// //         if(countA>4){
// //            cout<<s<<endl;
// //         }
// //         return;
// //      }
// //      for(char letter : {'A','B','C'}){
// //         s[index] = letter;
// //         if(letter == 'A'){
// //             solve(s,index+1,countA+1,k);
// //         }
// //         else{
// //             solve(s,index+1,countA,k);
// //         }
// //      }
// // }
// // int  main(){
// //     int k;
// //     cin>>k;
// //     string s(k,' ');
// //     solve(s,0,0,k);
// //     return 0;
// // }

// // #include<bits/stdc++.h>
// // using namespace std;
// // int bs(vector<int>&v,int left, int right, int x,int ans){
// //      if(left>right){
// //         return ans;
// //      }
// //      int mid = (left+right)/2;
// //      if(v[mid]<x){
// //         ans = v[mid];
// //         return bs(v,mid+1,right,x,ans);
// //      }
// //      else{
// //         return bs(v,left,mid-1,x,ans);
// //      }
// // }
// // int main(){
// //     int n,x;
// //     cin>>n>>x;
// //     vector<int>v(n);
// //     for(auto &i : v) cin>>i;
// //     int ans = INT_MIN;
// //     ans = bs(v,0,n-1,x,ans);
// //     if(ans == INT_MIN){
// //        cout<<"NO"<<endl;
// //     }
// //     else{
// //         cout<<ans<<endl;
// //     }
// //     return 0;
// // }

// // #include <bits/stdc++.h>
// // using namespace std;
// // typedef long long ll;
// // #define all(x) (x).begin(), (x).end()
// // #define yes cout <<"YES\n";
// // #define no cout <<"NO\n";
// // const int N = 1e5+10;
// // int solve(){
// //      string s; cin>>s;
// //      stack<int>st;
// //      for(int i=0;i<s.size();i++){
// //          if((s[i]>='0' && s[i]<='9')){
// //             st.push(s[i]-'0');
// //          }
// //          else{
// //             int result;
// //             if(s[i]=='+'){
// //                int ch2 = st.top();
// //                st.pop();
// //                int ch1 = st.top();
// //                st.pop();
// //                result = ch1 + ch2;
// //             }
// //             else if(s[i]=='-'){
// //                int ch2 = st.top();
// //                st.pop();
// //                int ch1 = st.top();
// //                st.pop();
// //                result = ch1 - ch2;
// //             }
// //             else if(s[i]=='*'){
// //                int ch2 = st.top();
// //                st.pop();
// //                int ch1 = st.top();
// //                st.pop();
// //                result = ch1 * ch2;
// //             }
// //             else if(s[i]=='/'){
// //                int ch2 = st.top();
// //                st.pop();
// //                int ch1 = st.top();
// //                st.pop();
// //                result = ch1 / ch2;
// //             }
// //             st.push(result);
// //          }
// //      }
// //      cout<<st.top()<<endl;
// //      return 0;
// // }
// // int main()
// // {
// // ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// //       ll t;
// //       cin>>t;
// //       while(t--){
// //       solve();
// // }
// //        return 0;
// // }

// // Infix to postfix;
// // #include <bits/stdc++.h>
// // using namespace std;
// // typedef long long ll;
// // #define all(x) (x).begin(), (x).end()
// // #define yes cout <<"YES\n";
// // #define no cout <<"NO\n";
// // const int N = 1e5+10;
// // int prio(char ch){
// //     if(ch=='+' || ch=='-') return 1;
// //     else if(ch=='*' ||  ch=='/') return 2;
// //     else if(ch=='^') return 3;
// //     return 0;
// // }
// // int main()
// // {
// // ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// //        string s;
// //        cin>>s;
// //        stack<char>st2;
// //        string s1;
// //        for(int i=0;i<s.size();i++){
// //           if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9')){
// //               s1+=s[i];
// //           }
// //           else{
// //             if(s[i]=='('){
// //                 st2.push(s[i]);
// //             }
// //             else if(s[i]==')'){
// //               while(!st2.empty() &&  st2.top()!='('){
// //                 char ch = st2.top();
// //                 s1+=ch;
// //                 st2.pop();
// //               }
// //              st2.pop();
// //             }
// //             else{
// //                 while(!st2.empty() && prio(s[i])<=prio(st2.top())){
// //                     char ch = st2.top();
// //                     s1+=ch;
// //                     st2.pop();
// //                 }
// //                 st2.push(s[i]);
// //             }
// //           }
// //        }
// //        while(!st2.empty()){
// //          char t = st2.top();
// //          s1+=t;
// //          st2.pop();
// //        }
// //        cout<<s1<<endl;
// //        return 0;
// // }

// // selection sort
// // #include<bits/stdc++.h>
// // using namespace std;
// // int main(){
// //     int n;
// //     cin>>n;
// //     int arr[n];
// //     for(int i=0;i<n;i++){
// //         cin>>arr[i];
// //     }
// //     for(int i=0;i<n;i++){
// //         int minindex = i;
// //         for(int j=i+1;j<n;j++){
// //             if(arr[j]<arr[minindex]){
// //                 minindex = j;
// //             }
// //         }
// //         if(arr[i]>arr[minindex]){
// //             int temp = arr[i];
// //             arr[i] = arr[minindex];
// //             arr[minindex] = temp;
// //         }
// //     }
// //     for(int i = 0;i<n;i++){
// //         cout<<arr[i]<<" ";
// //     }
// //     cout<<endl;
// //     return 0;
// // }

// // Bubble sort
// // #include <bits/stdc++.h>
// // using namespace std;
// // typedef long long ll;
// // #define all(x) (x).begin(), (x).end()
// // #define yes cout <<"YES\n";
// // #define no cout <<"NO\n";
// // const int N = 1e5+10;
// // int main()
// // {
// // ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// //        int n;
// //        cin>>n;
// //        vector<int>v(n);
// //        for(int i=0;i<n;i++){
// //           cin>>v[i];
// //        }
// //        for(int i=0;i<n;i++){
// //           for(int j=i+1;j<n;j++){
// //              if(v[i]>v[j]){
// //                 swap(v[i],v[j]);
// //              }
// //           }
// //        }
// //        for(int i=0;i<n;i++){
// //           cout<<v[i]<<" ";
// //        }
// //        cout<<endl;
// //        return 0;
// // }

// // Insertion sort
// // #include <bits/stdc++.h>
// // using namespace std;
// // typedef long long ll;
// // #define all(x) (x).begin(), (x).end()
// // #define yes cout <<"YES\n";
// // #define no cout <<"NO\n";
// // const int N = 1e5+10;
// // int main()
// // {
// // ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// //        int n;
// //        cin>>n;
// //        int arr[n];
// //        for(int i = 0;i<n;i++){
// //          cin>>arr[i];
// //        }
// //        for(int i=0;i<n;i++){
// //            int j = i;
// //            while(j>0 && arr[j-1]>arr[j]){
// //               swap(arr[j-1],arr[j]);
// //               j--;
// //            }
// //        }
// //        for(int i=0;i<n;i++){
// //           cout<<arr[i]<<" ";
// //        }
// //        cout<<endl;
// //        return 0;
// // }

// // counting sort
// // #include<iostream>
// // using namespace std;
// // const int N = 10000000;
// // int arr1[N];
// // int main(){
// //     int n;
// //     cin>>n;
// //     int arr[n];
// //     for(int i=0;i<n;i++){
// //        cin>>arr[i];
// //     }
// //     for(int i=0;i<n;i++){
// //       arr1[arr[i]]++;
// //     }
// //     for(int i=0;i<N;i++){
// //       for(int j=0;j<arr1[i];j++){
// //          cout<<i<<" ";
// //       }
// //     }
// //     cout<<endl;
// //    return 0;
// // }

// // #include <bits/stdc++.h>
// // using namespace std;
// // void merge(int arr[],int low,int mid,int high){
// //     vector<int>v;
// //     int left = low;
// //     int right = mid+1;
// //     while(left<=mid  && right<=high){
// //         if(arr[left]<=arr[right]){
// //             v.push_back(arr[left]);
// //             left++;
// //         }
// //         else{
// //             v.push_back(arr[right]);
// //             right++;
// //         }
// //     }
// //     while(left<=mid){
// //         v.push_back(arr[left]);
// //         left++;
// //     }
// //     while(right<=high){
// //          v.push_back(arr[right]);
// //          right++;
// //     }
// //     for(int i=low;i<=high;i++){
// //         arr[i] = v[i-low];
// //     }
// // }
// // void mergeSort(int arr[],int low,int high){
// //      if(low==high){
// //         return;
// //      }
// //      int mid = (low+high)/2;
// //      mergeSort(arr,low,mid);
// //      mergeSort(arr,mid+1,high);
// //      merge(arr,low,mid,high);
// // }
// // int main()
// // {
// // ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// //        int n;
// //        cin>>n;
// //        int arr[n];
// //        for(int i=0;i<n;i++){
// //          cin>>arr[i];
// //        }
// //        mergeSort(arr,0,n-1);
// //        for(int i=0;i<n;i++){
// //         cout<<arr[i]<<" ";
// //        }
// //        cout<<endl;
// //        return 0;
// // }

// // #include <iostream>
// // using namespace std;
// // int getMax(int arr[], int n)
// // {
// //     int mx = arr[0];
// //     for (int i = 1; i < n; i++)
// //         if (arr[i] > mx)
// //             mx = arr[i];
// //     return mx;
// // }
// // void countSort(int arr[], int n, int exp)
// // {
// //     int output[n];
// //     int i, count[10] = { 0 };
// //     for (i = 0; i < n; i++)
// //         count[(arr[i] / exp) % 10]++;

// //     for (i = 1; i < 10; i++)
// //         count[i] += count[i - 1];

// //     for (i = n - 1; i >= 0; i--) {
// //         output[count[(arr[i] / exp) % 10] - 1] = arr[i];
// //         count[(arr[i] / exp) % 10]--;
// //     }

// //     for (i = 0; i < n; i++)
// //         arr[i] = output[i];
// // }

// // void radixsort(int arr[], int n)
// // {
// //     int m = getMax(arr, n);
// //     for (int exp = 1; m / exp > 0; exp *= 10)
// //         countSort(arr, n, exp);
// // }

// // void print(int arr[], int n)
// // {
// //     for (int i = 0; i < n; i++)
// //         cout << arr[i] << " ";
// // }

// // int main()
// // {
// //     int arr[] = { 170, 45, 75, 90, 802, 24, 2, 66 };
// //     int n = sizeof(arr) / sizeof(arr[0]);

// //     radixsort(arr, n);
// //     print(arr, n);
// //     return 0;
// // }

// // #include <bits/stdc++.h>
// // using namespace std;
// // typedef long long ll;
// // #define all(x) (x).begin(), (x).end()
// // #define yes cout <<"YES\n";
// // #define no cout <<"NO\n";
// // const int N = 1e5+10;
// // void solve(int arr[],vector<int>&v,int ind,int n){
// //     if(ind == n){
// //     //   if(v.size()==k){
// //          if(v.size()==0){
// //             cout<<"{}";
// //          }
// //          for(int i=0;i<v.size();i++){
// //             if(i!=0){
// //                cout<<" ";
// //             }
// //             cout<<v[i];
// //          }
// //          cout<<endl;
// //     //   }
// //       return;
// //     }
// //      solve(arr,v,ind+1,n);
// //     v.push_back(arr[ind]);
// //     solve(arr,v,ind+1,n);
// //     v.pop_back();

// // }
// // int main()
// // {
// // ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// //        int n;
// //        cin>>n;
// //        int arr[n];
// //        for(int i=0;i<n;i++){
// //           cin>>arr[i];
// //        }
// //        vector<int>v;
// //        solve(arr,v,0,n);
// //        return 0;
// // }


// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// #define all(x) (x).begin(), (x).end()
// #define yes cout <<"YES\n";
// #define no cout <<"NO\n";
// void solve(int arr[],int ind,int n){
//      if(ind==n){
//        for(int i=0;i<n;i++){
//          if(i!=0){
//             cout<<" ";
//          }
//          cout<<arr[i];
//        }
//        cout<<endl;
//        return;
//      }
//      for(int i=0;i<5;i--){
//        if(i%2!=ind%2){
//          continue;
//        }
//        arr[ind] = i;
//        solve(arr,ind+1,n);
//      }
// }
// int main()
// {
// ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//        int n;
//        cin>>n;
//        int arr[n];
//        solve(arr,0,n);
//        return 0;
// }


// // #include <bits/stdc++.h>
// // using namespace std;
// // typedef long long ll;
// // #define all(x) (x).begin(), (x).end()
// // #define yes cout <<"YES\n";
// // #define no cout <<"NO\n";
// // const int N = 1e5+10;
// // void solve(int arr[],int ind,int n){
// //      if(ind==n){
// //        for(int i=0;i<n;i++){
// //          if(i!=0){
// //             cout<<" ";
// //          }
// //          cout<<arr[i];
// //        }
// //        cout<<endl;
// //        return;
// //      }
// //      for(int i=4;i>=0;i--){
// //        if(i%2==ind%2){
// //          continue;
// //        }
// //        arr[ind] = i;
// //        solve(arr,ind+1,n);
// //      }
// // }
// // int main()
// // {
// // ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// //        int n;
// //        cin>>n;
// //        int arr[5];
// //        solve(arr,0,n);
// //        return 0;
// // }

// // #include <bits/stdc++.h>
// // using namespace std;
// // typedef long long ll;
// // #define all(x) (x).begin(), (x).end()
// // #define yes cout <<"YES\n";
// // #define no cout <<"NO\n";
// // const int N = 1e5+10;
// // void solve(string s,int ind){
// //    if(ind == s.size()){
// //       cout<<s<<endl;
// //       return;
// //    }
// //    for(int i=ind;i<s.size();i++){
// //       swap(s[i],s[ind]);
// //       solve(s,ind+1);
// //       swap(s[i],s[ind]);
// //    }
// // }
// // int main()
// // {
// // ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// //        string s;
// //        cin>>s;
// //        solve(s,0);
// //        return 0;
// // }

// // #include <bits/stdc++.h>
// // using namespace std;
// // typedef long long ll;
// // #define all(x) (x).begin(), (x).end()
// // #define yes cout <<"YES\n";
// // #define no cout <<"NO\n";
// // const int N = 1e5+10;
// // void solve(int arr[],int ind,int n){
// //      if(ind==n){
// //        for(int i=0;i<n;i++){
// //          cout<<arr[i]<<" ";
// //        }
// //        cout<<endl;
// //        return;
// //      }
// //      for(int i=ind;i<n;i++){
// //        swap(arr[i],arr[ind]);
// //        solve(arr,ind+1,n);
// //        swap(arr[i],arr[ind]);
// //      }
// // }
// // int main()
// // {
// // ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// //        int n;
// //        cin>>n;
// //        int arr[n];
// //        for(int i=0;i<n;i++){
// //          cin>>arr[i];
// //        }
// //        solve(arr,0,n);
// //        return 0;
// // }

// // #include <bits/stdc++.h>
// // using namespace std;
// // typedef long long ll;
// // #define all(x) (x).begin(), (x).end()
// // #define yes cout <<"YES\n";
// // #define no cout <<"NO\n";
// // const int N = 1e5+10;
// // void solve(int arr[],int n,int ind){
// //      if(ind == n){
// //         for(int i=0;i<n;i++){
// //            if(i!=0){
// //             cout<<" ";
// //            }
// //            cout<<arr[i];
// //         }
// //         cout<<endl;
// //         return;
// //      }
// //      for(int i = 4;i>=0;i--){
// //        if(i%2==ind%2){
// //           continue;
// //        }
// //        arr[ind] = i;
// //        solve(arr,n,ind+1);
// //      }
// // }
// // int main()
// // {
// // ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// //        int n;
// //        cin>>n;
// //        int arr[5];
// //        solve(arr,n,0);
// //        return 0;
// // }

//  even indexed and odd indexed
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// #define all(x) (x).begin(), (x).end()
// #define yes cout <<"YES\n";
// #define no cout <<"NO\n";
// const int N = 1e5+10;
// void solve(int cur[],int l,int sz){
//     if(l==sz){
//        for(int i=0;i<sz;i++){
//         if(i!=0){
//             cout<<" ";
//         }
//          cout<<cur[i];
//        }
//        cout<<endl;
//        return;
//     }
//    for(int i=0;i<=4;i++){
//      if(i%2==l%2){
//         continue;
//      }
//      cur[l] = i;
//      solve(cur,l+1,sz);
//    }
// }
// int main()
// {
// ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//        int n;
//        cin>>n;
//        int cur[n];
//        solve(cur,0,n);
//        return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// void radixSort(vector<int>& arr) {
//     int maxVal = *max_element(arr.begin(), arr.end());
//     vector<int> output;
//     for (int exp = 1; maxVal / exp > 0; exp *= 10) {
//         int n = arr.size();
//         vector<int> digit_array[10];
//         for (int i = 0; i < n; i++) {
//             int digit = (arr[i] / exp) % 10;
//             digit_array[digit].push_back(arr[i]);
//         }
//         for (int i = 0; i <= 9; i++) {
//             for(int j: digit_array[i])
//                 output.push_back(j);
//         }
//         arr = output;
//         output.clear();
//     }
// }
// int main() {
//     vector<int> arr = {170, 45, 75, 90, 802, 24, 2, 66};
//     cout << "Original array: ";
//     for (int num : arr) {
//         cout << num << " ";
//     }
//     cout << endl;
//     radixSort(arr);

//     cout << "Sorted array: ";
//     for (int num : arr) {
//         cout << num << " ";
//     }
//     cout << endl;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int bs(vector<int>&v,int left,int right,int ans,int k){
//      if(left>right){
//         return ans;
//      }
//      int mid = (left+right)/2;
//      if(v[left]<k){
//         ans = v[left];
//         return bs(v,mid+1,right,ans,k);
//      }
//      else{
//         return bs(v,left,mid-1,ans,k);
//      }
// }
// int main(){
//     int n,k;
//     cin>>n>>k;
//     vector<int>v(n);
//     for(auto &i : v) cin>>i;
//     int left = 0, right = n-1; int ans = INT_MIN;
//     ans = bs(v,left,right,ans,k);
//     if(ans == INT_MIN){
//         cout<<"NO"<<endl;
//     }
//     else{
//         cout<<ans<<endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// void fun(int n)
// {
//     if (n > 0)
//     {
//         fun(n - 1);
//         cout << n <<" ";
//         fun(n - 1);
//     }
// }
// int main()
// {
//     fun(4);
//     return 0;
// }


// #include <iostream>
// using namespace std;
// void generateWords(string &word, int index, int countA, int K) {
//     if (index == K) {
//         if (countA < 3) {
//             cout << word << endl;
//         }
//         return;
//     }
//     for (char letter : {'A', 'B', 'C'}) {
//         word[index] = letter;
//         if (letter == 'A') {
//             generateWords(word, index + 1, countA + 1, K);
//         } else {
//             generateWords(word, index + 1, countA, K);
//         }
//     }
// }

// int main() {
//     int k = 5;
//     string word(k, ' '); 
//     generateWords(word, 0, 0, k);  
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;
// struct node{
//     int val;
//     node *next;
//     node(int x){
//         val=x;
//         next=NULL;
//     }
// };
// node *createll(int n){
//     int val;
//     cin >> val;
//     node *head = new node(val);
//     node *current = head;
//     for(int i=0;i<n-1;i++){
//         cin >> val;
//         current->next=new node(val);
//         current=current->next;
//     }    
//     return head;
// }
// node *merge(node *l1, node *l2){
//     node *dummynode= new node(-1);
//     node *current=dummynode;
//     while(l1!=NULL && l2!=NULL){
//         if(l1->val<l2->val){
//             current->next=l1;
//             l1=l1->next;
//         }
//         else{
//             current->next=l2;
//             l2=l2->next;
//         }
//         current = current->next;
//     }
//     if(l1){
//         current->next=l1;
//     }
//     else{
//         current->next=l2;
//     }
//     return dummynode->next;
// }
// void print(node *head){
//     node *temp=head;
//     while(temp!=NULL){
//         cout<<temp->val<<" ";
//         node *ptr=temp;
//         temp = temp->next;
//         delete ptr;
//     }
// }

// int main(){
//     node *l1;
//     node *l2;
//     int n1,n2;
//     cin >> n1 >> n2;
//     l1=createll(n1);
//     l2=createll(n2);
//     node *h = merge(l1,l2);
//     print(h);
// }

// interface IntStack {  
//     void push(int item);  
//     int pop();  
// }
// // An implementation of IntStack that uses fixed storage.  
// class FixedStack implements IntStack {  
//     private int[] stack;  
//     private int tos;  
//     // Other members and methods
//     FixedStack(int size) {
//         stack = new int[size];
//         tos = -1;
//     }
    
//     public void push(int item) {
//         if (tos == stack.length - 1)
//             System.out.println("Stack is full.");
//         else
//             stack[++tos] = item;
//     } // push() ends.
    
//     public int pop() {
//         if (tos < 0) {
//             System.out.println("Stack is empty.");
//             return 0;
//         } else
//             return stack[tos--];
//     } // pop() ends.
//     } // FixedStack class ends.
    
//     // An implementation of "growable" stack that uses IntStack
//     class DynStack implements IntStack {
//         private int[] stack;
//         private int tos;
    
//         DynStack(int size) {
//             stack = new int[size];
//             tos = -1;
//         }
    
//         public void push(int item) {
//             // if the stack is full, allocate a larger stack
//             if (tos == stack.length - 1) {
//                 int[] tmp = new int[stack.length * 2];
//                 for (int i = 0; i < stack.length; i++) tmp[i] = stack[i];
//                 stack = tmp;
//             }
//             stack[++tos] = item;
//         } // push() ends.
    
//         public int pop() {
//             if (tos < 0) {
//                 System.out.println("Stack is empty.");
//                 return 0;
//             } else
//                 return stack[tos--];
//         } // pop() ends.
//     } // DynStack class ends.
    
//     public class Solution {
//         public static void main(String[] args) {
//             FixedStack mystack1 = new FixedStack(5);
//             FixedStack mystack2 = new FixedStack(8);
    
//             // push some numbers onto the stack
//             for (int i = 0; i < 5; i++) mystack1.push(i);
//             for (int i = 0; i < 8; i++) mystack2.push(i);
    
//             // pop those numbers off the stack
//             System.out.println("Stack in mystack1:");
//             for (int i = 0; i < 5; i++) System.out.println(mystack1.pop());
    
//             System.out.println("Stack in mystack2:");
//             for (int i = 0; i < 8; i++) System.out.println(mystack2.pop());
//         } // main() ends.
//     } // IFTest class ends.


//     // A.Draw the class hierarchy for this code. Each class should contain the names of data members and actions.

//     // B.Probably you have already noticed that there is still room for code-reuse in the above code. 
//     //  Modify the code so that further code reuse is enforced. In addition to the above class hierarchy,
//     //  you should use only one more construct: a (concrete/abstract) class or an interface. Note that the private nature of the data should be kept unchanged.


 

//  #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// #define all(x) (x).begin(), (x).end()
// #define yes cout <<"YES\n";
// #define no cout <<"NO\n";
// const int N = 1e5+10;
// int solve(){
//      string s;
//      cin>>s;
     
//      int count = 0;
//      for(int i=0;i<s.size();i++){
//         if(s[i]=='1'){
//            count++;
//         }
//      }
//      if(count==s.size()){
//         cout<<"1 1 "<<"1 "<<s.size()<<endl;
//         return 0;
//      }
//      else{
//        cout<<"1 "<<s.size()<<" ";
//        int count1 = 0;
//        for(int i=0;i<s.size();i++){
//            if(s[i]=='1'){
//              count1++;
//            }
//            else{
//              break;
//            }
//        }
//        string p; int j = 0; int flag = 0;
//        for(int i=0;i<s.size();i++){
//            if(s[i]==0){
//              flag = 1;
//            }
//            if(flag==1){
//              p[j] = s[i];
//              j++;
//            }
//        }
//        reverse(all(p));
//        for(int i=0;i<s.size()-p.size();i+=p.size()){
//           if(s.substr(i,p.size())==p){
//              cout<<i+1<<" ";
//           }
//        }
//      }
//      return 0;
// }
// int main()
// {
// ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//       ll t;
//       cin>>t;
//       while(t--){
//       solve();
// }
//        return 0;
// }

// Upper_bound
// #include<bits/stdc++.h>
// using namespace std;
// int solve(vector<int>&v,int x,int n){
//     int ans = n; int low = 0; int high = n-1; int mid;
//     while(low<=high){
//         mid = (low+high)/2;
//         if(v[mid]>x){
//           ans = mid;
//           high = mid-1;
//         }
//         else{
//          low = mid+1;
//         }
//     }
//     return ans;
// }
// int main(){
//    int n; cin>>n;
//    vector<int>v(n);
//    for(auto &i : v)  cin>>i;
//    int x; cin>>x;
//    int d = solve(v,x,n);
//    if(d==n){
//       cout<<"-1"<<endl;
//    }
//    else{
//       cout<<d<<endl;
//    }
//    return 0;
// }

// lower_bound
// #include<bits/stdc++.h>
// using namespace std;
// int solve(vector<int>&v,int x,int n){
//     int ans = n; int low = 0; int high = n-1; int mid;
//     while(low<=high){
//         mid = (low+high)/2;
//         if(v[mid]>=x){
//           ans = mid;
//           high = mid -1;
//         }
//         else{
//           low = mid + 1;
//         }
//     }
//     return ans;
// }
// int main(){
//    int n; cin>>n;
//    vector<int>v(n);
//    for(auto &i : v)  cin>>i;
//    int x; cin>>x;
//    int d = solve(v,x,n);
//    if(d==n){
//       cout<<"-1"<<endl;
//    }
//    else{
//       cout<<d<<endl;
//    }
//    return 0;
// }

// for ceil------ will be lower_bound
// for floor --- not lower_bound and not upper_bound
// #include<bits/stdc++.h>
// using namespace std;
// int solve(vector<int>&v,int x,int n){
//     int ans =-1; int low = 0; int high = n-1; int mid;
//     while(low<=high){
//         mid = (low+high)/2;
//         if(v[mid]<=x){
//           ans = v[mid];
//           low = mid + 1;
//         }
//         else{
//           high = mid - 1;
//         }
//     }
//     return ans;
// }
// int main(){
//    int n; cin>>n;
//    vector<int>v(n);
//    for(auto &i : v)  cin>>i;
//    int x; cin>>x;
//    int d = solve(v,x,n);
//    if(d==-1){
//       cout<<"-1"<<endl;
//    }
//    else{
//       cout<<d<<endl;
//    }
//    return 0;
// }

// This is for ceil --ing
// #include<bits/stdc++.h>
// using namespace std;
// int solve(vector<int>&v,int x,int n){
//     int ans = n; int low = 0; int high = n-1; int mid;
//     while(low<=high){
//         mid = (low+high)/2;
//         if(v[mid]>=x){
//           ans = v[mid];
//           high = mid -1;
//         }
//         else{
//           low = mid + 1;
//         }
//     }
//     return ans;
// }
// int main(){
//    int n; cin>>n;
//    vector<int>v(n);
//    for(auto &i : v)  cin>>i;
//    int x; cin>>x;
//    int d = solve(v,x,n);
//    if(d==-1){
//       cout<<"-1"<<endl;
//    }
//    else{
//       cout<<d<<endl;
//    }
//    return 0;
// }

// Combination :
// (n+k-1)C(k-1)
// binary exponentiation used here
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll; 
// #define all(x) (x).begin(), (x).end()
// #define yes cout << "YES\n";
// #define no cout << "NO\n";
// const int N = 2e6 + 10;
// const int a = 1e9 + 7;
// ll arr[N];
// ll binexp(ll c, ll b) {
//     ll result = 1; 
//     while (b > 0) {
//         if (b % 2 == 1) {
//             result = (result * c) % a;
//         }
//         c = (c * c) % a;
//         b /= 2;
//     }
//     return result;
// }
// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     ll t;
//     cin >> t;
//     arr[0] = 1;
//     for (ll i = 1; i < N; i++) {
//         arr[i] = (arr[i - 1] * i) % a;
//     }
//     ll s = 1;
//     while (t--) {
//         ll n, k;
//         cin >> n >> k;
//         ll d = n + k - 1;
//         ll p = k - 1;
//         ll ans = arr[d];
//         ll dem = (arr[p] * arr[d - p]) % a;
        
//         cout << "Case " << s << ": ";
//         ll result = (ans * binexp(dem, a - 2)) % a;
//         cout << result << endl;
//         s++;
//     }
//     return 0;
// }


//  sorting through linked list
// #include<iostream>
// using namespace std;
// struct ll {
//     struct node {
//         int data;
//         struct node* link; 
//     };
//     struct node* head = NULL;
//     struct node* tail = NULL;
//     void add_node(int value) {
//         struct node* temp = (struct node*)malloc(sizeof(struct node));
//         temp->data = value;
//         temp->link = NULL;
//         if(head == NULL) {
//             head = temp;
//             tail = temp;
//         } 
//         else {
//             tail->link = temp;
//             tail = temp;
//         }
//     }
//     void sorted(){
//         node* temp = head;
//         for(node* i = temp;i!=NULL;i = i->link){
//             for(node *j = i->link;j!=NULL;j =j->link){
//                 if(i->data>j->data){
//                     swap(i->data,j->data);
//                 }
//             }
//         }
//     }
//     void print() {
//         struct node* ptr = head;
//         while(ptr != NULL) {
//             cout << ptr->data << endl;
//             ptr = ptr->link;
//         }
//     }
//     void free_memory() {
//         struct node* temp1 = head;
//         while(temp1 != NULL) {
//             struct node* next = temp1->link;
//             free(temp1);
//             temp1 = next;
//         }
//         head = tail = NULL;
//     }
// };
// int main() {
//     int n;
//     cin>>n;
//     ll list;
//     for(int i=0;i<n;i++){
//         int x; cin>>x;
//         list.add_node(x);
//     }
//     list.sorted();
//     list.print();
//     list.free_memory();
//     return 0;
// }

//  Starts from here


// Some basic code of tree
// #include<bits/stdc++.h>
// using namespace std;
// struct node{
//     int val;
//     node* left;
//     node* right;
//     node(int x){
//         val = x;
//         left = NULL;
//         right = NULL;
//     }
// };
// node* find(node* root, int key){
//      if(!root){
//         return nullptr;
//      }
//      else if(root->val == key){
//         return root;
//      }
//      return find(root->left,key)?find(root->left,key):find(root->right,key);
// }
// void buildtree(node* root,int n){
//      for(int i=0;i<n;i++){
//         int op,key,value;
//         cin>>op>>key>>value;
//         node* parent = find(root,key);
//         if(parent){
//            node* child = new node(value);
//            if(op==0){
//              parent->left = child;
//            }
//            else{
//              parent->right = child;
//            }
//         }
//      }
// }
// bool areEqual(node* root1,node* root2){
//     if(root1==NULL && root2==NULL){
//         return true;
//     }
//     else if(root1==NULL || root2==NULL){
//         return false;
//     }
//     else{
//         return (root1->val == root2->val && areEqual(root1->left,root2->left) && areEqual(root1->right,root2->right));
//     }
// }
// int main(){
//    int x; cin>>x;
//    node* root1 = new node(x);
//    int n; cin>>n;
//    buildtree(root1,n);
//    int y; cin>>y;
//    node* root2 = new node(y);
//    int n1; cin>>n1;
//    buildtree(root2,n1);
//    cout<<areEqual(root1,root2)<<endl;
// }




// #include<bits/stdc++.h>
// using namespace std;
// struct node{
//     int val;
//     node* left;
//     node* mid;
//     node* right;
//     node(int x){
//       val = x;
//       left = NULL;
//       mid = NULL;
//       right = NULL;
//     }
// };
// node* find(node* t1,int key){
//     if(t1==NULL){
//        return NULL;
//     }
//     else if(t1->val == key){
//        return t1;
//     }
//     else{
//        node* found = find(t1->left,key);
//        if(found) return found;
//        found = find(t1->mid,key);
//        if(found) return found;
//        return find(t1->right,key);
//     }
// }
// void buildtree(node* t1,int n){
//    for(int i=0;i<n;i++){
//        int op,key,value;
//        cin>>op>>key>>value;
//        node* parent = find(t1,key);
//        if(parent){
//          node* child = new node(value);
//          if(op==0){
//             parent->left = child;
//          }
//          else if(op==1){
//             parent->mid = child;
//          }
//          else{
//             parent->right = child;
//          }
//        }
//    }
// }
// void print(node* t1){
//    if(t1==NULL){
//       return;
//    }
//    print(t1->left);
//    print(t1->mid);
//    cout<<t1->val<<endl;
//    print(t1->right);
// }
// int main(){
//     int x; cin>>x;
//     node* t1 = new node(x);
//     int n; cin>>n;
//     buildtree(t1,n);
//     print(t1);
//     return 0;
// }
 

// Total bst solving
// #include<bits/stdc++.h>
// using namespace std;
// struct node{
//     int val;
//     node* left;
//     node* right;
//     node(int x){
//        val = x;
//        left = NULL;
//        right  = NULL;
//     }
// };
// node* insertnode(node* root,int key){
//       if(root==NULL){
//         return new node(key);
//       }
//       else if(key<root->val){
//          root->left = insertnode(root->left,key);
//       }
//       else{
//         root->right = insertnode(root->right,key);
//       }
//       return root;
// }
// bool find(node* t,int key){
//      if(t==NULL){
//         return false;
//      }
//      else if(t->val == key){
//         return true;
//      }
//      else if(key< t->val){
//         return find(t->left,key);
//      }
//      else{
//         return find(t->right,key);
//      }
// }
// node* findmin(node* t){
//     while(t->left!=NULL){
//         t = t->left;
//     }
//     return t;
// }
// node* deletenode(node* t, int key){
//      if(t==NULL){
//         return t;
//      }
//      else if(key<t->val){
//         t->left = deletenode(t->left,key);
//      }
//      else if(key>t->val){
//         t->right = deletenode(t->right,key);
//      }
//      else{
//         if(t->left==NULL){
//             node* temp = t->right;
//             delete t;
//             return temp;
//         }
//         else if(t->right ==NULL){
//             node* temp = t->left;
//             delete t;
//             return temp;
//         }
//           node* temp = findmin(t->right);
//           t->val = temp->val;
//           t->right = deletenode(t->left,temp->val);
//      }
//      return t;
// }
// void inorder(node* t){
//     if(t==NULL){
//         return;
//     }
//     inorder(t->left);
//     cout<<t->val<<endl;
//     inorder(t->right);
// }
// int main(){
//     int n;cin>>n;
//     node* root = NULL;
//     for(int i=0;i<n;i++){
//         int x; cin>>x;
//         root = insertnode(root,x);
//     }
//     int x; cin>>x;
//     for(int i=0;i<x;i++){
//         int p; cin>>p;
//         cout<<find(root,p)<<endl;
//     }
//     int f; cin>>f;
//     deletenode(root,f);
//     inorder(root);
//     return 0;
// }


// in c++
// // insertion in BST
// class Solution{
//   public : 
//   Treenode* insertintobst(Treenode* root,int val){
//      if(root==NULL){
//         return new Treenode(val);
//      }
//      Treenode* cur = root;
//      while(true){
//         if(cur->val<=val){
//            if(cur->right!=NULL){
//               cur = cur->right;
//            }
//            else{
//              cur->right = new Treenode(val);
//              break;
//            }
//         }
//         else{
//             if(cur->left!=NULL){
//                 cur = cur->left;
//             }
//             else{
//                 cur->left = new Treenode(val);
//                 break;
//             }
//         }
//      }
//      return root;
//   }
// };


// max heap
// #include<bits/stdc++.h>
// using namespace std;
// int heap[1000];
// int last_index = -1;
// int get_Max(){
//     if(last_index==-1){
//         return -1;
//     }
//     else{
//         return heap[0];
//     }
// }
// int parent(int i){
//     return (i-1)/2;
// }
// void heapify_up(int i){
//      while(1){
//         if(i==0){
//             return;
//         }
//         if(heap[parent(i)]>heap[i]){
//             break;
//         }
//         swap(heap[parent(i)],heap[i]);
//         i = parent(i);
//      }
// }
// int leftChild(int i){
//     return 2*i+1;
// }
// int rightChild(int i){
//     return 2*i+2;
// }
// void heapify_down(int x){
//     int left = leftChild(x);
//     int right = rightChild(x);
//     int size = last_index+1;
//     int largest = x;
//     if(left<size && heap[left]>heap[largest]){
//        largest = left;
//     }
//     if(right<size && heap[right]>heap[largest]){
//         largest = right;
//     }
//     if(largest ==x){
//         return;
//     }
//     swap(heap[x],heap[largest]);
//     heapify_down(largest);
// }
// void insert(int x){
//      heap[last_index+1] = x;
//      last_index++;
//      heapify_up(last_index);
//      return;
// }
// int extract_Max(){
//      int x = heap[0];
//      heap[0] = heap[last_index];
//      last_index--;
//      heapify_down(0);
//      return x;
// }
// int main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         int x;
//         cin>>x;
//         insert(x);
//     }
//     int arr[n];
//     for(int i=0;i<n;i++){
//         arr[i] = extract_Max();
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }



// min heap
// #include<bits/stdc++.h>
// using namespace std;
// int heap[1000];
// int last_index = -1;
// int get_Min(){
//     if(last_index==-1){
//         return -1;
//     }
//     else{
//         return heap[0];
//     }
// }
// int parent(int i){
//     return (i-1)/2;
// }
// void heapify_up(int i){
//      while(1){
//         if(i==0){
//             return;
//         }
//         if(heap[parent(i)]<heap[i]){
//             break;
//         }
//         swap(heap[parent(i)],heap[i]);
//         i = parent(i);
//      }
// }
// int leftChild(int i){
//     return 2*i+1;
// }
// int rightChild(int i){
//     return 2*i+2;
// }
// void heapify_down(int x){
//     int left = leftChild(x);
//     int right = rightChild(x);
//     int size = last_index+1;
//     int smallest = x;
//     if(left<size && heap[left]<heap[smallest]){
//        smallest = left;
//     }
//     if(right<size && heap[right]<heap[smallest]){
//         smallest = right;
//     }
//     if(smallest == x){
//         return;
//     }
//     swap(heap[x],heap[smallest]);
//     heapify_down(smallest);
// }
// void insert(int x){
//      heap[last_index+1] = x;
//      last_index++;
//      heapify_up(last_index);
//      return;
// }
// int extract_Min(){
//      int x = heap[0];
//      heap[0] = heap[last_index];
//      last_index--;
//      heapify_down(0);
//      return x;
// }
// int main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         int x;
//         cin>>x;
//         insert(x);
//     }
//     int arr[n];
//     for(int i=0;i<n;i++){
//         arr[i] = extract_Min();
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

// Graph theory -- using bfs
// #include<bits/stdc++.h>
// using namespace std;
// vector<int>bfsofGraph(int n,vector<int>adj[]){
//       int vis[n] = {0};
//       vis[0] = 1;
//       queue<int>q;
//       q.push(0);
//       vector<int>bfs;
//       while(!q.empty()){
//         int node = q.front();
//         q.pop();
//         bfs.push_back(node);
//         for(auto it : adj[node]){
//             if(vis[it]==0){
//                 vis[it] = 1;
//                 q.push(it);
//             }
//         }
//       }
//       return bfs;
// }
// int main(){
//     int n; cin>>n;
//     n = n+1;
//     vector<int>v[n];
//     vector<int>v1;
//     for(int i=0;i<n;i++){
//         int x; cin>>x;
//         v1.push_back(x);
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<v1[i];j++){
//             int x; cin>>x;
//             v[i].push_back(x);
//         }
//     }
//     vector<int>bfs = bfsofGraph(n,v);
//     for(auto &i : bfs){
//         cout<<i<<" ";
//     }
//     cout<<endl;
//     return 0;
// }



///Graphs
//  this is the right code for bfs
// #include <bits/stdc++.h>
// using namespace std;
// class Solution {
//   public:
//     vector<int> bfsOfGraph(vector<vector<int>> &adj) {
//         int V = adj.size();
//         vector<int>bfs;
//         int visited[V]={0};
//         queue<int>q;
//         visited[0]=1;
//         q.push(0);
//         while(!q.empty()){
//             int node = q.front();
//             q.pop();
//             bfs.push_back(node);
//             for(auto it:adj[node]){
//                 if(visited[it]==0){
//                     visited[it]=1;
//                     q.push(it);
//                 }
//             }
//         }
//         return bfs;
//     }
// };
// int main() {
//     int tc;
//     cin >> tc;
//     while (tc--) {
//         int V, E;
//         cin >> V >> E;
//         vector<vector<int>> adj(10000);
//         for (int i = 0; i < E; i++) {
//             int u, v;
//             cin >> u >> v;
//             adj[u].push_back(v);
//             adj[v].push_back(u); 
//         }
//         Solution obj;
//         vector<int> ans = obj.bfsOfGraph(adj);
//         for (int i = 0; i < ans.size(); i++) {
//             cout << ans[i] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }



// This is the code for union by size
// #include <bits/stdc++.h>
// using namespace std;
// const int N = 1e5 + 10;
// int parent[N];
// int Size[N];

// void make(int i) {
//     parent[i] = i;
//     Size[i] = 1;
// }

// int find(int v) {
//     if (v == parent[v]) return v;
//     return parent[v] = find(parent[v]); 
// }

// void union1(int a, int b) {
//     a = find(a);
//     b = find(b);
//     if (a != b) {
//         if (Size[a] < Size[b]) { 
//             swap(a, b);
//         }
//         parent[b] = a;
//         Size[a] = Size[a] + Size[b]; 
//     }
// }

// int main() {
//     int n, k;
//     cin >> n >> k;

//     for (int i = 1; i <= n; i++) {
//         make(i);
//     }

//     for (int i = 1; i <= k; i++) {
//         int u, v;
//         cin >> u >> v;
//         union1(u, v);
//     }

//     int connect = 0;
//     for (int i = 1; i <= n; i++) {
//         if (find(i) == i) {
//             connect++;
//         }
//     }
//     cout << connect << endl;

//     return 0;
// }

// This is the code for union by rank

// #include <bits/stdc++.h>
// using namespace std;
// const int N = 1e5 + 10;
// int parent[N];
// int rank[N];  

// void make(int i) {
//     parent[i] = i;
//     rank[i] = 0;  
// }

// int find(int v) {
//     if (v == parent[v]) return v;
//     return parent[v] = find(parent[v]);  
// }

// void unionByRank(int a, int b) {
//     a = find(a);
//     b = find(b);
//     if (a != b) {
//         if (rank[a] < rank[b]) { 
//             swap(a, b);
//         }
//         parent[b] = a;
//         if (rank[a] == rank[b]) {
//             rank[a]++;  
//         }
//     }
// }

// int main() {
//     int n, k;
//     cin >> n >> k;
//     for (int i = 1; i <= n; i++) {
//         make(i);
//     }
//     for (int i = 1; i <= k; i++) {
//         int u, v;
//         cin >> u >> v;
//         unionByRank(u, v);
//     }
//     int connect = 0;
//     for (int i = 1; i <= n; i++) {
//         if (find(i) == i) {
//             connect++;
//         }
//     }
//     cout << connect << endl;
//     return 0;
// }



//  number A
// #include <bits/stdc++.h>
// using namespace std;
// // typedef long long ll;
// // #define all(x) (x).begin(), (x).end()
// // #define yes cout <<"YES\n";
// // #define no cout <<"NO\n";
// // const int N = 1e5+10;
// int main()
// {
// ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//        int n;
//        cin>>n;
//        unordered_map<int,int>m;
//        for(int i=0;i<n;i++){
//           int x; cin>>x;
//           m[x]++;
//        }
//        int t; cin>>t;
//        while(t--){
//          int d; cin>>d;
//          cout<<m[d]<<'\n';
//        }
//        return 0;
// }






// Problem C
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// #define all(x) (x).begin(), (x).end()
// #define yes cout <<"YES\n";
// #define no cout <<"NO\n";
// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     for (int i = 0; i < n; i++) {
//         cin >> v[i];
//     }
//     int m;
//     cin >> m;
//     vector<int> v1(m);
//     for (int i = 0; i < m; i++) {
//         cin >> v1[i];
//     }
//     for (int i = 0; i < m; i++) {
//         int count = upper_bound(v.begin(), v.end(), v1[i]) - v.begin();
//         cout << count << "\n";
//     }
//     return 0;
// }



// Problem B
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// #define all(x) (x).begin(), (x).end()
// #define yes cout <<"YES\n";
// #define no cout <<"NO\n";
// const int N = 1e5+10;
// int main()
// {
// ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//        int t; cin>>t;
//        vector<pair<int,int>>p;
//        while(t--){
//          int x,y; cin>>x>>y;
//          p.push_back({y,x});
//        }
//        sort(all(p));
//        for(auto &i : p){
//          cout<<i.second<<'\n';
//        }
//        return 0;
// }






// Problem D
//39
//39
// #include <bits/stdc++.h>
// using namespace std;
// // typedef long long ll;
// // #define all(x) (x).begin(), (x).end()
// // #define yes cout <<"YES\n";
// // #define no cout <<"NO\n";
// // const int N = 1e5+10;

// void solve(int n,int arr[],int ind){
//      if(ind==n){
//         for(int i=0;i<n;i++){
//             if(i!=0){
//                 cout<<" ";
//             }
//             cout<<arr[i];
//         }
//         cout<<'\n';
//         return;
//      }
//      for(int i=0;i<5;i++){
//         if(i%2!=ind%2){
//            continue;    
//         }
//         arr[ind] = i;
//         solve(n,arr,ind+1);
//      }
// }
// int main()
// {
// ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//        int n; cin>>n;
//        int arr[n];
//        solve(n,arr,0);
//        return 0;
// }















