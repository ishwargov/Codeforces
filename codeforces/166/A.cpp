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
    ll n,k,x,y;
    cin>>n>>k;
    vector <pair<ll,ll>> a;
    rep(i,0,n-1){
        cin>>x>>y;
        a.pb(mp(x,y));
    }
    sort(a.begin(),a.end(),[](pair<ll,ll> &x,pair <ll,ll> &y){
        if(x.fi>y.fi)
            return 1;
        else if(x.fi==y.fi&&x.se<y.se)
            return 1;
        return 0;
    });
    ll pos = k-1,cnt=1;
    x = a[pos].fi;
    y = a[pos].se;
    for(ll i=pos-1;i>=0;i--){
        if(x==a[i].fi&&y==a[i].se)
            cnt++;
        else
            break;
    }
    for(ll i=pos+1;i<n;i++){
        if(x==a[i].fi&&y==a[i].se)
            cnt++;
        else
            break;
    }
    cout<<cnt;
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 