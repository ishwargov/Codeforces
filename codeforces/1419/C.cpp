/* XxSupremeLordxX Ishwar Govind */
#include <bits/stdc++.h>
using namespace std;
#define M 1000000007
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
void solve(){
    ll n,x,s=0;
    vector <ll> A;
    cin>>n>>x;
    rep(i,0,n-1){
        ll inp;cin>>inp;
        A.pb(inp);
    }
    if (all_of(A.begin(), A.end(), [&](ll a) { return a == x; }))
        cout << 0 ;
    else if (accumulate(A.begin(), A.end(), 0) == n * x || find(A.begin(), A.end(), x) != A.end())
        cout << 1 ;
    else
        cout << 2 ;

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