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
#define timetaken() cout << "\n\nTime elapsed: " << (double)(clock() - begtime)/CLOCKS_PER_SEC

int n,k;
vector<vector<pair<ll,ll>>> e;
vector<ll> a,w,t1,t2;
vector<vector<ll>> up;
int t = 0;

void dfs_lca(int u,int p){
    t1[u] = ++t;
    up[u][0] = p;
    for(int i=1;i<=31;i++){
        up[u][i] = up[up[u][i-1]][i-1]; 
    }
    for(auto x:e[u]){
        if(x.fi==p) continue;
        dfs_lca(x.fi,u);
    }
    t2[u] = ++t;
}

bool anc(int u,int v){
    return t1[u] <= t1[v] && t2[u] >= t2[v];
}

int lca(int u,int v){
    if(anc(u,v)) return u;
    if(anc(v,u)) return v;
    for(int i=31;i>=0;i--){
        if(!anc(up[u][i],v)) u = up[u][i];
    }
    return up[u][0];
}

void dfs(int u,int p){
    for(auto x:e[u]){
        if(x.fi==p) continue;
        dfs(x.fi,u);
        w[x.se] = a[x.fi];
        a[u] += a[x.fi];
    }
}

void solve(){
    cin>>n;
    a.resize(n);
    e.resize(n);
    w.resize(n);
    t1.resize(n);
    t2.resize(n);
    up.resize(n,vector<ll>(32,0));
    for(int i=0;i<n-1;i++){
        int x,y;
        cin>>x>>y;
        --x,--y;
        e[x].pb({y,i});
        e[y].pb({x,i});
    }
    dfs_lca(0,0);
    cin>>k;
    for(int i=0;i<k;i++){
        int x,y;
        cin>>x>>y;
        --x,--y;
        a[x]++;
        a[y]++;
        a[lca(x,y)]-=2;
    }
    dfs(0,0);
    for(int i=0;i<n-1;i++){
        cout<<w[i]<<" ";
    }
}

int main(){   
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 