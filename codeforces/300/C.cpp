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
#define rep(i,k,n) for(ll i=k;i<=n;i++)
#define repi(i,k,n) for(ll i=k;i>=n;i--)
clock_t begtime = clock();
#define timetaken() cout << "\n\nTime elapsed: " << (float)(clock() - begtime)/1000.0

ll fac[(int)1e7+1],inv[(int)1e7+1];

bool chk(ll i,ll a,ll b){
    while(i>0){
        if(i%10!=a&&i%10!=b)
            return false;
        i=i/10;
    }
    return true;
}

ll nC(ll i,ll n){
    ll ret = 1;
    ret = (ret%M * fac[n]%M)%M;
    ret = (ret%M * inv[i]%M)%M;
    ret = (ret%M * inv[n-i]%M)%M;
    return ret;
}

ll binpow(ll a, ll b) {
    ll res = 1;
    while (b > 0) {
        if (b & 1)
            res = (res%M * a%M)%M;
        a = (a%M * a%M)%M;
        b >>= 1;
    }
    return res%M;
}

void solve(){
    ll a,b,n;
    ll ans = 0;
    cin>>a>>b>>n;
    //cout<<inv[5]<<" "<<fac[5]<<"\n";
    rep(i,0,n){
        if(chk(i*a+(n-i)*b,a,b)){
            ans = (ans%M + nC(i,n)%M)%M;
        }
    }
    cout<<ans;
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    fac[0] = 1;
    rep(i,1,1e7){
        fac[i] = (i%M*fac[i-1]%M)%M;
    }
    inv[(int)1e7] = binpow(fac[(int)1e7],M-2);
    repi(i,1e7-1,0){
        inv[i] = (inv[i+1]%M*(i+1)%M)%M;
    }
    solve();
    //timetaken();
    return 0;
} 