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

ll lcm(ll a,ll b){
    return(a*b/__gcd(a,b));
}

void solve(){
    ll a[4],d;
    rep(i,0,3){
        cin>>a[i];
    }
    cin>>d;
    ll ans = 0;
    ans = d/a[0] + d/a[1] + d/a[2] +d/a[3];
    rep(i,0,3){
        rep(j,i+1,3){
                ans += -d/lcm(a[i],a[j]);
        }
    }
    ans += d/lcm(lcm(a[0],a[1]),lcm(a[1],a[2])) + d/lcm(lcm(a[1],a[2]),lcm(a[2],a[3])) + d/lcm(lcm(a[2],a[3]),lcm(a[3],a[0])) + d/lcm(lcm(a[3],a[0]),lcm(a[0],a[1])); 
    ans += -d/lcm(lcm(a[0],a[1]),lcm(a[2],a[3]));
    cout<<ans;
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
}   