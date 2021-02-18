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

void solve(){
    ll n,sx=0,sy=0;
    cin>>n;
    vector <pair<ll,ll>> p;
    vector <ll> px,py;
    rep(i,0,n-1){
        ll x,y;
        cin>>x>>y;
        p.pb({x,y});
        px.pb(x);
        py.pb(y);
    }
    sort(px.begin(),px.end());
    sort(py.begin(),py.end());
    ll mx1 = px[(px.size()-1)/2];
    ll mx2 = px[(px.size()-1)/2+((px.size()-1)%2!=0)];
    ll my1 = py[(py.size()-1)/2];
    ll my2 = py[(py.size()-1)/2+((py.size()-1)%2!=0)];

    ll ans = (abs(mx1-mx2)+1)*(abs(my1-my2)+1);

    cout<<ans;
}

int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
    int T;cin>>T;
    rep(t,1,T){
        solve();
        cout<<"\n";
    }   
    return 0;
} 