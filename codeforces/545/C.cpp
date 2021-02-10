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
    ll n;
    cin>>n;
    vector <pair<ll,ll>> tr;
    rep(i,0,n-1){
        ll x,y;cin>>x>>y;
        tr.pb({x,y});
    }
    sort(tr.begin(),tr.end());
    ll ans = (n>=2)?2:1,cur = tr[0].fi;
    rep(i,1,n-2){
        if(tr[i].fi-tr[i].se>cur){
            ans++;
            cur = tr[i].fi;
        }
        else if(tr[i].fi+tr[i].se<tr[i+1].fi){
            ans++;
            cur = tr[i].fi+tr[i].se;
        }
        else{
            cur = tr[i].fi;
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