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
#define rep(i,k,n) for(ll i=k;i<=n;i++)
#define repi(i,k,n) for(ll i=k;i>=n;i--)
clock_t begtime = clock();
#define timetaken() cout << "\n\nTime elapsed: " << (float)(clock() - begtime)/1000.0

vector <ll> adj[65538];
void solve(){
    ll n;
    cin>>n;
    vector <ll> deg(n),sv(n);
    rep(i,0,n-1){
        cin>>deg[i]>>sv[i];
    }
    queue <ll> s;
    rep(i,0,n-1){
        if(deg[i]==1){
            s.push(i);
        }
    }
    ll cnt = 0;
    while(s.size()!=0){
        ll u = s.front();
        s.pop();
        if(deg[u]<=0){
            continue;
        }
        //cout<<u<<" "<<deg[u]<<"\n";
        deg[u]--;
        ll v = sv[u];
        sv[u] = 0;
        deg[v]--;
        sv[v] = sv[v]^u;
        adj[u].pb(v);
        cnt++;
        if(deg[v]==1){
            s.push(v);
        }
    }
    cout<<cnt<<'\n';
    rep(i,0,n-1){
        for(ll j=0;j<adj[i].size();j++){
            cout<<i<<" "<<adj[i][j]<<"\n";
        }
    }

}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 