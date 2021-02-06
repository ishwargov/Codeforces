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

void solve(){
    ll n;
    cin>>n;
    vector<vector<ll>>a(n);
    rep(i,0,n-1){
        a[i].resize(n);
        rep(j,0,n-1){
            cin>>a[i][j];
        }
    }
    vector <ll> ld(2*n+1,0),rd(2*n+1,0);
    rep(i,0,n-1){
        rep(j,0,n-1){
            ld[i-j+(n-1)] += a[i][j];
            rd[i+j] += a[i][j];
        }
    }
    ll mxod=-1,mxev=-1;
    pair<ll,ll> od={-1,-1},ev={-1,-1};
    rep(i,0,n-1){
        rep(j,0,n-1){
            if((i+j)%2&1){
                if(mxod<ld[i-j+(n-1)]+rd[i+j]-a[i][j]) od = {i+1,j+1};
                mxod = max(mxod,ld[i-j+(n-1)]+rd[i+j]-a[i][j]);
            }
            else{
                if(mxev<ld[i-j+(n-1)]+rd[i+j]-a[i][j]) ev = {i+1,j+1};
                mxev = max(mxev,ld[i-j+(n-1)]+rd[i+j]-a[i][j]);
            }
        }
    }
    cout<<mxod+mxev<<"\n";
    cout<<od.fi<<" "<<od.se<<" "<<ev.fi<<" "<<ev.se;
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 