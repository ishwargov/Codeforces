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

ll vis[52][52];
char a[52][52];

void dfs(ll i,ll j,ll n,ll m){
    if(i>=n||j>=m||i<0||j<0||a[i][j]!='#'||vis[i][j])
        return;
    vis[i][j] = 1;
    
    dfs(i+1,j,n,m);
    dfs(i-1,j,n,m);
    dfs(i,j+1,n,m);
    dfs(i,j-1,n,m);
}

void solve(){
    ll n,m,chk=0;
    cin>>n>>m;

    rep(i,0,n-1){
        rep(j,0,m-1){
            cin>>a[i][j];
            if(a[i][j]=='#'){
                chk++;
            }
        }
    }
  
    if(chk==0||chk==1||chk==2){
        cout<<"-1";
        return;
    }
    rep(i,0,n-1){
        rep(j,0,m-1){
            if(a[i][j]=='#'){
                memset(vis,0,sizeof(vis));
                a[i][j] = '.';

                ll flg = 0;
                rep(p,0,n-1){
                    rep(q,0,m-1){
                        if(a[p][q]=='#'&&vis[p][q]==0){
                            if(flg==1){
                                cout<<"1";
                                return;
                            }
                            dfs(p,q,n,m);
                            flg++;                            
                        }
                    }
                }

                a[i][j] = '#';
            }
        }
    }
    cout<<"2";
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 