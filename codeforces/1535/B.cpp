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
    ll n;
    cin>>n;
    vector <ll> a(n),ev,od;
    rep(i,0,n-1){ 
        cin>>a[i];
        if(a[i]%2==0) ev.pb(a[i]);
        else od.pb(a[i]);
    }
    
    ll cnt=0;
    sort(ev.rbegin(),ev.rend());
    sort(od.rbegin(),od.rend());
    for(int i=0;i<od.size();i++){
        ev.pb(od[i]);
    }
    rep(i,0,n-1){
        rep(j,i+1,n-1){
            if(__gcd(ev[i],2*ev[j])>1) cnt++;
        }
    }
    cout<<cnt;
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