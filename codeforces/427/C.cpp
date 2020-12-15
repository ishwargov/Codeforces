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

ll n,m;
ll cost[111111];
ll vis[111111];
stack <ll> s;
vector<ll> adj1[111111],adj2[111111],st[111111];

void dfs1(ll u,vector <ll> adj[]){
    vis[u] = 1;
    for(ll j=0;j<adj[u].size();j++){
        if(!vis[adj[u][j]])
            dfs1(adj[u][j],adj);
    }
    s.push(u);
}

void dfs2(ll u,vector <ll> &a,vector <ll> adj[]){
    vis[u] = 1;
    for(ll j=0;j<adj[u].size();j++){
        if(!vis[adj[u][j]])
            dfs2(adj[u][j],a,adj);
    }
    a.pb(u);
}

void solve(){
    cin>>n;    
    rep(i,1,n){
        cin>>cost[i];
    }
    ll ans=0,comb=1;
    cin>>m;
    rep(i,0,m-1){
        ll x,y;
        cin>>x>>y;
        adj1[x].pb(y);
        adj2[y].pb(x);
    }
    memset(vis,0,sizeof(vis));
    rep(i,1,n){
        if(!vis[i]){
            dfs1(i,adj1);
        }
    }
    memset(vis,0,sizeof(vis));
    ll j = 0;
    while(s.size()!=0){
        ll u = s.top();
        s.pop();
        if(!vis[u]){
            dfs2(u,st[j],adj2);
            j++;
        }
    }
    // rep(i,0,j-1){
    //     for(ll l=0;l<st[i].size();l++){
    //         cout<<st[i][l]<<" ";
    //     }
    //     cout<<"\n";
    // }
    rep(i,0,j-1){
        if(st[i].size()==0)
            break;
        ll min=cost[st[i][0]];
        ll cnt = 0;
        for(ll l=1;l<st[i].size();l++){
            if(cost[st[i][l]]<min){
                min = cost[st[i][l]];
            }
        }
        for(ll l=0;l<st[i].size();l++){
            if(cost[st[i][l]]==min){
                cnt++;
            }
        }
        comb = ((comb%M)*(cnt%M))%M;
        ans += min;
    }
    cout<<ans<<" "<<comb;

}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 