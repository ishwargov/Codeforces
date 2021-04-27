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

const ll MAXN = 3333;
ll dp[MAXN][2];

void solve(){
    ll n;
    cin>>n;
    vector <ll> a(n),b(n),c(n);
    rep(i,0,n-1) cin>>a[i];
    rep(i,0,n-1) cin>>b[i];
    rep(i,0,n-1) cin>>c[i];
    dp[0][0] = a[0],dp[0][1] = b[0];
    rep(i,1,n-1){
        dp[i][0] = max(a[i]+dp[i-1][1],b[i]+dp[i-1][0]);
		dp[i][1] = max(b[i]+dp[i-1][1],c[i]+dp[i-1][0]);
    }
    cout<<dp[n-1][0];
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    return 0;
} 