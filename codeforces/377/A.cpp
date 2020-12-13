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

ll n,m,k,t,s;
int flag;
char a[555][555];
int vis[555][555];
void dfs(int x,int y){
    if(s>=t-k){
       a[x][y] = 'X';
    }
    s++;
    vis[x][y]=1;
    if(x+1<n&&vis[x+1][y]==0&&a[x+1][y]=='.') dfs(x+1,y);
    if(x-1>=0&&vis[x-1][y]==0&&a[x-1][y]=='.') dfs(x-1,y);
    if(y-1>=0&&vis[x][y-1]==0&&a[x][y-1]=='.') dfs(x,y-1);
    if(y+1<m&&vis[x][y+1]==0&&a[x][y+1]=='.') dfs(x,y+1);
}

void solve(){
    ll x=-1,y=-1;
    t=0;
    cin>>n>>m>>k;
    rep(i,0,n-1){
        rep(j,0,m-1){
            cin>>a[i][j];
            if(a[i][j]=='.'){
                t++;
                if(x==-1){
                    x=i;
                    y=j;
                }
            }
        }
    }
    s=0,flag=0;
    dfs(x,y);  
    int cnt = 0;
    rep(i,0,n-1){
        rep(j,0,m-1){
            cout<<a[i][j];
        }
        cout<<"\n";
    }  
    
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 