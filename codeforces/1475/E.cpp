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

ll fac[1112],inv[1112];

ll binpow(ll a,ll b){
    if (b<=0) return 1;
    ll ret = 1;
    if(b&1){
        ret = (ret * a)%M;
    }
    ret = (ret*binpow((a*a)%M,b>>1))%M;
    return ret;
}

void init(){
    fac[0]=1;
    rep(i,1,1110){
        fac[i] = (fac[i-1]*i)%M;
    }
    inv[1110] = binpow(fac[1110],M-2);
    repi(i,1109,0){
        inv[i] = (inv[i+1]*(i+1))%M;
    }
}

ll C(ll n,ll r){
    ll ret = 1;
    ret = ret*fac[n],ret%=M;
    ret = ret*inv[n-r],ret%=M;
    ret = ret*inv[r],ret%=M;
    return ret;
}

void solve(){
    ll n,k,cnt=0;
    cin>>n>>k;
    vector <ll> a(n);
    rep(i,0,n-1){cin>>a[i];}
    sort(a.rbegin(),a.rend());
    ll mx = 0,pos=k-1;
    rep(i,0,k-1){
        mx += a[i];
        if(a[k-1]==a[i]){pos = min(pos,i);};
    }
    rep(i,0,n-1){
        if(a[i]==a[k-1]) cnt++;
    }
    //cout<<cnt<<" "<<pos<<"\n";
    //cout<<inv[5]<<" "<<fac[5]<<" "<<binpow(fac[1110],M-2)<<"\n";
    ll ans =  C(cnt,k-pos);                // (cnt)C(pos-i+1); 
    cout<<ans%M;
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