/* XxSupremeLordxX Ishwar Govind */
#include <bits/stdc++.h>
using namespace std;
#define M 100000000 
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

ll dp[111][111][2];

void solve(){
    ll n1,n2,k1,k2;
    cin>>n1>>n2>>k1>>k2;
    dp[0][0][0]=1,dp[0][0][1]=1;
    rep(i,0,n1){
        rep(j,0,n2){
            for(int k=1;k<=min(i,k1);k++){
                dp[i][j][0] += dp[i-k][j][1]; 
                dp[i][j][0]%=M;
            }   
            for(int k=1;k<=min(j,k2);k++){
                dp[i][j][1] += dp[i][j-k][0]; 
                dp[i][j][1]%=M;
            }
            //cout<<dp[i][j][0]<<" "<<dp[i][j][1]<<"\n";
        }
    }
    cout<<(dp[n1][n2][1]+dp[n1][n2][0])%M;
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 