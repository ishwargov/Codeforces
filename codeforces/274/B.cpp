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

vector<ll> a,dp1,dp2;
vector<vector<ll>> adj;

void dfs(ll u,ll p){
    ll mx=0,mn=0;
    for(auto v:adj[u]){
        if(v!=p){
            dfs(v,u);
        }
        mx = max(mx,dp1[v]);
        mn = max(mn,dp2[v]);
    }
    ll diff = a[u] - (mx-mn);
    if(diff>0) mx += diff;
    else mn -= diff;
    dp1[u] = mx;
    dp2[u] = mn;
}

void solve(){
    ll n;
    cin>>n;
    adj.resize(n),a.resize(n),dp1.resize(n),dp2.resize(n);
    rep(i,0,n-2){
        ll x,y;
        cin>>x>>y;
        adj[x-1].pb(y-1);
        adj[y-1].pb(x-1);
    }
    rep(i,0,n-1){
        cin>>a[i];
    }
    dfs(0,-1);
    cout<<dp1[0]+dp2[0];
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 