/* XxSupremeLordxX Ishwar Govind */
#include <bits/stdc++.h>
using namespace std;
#define M 1000000009
#define ll long long int
#define fi first    
#define se second
#define pb push_back
#define mp make_pair
#define ub upper_bound
#define lb lower_bound
#define rep(i,k,n) for(ll i=k;i<=n;i++)
#define repi(i,k,n) for(ll i=k;i>=n;i--)

void solve(){
    ll st,di;
    cin>>st>>di;
    if(st==0||di==0){
        cout<<"0";
        return;
    }
    ll mx,mn;
    mx = max(st,di);
    mn = min(st,di);

        if(mx/2>=mn){
            cout<<mn;
            return;
        }
        else{
            ll n = mx-mn;
            mx = mx -2*n;
            mn = mn -n;
            cout<<2*mn/3+n;
        }

}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    int T;
    cin>>T;
    rep(t,1,T){
        solve();
        cout<<"\n";
    }
    return 0;
}