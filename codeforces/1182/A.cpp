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
#define timetaken() cout << "\n\nTime elapsed: " << (double)(clock() - begtime)/CLOCKS_PER_SEC

ll binpow(ll a,ll b){
    ll res = 1;
    while(b>0){
        if( b&1 ) res *= a;
        a = a*a;
        b>>=1;
    }
    
    return res;
}

void solve(){
    int n;
    cin>>n;
    if(n&1){
        cout<<0;
    }
    else{
        cout<<binpow(2,n/2);
    }
}

int main(){   
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    T=1;
    rep(t,1,T){
    //    cout<<"Case #"<<t<<": ";
        solve();
        cout<<"\n";
    }
    //timetaken();
    return 0;
} 