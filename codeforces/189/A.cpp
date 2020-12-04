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
    ll n,a,b,c;
    cin>>n;
    cin>>a>>b>>c;
    ll dp[n+2];
    ll k = INT_MIN;
    fill(dp,dp+n+1,k);
    dp[0]=0;
    rep(i,0,n){
        if(i>=a)
            if(dp[i-a]+1>dp[i])
                dp[i] = dp[i-a]+1;
        if(i>=b)
            if(dp[i-b]+1>dp[i])
                dp[i] = dp[i-b]+1;
        if(i>=c)
            if(dp[i-c]+1>dp[i])
                dp[i] = dp[i-c]+1;
    }
    cout<<dp[n];
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 