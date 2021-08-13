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

void solve(){
    ll n,m,ans=LLONG_MAX;
    cin>>n>>m;
    vector <ll> a(n),b(n);
    rep(i,0,n-1) cin>>a[i];
    rep(i,0,n-1) cin>>b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    rep(i,0,n-1){
        ll cur = (b[0]-a[i]+m)%m;
        vector<ll> c(n);
        rep(j,0,n-1) c[j] = (a[j]+cur)%m;
        bool flg = 1;
        rep(j,0,n-1){
            if(c[(j+i)%n]!=b[j]){flg = 0;break;}
        }
        if(flg){ans = min(cur,ans);}
    }
    cout<<ans;
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 