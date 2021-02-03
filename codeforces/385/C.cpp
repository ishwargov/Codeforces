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
clock_t begtime = clock();
#define timetaken() cout << "\n\nTime elapsed: " << (float)(clock() - begtime)/1000.0

ll n,m;
vector <ll> a,prime;
bool isprime[(int)1e7+3];
ll s[(int)1e7+3],f[(int)1e7+3],cnt[(int)1e7+2];

void init(){
    memset(isprime,true,sizeof(isprime));
    isprime[1] = false,isprime[0] = false;
    for(ll i=2;i*i<=1e7+2;i++){
        if(isprime[i]){
            for(ll j=i*i;j<1e7+1;j+=i){
                isprime[j]=false;
            }
        }    
    }
    rep(i,2,1e7+1){
        if(isprime[i]) prime.pb(i);
    }
}

void solve(){
    cin>>n;
    a.resize(n);
    rep(i,0,n-1){
        cin>>a[i];
        cnt[a[i]]++;
    }
    ll mx = *max_element(a.begin(),a.end());
    for(ll i=0;i<prime.size();i++){
        for(ll j = prime[i];j<=min((ll)1e7,mx);j+=prime[i])
            f[prime[i]] += cnt[j];
    }
    rep(i,1,1e7+1){
        if(isprime[i+1])
            s[i+1] = s[i] +  f[i+1];
        else
            s[i+1] = s[i];
    }
    cin>>m;
    rep(i,0,m-1){
        ll l,r; 
        cin>>l>>r;
        ll ans = ((r<=mx)?s[r]:s[mx]) - ((l-1<=mx)?s[l-1]:s[mx]);
        cout<<ans<<"\n";
    }
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    init();
    solve();
    //timetaken();
    return 0;
} 