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
    ll n,l,r;
    cin>>n>>l>>r;
    vector <ll> a(n);
    rep(i,0,n-1) cin>>a[i];
    sort(a.begin(),a.end());
    ll ans = 0;
    rep(i,0,n-1){
        ll x,y;
        x = lower_bound(a.begin()+i+1,a.end(),l-a[i])-a.begin();
        y = upper_bound(a.begin()+i+1,a.end(),r-a[i])-a.begin();
        ans += (y-x);
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