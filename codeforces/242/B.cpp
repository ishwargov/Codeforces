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
    ll n,curx=INT_MAX,cury=-1;
    vector <pair<ll,ll>> rng;
    cin>>n;
    rep(i,0,n-1){
        ll x,y;
        cin>>x>>y;
        rng.pb({x,y});
        if(x<=curx) curx = x;
        if(y>=cury) cury = y;
    }
    //cout<<curx<<" "<<cury<<"\n";
    rep(i,0,n-1){
        if(rng[i].fi==curx&&rng[i].se==cury){
            cout<<i+1;
            return;
        }
    }
    cout<<"-1";
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 