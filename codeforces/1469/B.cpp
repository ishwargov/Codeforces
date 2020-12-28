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

void solve(){
    ll n,m;
    cin>>n;
    vector <ll> r(n);
    rep(i,0,n-1){cin>>r[i];}
    cin>>m;
    vector <ll> b(m);
    rep(i,0,m-1){cin>>b[i];}
    ll i=0,j=0;
    ll mxr = 0,mxb=0,sr=0,sb=0,mx=0;
    rep(i,0,n-1){
        sr += r[i];
        mxr = max(mxr,sr);
    }
    rep(i,0,m-1){
        sb += b[i];
        mxb = max(mxb,sb);
    }
    mx = max((ll)0,mxb+mxr);
    cout<<mx;
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    int T;
    cin>>T;
    rep(t,1,T){
    //    cout<<"Case #"<<t<<": ";
        solve();
        cout<<"\n";
    }
    //timetaken();
    return 0;
} 