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

ll get_ans(vector <ll> a,vector <ll> b){
    ll n = a.size(),m = b.size();
    vector <ll> sfx(n+1,0);
    repi(i,n-1,0){
        sfx[i] = sfx[i+1] + binary_search(b.begin(),b.end(),a[i]);
    }
    ll ans = 0;
    rep(i,0,n){
        ll cnt = 0;
        if (i > 0) {
            ll start = lower_bound(b.begin(), b.end(), a[i - 1]) - b.begin();
            ll end = i < n ? lower_bound(b.begin(), b.end(), a[i]) - b.begin() : m;

            for (ll j = start; j < end; j++) {
                ll cutoff = upper_bound(b.begin(), b.end(), b[j] - i) - b.begin();
                cnt = max(cnt, j - cutoff + 1);
            }
        }
        ans = max(ans, cnt + sfx[i]);
    }
    return ans;
}

void solve(){
    ll n,m;
    cin>>n>>m;
    vector <ll> a(n),b(m),an,ap,bn,bp;
    rep(i,0,n-1){
        cin>>a[i];
        if(a[i]<0) an.pb(-a[i]);
        else ap.pb(a[i]);
    }
    rep(i,0,m-1){
        cin>>b[i];
        if(b[i]<0) bn.pb(-b[i]);
        else bp.pb(b[i]);
    }
    reverse(an.begin(),an.end());
    reverse(bn.begin(),bn.end());
    ll ans = get_ans(ap,bp) + get_ans(an,bn);
    cout<<ans;
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