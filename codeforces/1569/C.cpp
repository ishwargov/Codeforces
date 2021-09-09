/* SupremeLord Ishwar Govind */
#include <bits/stdc++.h>
using namespace std;
#define M  998244353
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
#define timetaken() cout << "\n\nTime elapsed: " << (double)(clock() - begtime)/CLOCKS_PER_SEC

const int MAXN = 2e5+1;
ll fac[MAXN],invfac[MAXN];

void init(){
    fac[0] = 1;
    invfac[(int)2e5] = 532999597;
    for(int i=1;i<=2e5;i++) fac[i] = (fac[i-1]*i)%M;
    for(int i=2e5-1;i>=0;i--) invfac[i] = (invfac[i+1]*(i+1))%M;
}

ll C(ll n,ll r){
    ll res = fac[n];
    res = (res*invfac[n-r])%M;
    res = (res*invfac[r])%M;
    return res;
}

void solve(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    if(a[n-1]==a[n-2]){
        cout<<fac[n];return;
    }
    if(a[n-1]-a[n-2]>1){cout<<0;return;}

    ll p=0,q=0,j=n-2;
    while(j>=0 && a[j]==a[n-2] ) q++,j--;
    p = n-1-q;
    ll ans = fac[n];
    for(int i=0;i<=p;i++){
        ll cur = (C(p,i)*fac[(p+q)-i])%M;
        cur = (cur*fac[i])%M;
        ans = (ans - cur)%M;
        ans = (ans+M)%M;
    }
    cout<<ans;
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    init();
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