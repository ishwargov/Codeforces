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
    ll n,m,b,g,ans=1;cin>>n>>m;
    ll gc = __gcd(n,m);
    vector<bool>a(gc,0); 
    cin>>b;
    rep(i,0,b-1) {ll inp;cin>>inp;a[(inp%gc)]=1;}
    cin>>g;
    rep(i,0,g-1) {ll inp;cin>>inp;a[(inp%gc)]=1;}
    rep(i,0,gc-1) {ans = (ans&a[i]);}
    if(ans) cout<<"Yes";
    else cout<<"No";   
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 