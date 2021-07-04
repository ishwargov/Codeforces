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

ll binpow(ll a,ll b){
    ll res = 1,p=a,q=b;
    while(q>0){
        if(q&1) res*=p;
        q/=2;
        p*=p;
    }
    return res;
}

void solve(){
    ll n,a,b;
    cin>>n>>a>>b;
    //cout<<binpow(2,10)<<"\n";
    for(int i=0;binpow(a,i)<=n&&i<=30;i++){
        if((n-binpow(a,i))%b==0){
            cout<<"Yes";
            return;
        }
    }
    cout<<"No";
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