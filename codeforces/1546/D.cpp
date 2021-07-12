/* SupremeLord Ishwar Govind */
#include <bits/stdc++.h>
using namespace std;
#define M 998244353
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

const int MAXN = 1e5+5;
ll fac[MAXN],invfac[MAXN];

ll C(ll n, ll r){
    ll res = 1;
    res = ((res%M)*(invfac[n-r]%M))%M;
    res = ((res%M)*(invfac[r]%M))%M;
    res = ((res%M)*(fac[n]%M))%M;
    return res%M;
}

ll binpow(ll a,ll b){
    ll res = 1;
    while(b>0){
        if(b&1){
            res = ((res%M)*(a%M))%M;
        }
        a = ((a%M)*(a%M))%M;
        b/=2;
    }
    return res;
}

void init(){
    fac[0] = 1;
    rep(i,1,MAXN-1){
        fac[i] = ((fac[i-1]%M)*(i%M))%M;
    }
    invfac[MAXN-1] = binpow(fac[MAXN-1],M-2); 
    repi(i,MAXN-1,1){
        invfac[i-1] = ((invfac[i]%M)*(i%M))%M;
    }
}

void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll m=0,p=0;
    rep(i,0,n-1){
	if(s[i]=='1'&&i+1<n&&s[i+1]=='1'){
	    m++;
	    i++;
	}
	else if(s[i]=='0')
	    p++;	
    }
    //cout<<fac[5]<<" "<<invfac[5]<<" "<<binpow(2,10);
    cout<<C(p+m,m);
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
