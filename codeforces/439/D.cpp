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

ll n,m;
vector <ll> a,b;

ll f(ll k){
    ll cost = 0;
    rep(i,0,n-1){
        cost += max(0LL,k-a[i]);
    }
    rep(i,0,m-1){
        cost += max(0LL,b[i]-k);
    }
    return cost;
}

void solve(){
    cin>>n>>m;
    ll ans = 1e18;
    a.resize(n),b.resize(m);
    rep(i,0,n-1) cin>>a[i];
    rep(i,0,m-1) cin>>b[i];
    ll l=0,r=1e9;
    rep(i,0,100){
        ll m1 = l+(r-l)/3;
        ll m2 = r-(r-l)/3;
        if(f(m1)<ans){
            ans = f(m1);
        }
        if(f(m2)<ans){
            ans = f(m2);
        }
        if(f(m1)>=f(m2)){
            l = m1;
        }
        else{
            r = m2;
        }
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