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

ll pow3[(int)1e7];
void solve(){
    ll n;
    cin>>n;
    vector<ll> dp(n+1,0);
    dp[2] = 3;
    rep(i,3,n){
        dp[i] = ((pow3[i-1] - dp[i-1])%M + M)%M;
    }
    cout<<dp[n];
}   

int main(){
    pow3[0] = 1;   
    rep(i,1,1e7){
        pow3[i] = (pow3[i-1]*3)%M;
    }
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 