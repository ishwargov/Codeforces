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
#define rep(i,k,n) for(ll i=k;i<=n;i++)
#define repi(i,k,n) for(ll i=k;i>=n;i--)
clock_t begtime = clock();
#define timetaken() cout << "\n\nTime elapsed: " << (float)(clock() - begtime)/1000.0

ll maap[111111],dp[111111];
void solve(){
    ll n;
    cin>>n;
    memset(maap,0,sizeof(maap));
    vector <ll> a(n);
    rep(i,0,n-1){
        cin>>a[i];
        maap[a[i]]++;
    }
    dp[1] = maap[1];
    rep(i,2,(ll)(1e5)){
        dp[i] = max(dp[i-1],dp[i-2]+maap[i]*i);
    }
    cout<<dp[(int)1e5];
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 