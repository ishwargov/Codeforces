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

const int MAXN=501,MAXM=501;
ll n,m,vis[MAXN][MAXM];
char a[MAXN][MAXM];
ll r1,c1,r2,c2;
int p[4] = {1,0,0,-1},q[4]={0,1,-1,0};

bool dfs(ll x,ll y,ll px,ll py){
    vis[x][y] = 1;
    bool cur=0;
   
    for(int i=0;i<4;i++){
        ll dx = p[i],dy=q[i];
        ll nx=x+dx,ny=y+dy;
        if(nx<n&&nx>=0&&ny>=0&&ny<m){
            if(nx==r2&&ny==c2){
                return 1;
            }
            else if(a[nx][ny]!='X'&&vis[nx][ny]!=1&&!(nx==px&&ny==py)){
                cur = (cur||dfs(nx,ny,x,y));
            }
        }
    }    
    return (cur);
}

bool neigh(int k){
    int cnt=0;
    for(int i=0;i<4;i++){
        ll dx=p[i],dy=q[i];
        ll nx=r2+dx,ny=c2+dy;
        //cout<<nx<<" "<<ny<<" "<<a[nx][ny]<<"\n";
        if(a[nx][ny]!='X'&&nx<n && ny<m && nx>=0 && ny>=0){ 
            cnt++; 
        }
    }
    if(cnt>=k) return 1;
    else return 0;
}

void solve(){
    cin>>n>>m;
    rep(i,0,n-1){
        rep(j,0,m-1){
            cin>>a[i][j];
        }
    }
    cin>>r1>>c1>>r2>>c2;
    r1--,r2--,c1--,c2--;
    if(r1==r2&&c1==c2){
        if(neigh(1)) cout<<"YES";
        else cout<<"NO";
        return;
    }
    for(int i=0;i<4;i++){
        ll dx=p[i],dy=q[i];
        ll nx=r1+dx,ny=c1+dy;
        if(nx==r2&&ny==c2){
            if(neigh(1)){
                cout<<"YES";
                return;
            }
        }
    }
    bool is = dfs(r1,c1,-1,-1);
    //cout<<is<<"\n";
    //cout<<neigh(2)<<"\n";
    if(is&&a[r2][c2]=='X'||(is&&neigh(2))){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}

int main(){   
    solve();
    //timetaken();
    return 0;
} 