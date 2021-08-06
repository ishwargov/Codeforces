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

const int MAXN = 2e5+5;
ll t[MAXN*2];

void build(vector <ll> a,ll n){
    rep(i,0,n-1){t[n+i] = a[i];}
    repi(i,n-1,1){t[i] = __gcd(t[i<<1],t[i<<1 | 1]);}
}

ll get_gcd(ll l,ll r,ll n){
    ll res = 0;
    for(l+=n,r+=n;l<r;l>>=1,r>>=1){
        if(l&1) res = __gcd(res,t[l++]);
        if(r&1) res = __gcd(res,t[--r]);    
    }
    return res;
}

void solve(){
    ll n;
    cin>>n;
    vector<ll> a(n+1,0),diff(n,0);
    rep(i,0,n-1) cin>>a[i];
    ll ans = 1,cnt=0;
    rep(i,0,n-1){
        if(a[i]==1) cnt++;
        else cnt = 0;
        ans = max(ans,cnt);
    }
    rep(i,0,n-2){
        diff[i] = abs(a[i+1] - a[i]);
    }
    memset(t,0,sizeof(t));
    build(diff,n-1);
    for(ll i=0;i<n-1;i++){
        ll l = i,r = n-2,m;
        while(l<=r){
            m = l+(r-l)/2;
            if(get_gcd(i,m+1,n-1)>1){
                ans = max(ans,m-i+2);
                l = m+1;
            }
            else{
                if(m-i+2<=ans) break;
                r = m-1;
            }
        }
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