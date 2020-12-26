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
    ll n;
    map <pair<ll,ll>,ll> slope;
    cin>>n;
    rep(i,0,n-1){
        ll x,y,u,v;
        cin>>x>>y>>u>>v;
        ll dy = v - y;
        ll dx = u - x;
        ll gc = __gcd(abs(dy),abs(dx));
        slope[mp(dy/gc,dx/gc)]++;
    }
    ll ans = 0;
    for(auto x:slope){
        ll dy = -x.fi.fi;
        ll dx = -x.fi.se;
        if(slope[mp(dy,dx)]>0){
            ans += x.se * slope[mp(dy,dx)]; 
        }
    }
    cout<<ans/2;

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