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

void solve(){
    ll n,k;
    cin>>n>>k;
    ll a,b,c;
    n-=(k-3);
    if(n&1){
        a = 1;
        b = n/2;
        c = n/2;
    }
    else if(n%4!=0){
        a = n/2 - 1;
        b = n/2 - 1;
        c = 2;
    }
    else{
        a = n/2;
        b = n/4;
        c = n/4;
    }
    cout<<a<<" "<<b<<" "<<c<<" ";
    rep(i,1,k-3){
        cout<<1<<" ";
    }
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