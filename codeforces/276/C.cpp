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

ll dp[222222],rang[222222];
vector<ll> a;
void solve(){
    ll n,m;
    cin>>n>>m;
    a.resize(n);
    rep(i,0,n-1){cin>>a[i];}
    sort(a.begin(),a.end());
    rep(i,0,m-1){
        ll x,y;
        cin>>x>>y;
        rang[x-1]++;
        rang[y]--;
    }
    dp[0] = rang[0];
    //cout<<rang[0]<<" ";
    rep(i,1,n-1){
        dp[i] = dp[i-1] + rang[i];
        //cout<<rang[i]<<" ";
    }
    sort(dp,dp+n);
    ll ans = 0;
    rep(i,0,n-1){
        ans += dp[i]*a[i];
    }
    cout<<ans;
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 