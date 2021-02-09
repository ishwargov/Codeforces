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

vector <bool> iscat;
vector <vector<ll>> adj;
ll n,k,ans,inp;

void dfs(ll u,ll p=-1,ll c=0){
    if(iscat[u]) c++;
    else c = 0;
    if(c>k) return;
    ll child = 0;
    for(auto v:adj[u]){
        if(v==p) continue;
        else{
            child++;
            dfs(v,u,c);
        }
    }
    if(child==0) ans++;
}

void solve(){
    cin>>n>>k;
    iscat.resize(n),adj.resize(n);
    rep(i,0,n-1){cin>>inp;iscat[i]=inp;}
    rep(i,0,n-2){
        ll x,y;
        cin>>x>>y;
        --x,--y;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    dfs(0);
    cout<<ans;
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 