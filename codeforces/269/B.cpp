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

ll dp[5555];
void solve(){
    ll n,k;
    cin>>n>>k;
    vector <ll> a(n);
    rep(i,0,n-1){
        double x;
        cin>>a[i]>>x;
    }
    //LNDS
    rep(i,0,n-1){
		ll j = a[i]-1;
		repi(k,j,0){
			dp[j] = max(dp[j], 1+dp[k]);
		}
	}
    ll ans = 0;
    rep(i,0,n-1){
        ans = max(dp[i],ans);
    }
    cout<<n-ans;
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 