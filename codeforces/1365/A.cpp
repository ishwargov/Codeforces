/* XxSupremeLordxX Ishwar Govind */
#include <bits/stdc++.h>
using namespace std;
#define M 1000000009
#define ll long long int
#define fi first    
#define se second
#define pb push_back
#define mp make_pair
#define ub upper_bound
#define lb lower_bound
#define rep(i,k,n) for(ll i=k;i<=n;i++)
#define repi(i,k,n) for(ll i=k;i>=n;i--)

void solve(){
    ll n,m,cnt=0;
    cin>>n>>m;
    ll a[51][51];
    vector <ll> row(51,1),col(51,1);
    rep(i,0,n-1){
        rep(j,0,m-1){
            cin>>a[i][j];
            if(a[i][j]==1){
                row[i]=0;
                col[j]=0;
            }
        }
    }
    ll rowsum=0,colsum=0;
    rep(i,0,n-1){
        rowsum+=row[i];
        //cout<<row[i]<<" ";
    }
    rep(i,0,m-1){
        colsum += col[i];
        //cout<<col[i]<<" ";
    }
    while(colsum>0&&rowsum>0){
        cnt++;
        colsum--;rowsum--;
    }
    if(cnt%2!=0){
        cout<<"Ashish";
    }
    else{
        cout<<"Vivek";
    }
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    int T;
    cin>>T;
    rep(t,1,T){
        solve();
        cout<<"\n";
    }
    return 0;
}