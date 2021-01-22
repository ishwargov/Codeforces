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
    ll n,pre=-1;
    cin>>n;
    vector <pair<ll,ll>> dt;
    rep(i,0,n-1){
        ll x,y;
        cin>>x>>y;
        dt.pb({x,y});
    }
    sort(dt.begin(),dt.end());
    rep(i,0,n-1){
        if(dt[i].se>=pre){
            pre = dt[i].se;
        }
        else{ 
            pre = dt[i].fi;
        }
    }
    cout<<pre;
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 