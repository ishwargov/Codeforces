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

void solve(){
    ll n;
    cin>>n;
    vector <ll> a(n);
    rep(i,0,n-1){
        cin>>a[i];
    }
    ll ans = 0;
    rep(i,0,n-2){
        ll div = max(a[i],a[i+1])/min(a[i],a[i+1]) + (max(a[i],a[i+1])%min(a[i],a[i+1])!=0);
        if(div>2){
            ll cur = min(a[i],a[i+1]);
            ll th = max(a[i],a[i+1]);
            while(th/cur+(th%cur!=0)>2){
                cur = cur*2;
                ans++;
            }
        }
    }
    cout<<ans;
}

int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
    int T;cin>>T;
    rep(t,1,T){
        solve();
        cout<<"\n";
    }
    //timetaken();
    return 0;
} 