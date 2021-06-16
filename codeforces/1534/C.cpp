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

const int MAXN = 4e5 + 5;
ll vis[MAXN];
vector <ll> a,b;
vector <vector<ll>> adj;

bool dfs(int u,int par){
    if(vis[u]) return false;
    vis[u] = true;
    bool ok=false;
    for(auto x:adj[u]){
        if(x==par) return true;
        //cout<<par+1<<" "<<x+1<<"\n"; 
        ok = (ok||dfs(x,par));
    }
    return ok;
}

void solve(){
    ll n;
    cin>>n;
    memset(vis,0,sizeof(vis));
    a.clear(),b.clear(),adj.clear();
    a.resize(n),b.resize(n),adj.resize(n);
    rep(i,0,n-1){ cin>>a[i]; a[i]--;}
    rep(i,0,n-1){ cin>>b[i]; b[i]--; adj[a[i]].pb(b[i]);}

    ll ans = 1;
    rep(i,0,n-1){
        if(!vis[a[i]]&&dfs(a[i],a[i])){
            ans = (ans*2)%M;
        }
    }
    cout<<ans;
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    int T;
    cin>>T;
    rep(t,1,T){
    //    cout<<"Case #"<<t<<": ";
        solve();
        cout<<"\n";
    }
    //timetaken();
    return 0;
} 