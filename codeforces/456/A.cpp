/* XxSupremeLordxX Ishwar Govind */
#include <bits/stdc++.h>
using namespace std;
#define M 1000000007
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
    cin>>n;
    vector <pair<ll,ll>> a;
    rep(i,0,n-1){
        ll x,y;
        cin>>x>>y;
        a.pb(mp(x,y));
    }
    sort(a.begin(),a.end(),[](pair<ll,ll> &x,pair <ll,ll> &y){
        if(x.fi<y.fi)
            return 1;
        else if(x.fi==y.fi && x.se < y.se)
            return 1;
        return 0;
    });

    rep(i,0,n-2){
        //cout<<a[i].se<<" "<<a[i+1].se<<" ";
        if(a[i].fi<a[i+1].fi && a[i].se>a[i+1].se){
            cout<<"Happy Alex";
            return;
        }
    }
    cout<<"Poor Alex";
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 