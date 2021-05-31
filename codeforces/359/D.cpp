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

const int MAXN = 3e5+1;
ll n,a[MAXN],t1[MAXN][20],t2[MAXN][20],k=20;

void build_gcd(){
    for(int i=0;i<n;i++) t1[i][0] = a[i];
    
    for(int j=1;j<=k;j++){
        for(int i=0;i+(1<<j)<=n;i++){
            t1[i][j] = __gcd(t1[i][j-1],t1[i+(1<<(j-1))][j-1]);
        }
    }
}

void build_min(){
    for(int i=0;i<n;i++) t2[i][0] = a[i];
    
    for(int j=1;j<=k;j++){
        for(int i=0;i+(1<<j)<=n;i++){
            t2[i][j] = min(t2[i][j-1],t2[i+(1<<(j-1))][j-1]);
        }
    }
}

int min_a(int l, int r){
    ll mn = 1e7;
    for (int j = k; j >= 0; j--) {
    if ((1 << j) <= r - l + 1) {
        mn = min(mn,t2[l][j]);
        l += 1 << j;
    }
    }
    return mn;
}

int gcd_a(int l, int r){
    ll gc = 0;
    for (int j = k; j >= 0; j--) {
    if ((1 << j) <= r - l + 1) {
        gc = __gcd(gc,t1[l][j]);
        l += 1 << j;
    }
    }
    return gc;
}

bool is(ll l,ll r){
    return(gcd_a(l,r)==min_a(l,r));
}

void solve(){
    cin>>n;
    rep(i,0,n-1) cin>>a[i];
    build_min();
    build_gcd();
    ll mx = 0;
    ll l=0,r=n-1;
    while(l<=r){
        ll m = l+(r-l)/2,flg=0;
        rep(i,0,n-1){
            if(i+m<n&&is(i,i+m)) flg = 1;
        }
        if(flg){
            l = m+1;
            mx = max(mx,m);
        }
        else{
            r = m-1;
        }
    }
    vector<pair<ll,ll>> ans;
    for(ll i=0;i<n;i++){
        if(i+mx<n && is(i,i+mx)) ans.pb({i,i+mx});
    }
    cout<<ans.size()<<" "<<mx<<"\n";
    for(auto x:ans) cout<<x.fi+1<<" ";
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 