/* XxSupremeLordxX Ishwar Govind */
#include <bits/stdc++.h>
using namespace std;
#define M 1000000007
#define PI acos(-1)
#define ll long long int
#define fi first    
#define se second
#define pb push_back
#define mp make_pair
#define ub upper_bound
#define lb lower_bound
#define rep(i,k,n) for(ll i=(k);i<=(n);i++)
#define repi(i,k,n) for(ll i=(k);i>=(n);i--)
clock_t begtime = clock();
#define timetaken() cout << "\n\nTime elapsed: " << (float)(clock() - begtime)/1000.0

vector <vector<int>> adj;
vector <ll> pre,vis,chk,dp;
set <int> ans;

void dfs(int u,int par){
    vis[u] = 1;
    if(chk[u]){dp[u]=1;}
    for(auto x:adj[u]){
        if(!vis[x]&&par!=x){
            dfs(x,u);
            dp[u] += dp[x];
        }
    }
}

void solve(){
    ll n;
    cin>>n;
    adj.resize(n);
    vis.resize(n,0);
    chk.resize(n,0);
    pre.resize(n);
    dp.resize(n,0);

    rep(i,0,n-2){
        ll x,y,t;
        cin>>x>>y>>t;
        adj[x-1].pb(y-1);
        adj[y-1].pb(x-1);
        if(t==2){
            chk[x-1] = 1,chk[y-1] = 1;
        }
    }
    dfs(0,0);
    rep(i,0,n-1){
        if(dp[i]==1){
            ans.insert(i);
        }
    }
    cout<<ans.size()<<"\n";
    for(auto x:ans){cout<<x+1<<" ";}
}


int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 