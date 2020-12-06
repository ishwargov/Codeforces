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

ll n,m;
char a[55][55];
int vis[55][55];
int flag;

void dfs(ll i,ll j,ll x,ll y){
    if(vis[i][j]==1){
        flag = 1;
        return;
    }
    else if(vis[i][j]==2)
        return;
    vis[i][j] = 1;
    if(i>=1&&(!(i-1==x&&j==y))&&a[i][j]==a[i-1][j]) dfs(i-1,j,i,j);
    if(i+1<n&&(!(i+1==x&&j==y))&&a[i][j]==a[i+1][j]) dfs(i+1,j,i,j);
    if(j>=1&&(!(i==x&&j-1==y))&&a[i][j]==a[i][j-1]) dfs(i,j-1,i,j);
    if(j+1<m&&(!(i==x&&j+1==y))&&a[i][j]==a[i][j+1]) dfs(i,j+1,i,j);
    vis[i][j] = 2;    
}

int check(ll i,ll j){
    flag = 0;
    if(vis[i][j]==2)
        return 0;
    dfs(i,j,-1,-1);
    return flag;
}

void solve(){
    cin>>n>>m;
    rep(i,0,n-1){
        rep(j,0,m-1)
            cin>>a[i][j];
    }
    memset(vis,0,sizeof(vis));
    rep(i,0,n-1){
        rep(j,0,m-1){
            if(check(i,j)){
                cout<<"Yes";
                return;
            }
        }
    }
    cout<<"No\n";
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 