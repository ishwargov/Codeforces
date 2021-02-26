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
    ll n,s;
    cin>>s>>n;
    vector <pair<ll,ll>> drg;
    rep(i,0,n-1){
        ll x,y;
        cin>>x>>y;
        drg.pb({x,-y});
    }
    sort(drg.begin(),drg.end());
    ll cur=s;
    rep(i,0,n-1){
        if(drg[i].fi<cur){
            cur = cur - drg[i].se;
        }
        else{
            cout<<"NO";
            return;
        }
    }
    cout<<"YES";

}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 