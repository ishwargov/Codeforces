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

ll d,n;
vector <ll> a,deg,num,vis;
vector <vector <ll> > adj;

ll dfs(int r, int p, int mini){
    ll res = 1;
    for (int i = 0; i < adj[r].size(); i++){
        int v = adj[r][i];
        if (v != p && (a[v] > a[mini] || (a[v] == a[mini] && v > mini)) 
                   && a[v] <= a[mini] + d)
            res = (res * (dfs(v, r, mini)+1) % M) % M;
    }
    return res;
}

void solve(){
    cin>>d>>n;
    a.resize(n),deg.resize(n,0),num.resize(n,0),vis.resize(n,0);
    rep(i,0,n-1){
        cin>>a[i];
    }
    adj.resize(n);
    rep(i,0,n-2){
        ll x,y;
        cin>>x>>y;
        --x,--y;
        deg[x]++;
        deg[y]++;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    ll res = 1;
    for (int i = 0; i < n; i++)
        res = (res + dfs(i, -1, i)) % M;
    cout<<res-1<<endl;

}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 