/* XxSupremeLordxX Ishwar Govind */
#include <bits/stdc++.h>
using namespace std;
#define M 1000000007
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

int used[110] = {0};
ll n;
int x[110],y[110];

void dfs(int u){
    used[u] = 1;
    rep(i,0,n-1){
        if((x[i]==x[u]||y[i]==y[u])&&used[i]!=1)
            dfs(i);
    }
}

void solve(){
    cin>>n;
    rep(i,0,n-1){
        cin>>x[i]>>y[i];
    }
    ll cnt = 0;
    rep(i,0,n-1){
        if(!used[i]){
            dfs(i);
            cnt++;
        }
    }
    cout<<cnt-1;
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 