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

bool check(ll a,ll b,ll c,ll ix){
    if(min(a,c)<=b&&max(a,c)>=b) return false;
    else return true;
}

void solve(){
    ll n;
    cin>>n;
    vector <ll> a(n);
    rep(i,0,n-1) cin>>a[i];

    ll ans = n+n-1;
    rep(i,0,n-3){
        if(check(a[i],a[i+1],a[i+2],i)) ans++;
    }
    rep(i,0,n-4){
        bool ok = true;
        ok = ok && check(a[i],a[i+1],a[i+2],i);
        ok = ok && check(a[i+1],a[i+2],a[i+3],i);
        ok = ok && check(a[i],a[i+2],a[i+3],i);
        ok = ok && check(a[i],a[i+1],a[i+3],i);
        if(ok) ans++;
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