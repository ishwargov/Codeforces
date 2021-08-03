/* SupremeLord Ishwar Govind */
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

const int MAXN = 2e5+5;
vector <vector<ll>> adj1,adj2;
ll path[MAXN],up[MAXN],vis[MAXN],totup;


void dfs(ll u){
    vis[u] = 1;
    for(auto v:adj2[u]){
        if(!vis[v]){    
            path[v] = path[u]+1; 
            up[v]=up[u];
            dfs(v);
        }
    }
    for(auto v:adj1[u]){
        if(!vis[v]){
            totup++;
            path[v] = path[u]+1;
            up[v] = up[u]+1;
            dfs(v);
        }
    }
}

void solve(){
    ll n;
    cin>>n;
    adj1.resize(n),adj2.resize(n);
    rep(i,0,n-2){
        ll x,y;
        cin>>x>>y;
        --x,--y;
        adj1[x].pb(y);
        adj1[y].pb(x);
        adj2[x].pb(y);
    }
    dfs(0);
    ll ans = LLONG_MAX;
    vector<ll> cit;
    rep(i,0,n-1){
        ans = min(ans,totup-up[i]+path[i]-up[i]);
    }
    rep(i,0,n-1){   
        if(totup-up[i]+path[i]-up[i]==ans) cit.pb(i+1);
    }
    cout<<ans<<"\n";
    for(auto c:cit){
        cout<<c<<" ";
    }
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 