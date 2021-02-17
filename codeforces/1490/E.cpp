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
    vector <pair<ll,ll>> ar;
    rep(i,0,n-1){
        cin>>a[i];
        ar.pb({a[i],i+1});
    }
    sort(ar.begin(),ar.end());
    vector <ll> s(n+1,0);
    rep(i,0,n-1){
        s[i+1] = s[i] + ar[i].fi;
    }
    vector <ll> ans;
    ll sum = 0,las=-1;
    rep(i,0,n-1){
        if(sum<ar[i].fi){
            las = i;
        }
        sum += ar[i].fi;
    }
    rep(i,las,n-1){
        ans.pb(ar[i].se);
    }
    sort(ans.begin(),ans.end());
    cout<<ans.size()<<"\n";
    for(auto x:ans){
        cout<<x<<" ";
    }
}
 
int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
    int T;cin>>T;
    rep(t,1,T){
        solve();
        cout<<"\n";
    }
    return 0;
} 