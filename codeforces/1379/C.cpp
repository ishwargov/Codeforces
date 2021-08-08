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
    ll n,m,ans=0;
    cin>>n>>m;
    vector <pair<ll,ll>> a;
    vector <ll> s(m+1,0);
    rep(i,0,m-1){ll x,y;cin>>x>>y;a.pb({x,y});}
    sort(a.rbegin(),a.rend());
    rep(i,0,m-1){
        s[i+1] = s[i] + a[i].fi;
    }
    rep(i,0,m-1){
        ll l=0,r=m-1,mi,cur=-1;
        while(l<=r){
            mi = l+(r-l)/2;
            if(a[mi].fi>=a[i].se) l = mi+1,cur=mi;
            else r = mi-1;
        }
        if(cur+1>=n) ans = max(ans,s[n]);
        else{
            if(cur>=i) ans = max(ans,s[cur+1]+a[i].se*(n-(cur+1)));
            else ans = max(ans,s[cur+1]+a[i].fi+a[i].se*(n-(cur+1)-1));
        }
    }
    cout<<ans;
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