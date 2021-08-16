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
#define timetaken() cout << "\n\nTime elapsed: " << (double)(clock() - begtime)/CLOCKS_PER_SEC

const int MAXN = 2e5+5;
ll dp[MAXN][3];

void solve(){
    ll l,n,r;
    cin>>n>>l>>r;
    ll len = r-l+1;
    ll L = l;
    while(L%3!=0) L++; 
    if(r>=L)
        dp[1][0] = max( (r-L+1)/3 + ((r-L+1)%3!=0),0LL);
    if(r>=L+1)
        dp[1][1] = max( (r-L+1-1)/3 + ((r-L+1-1)%3!=0),0LL) ;
    if(r>=L+2)    
        dp[1][2] = max( (r-L+1-2)/3 + ((r-L+1-2)%3!=0),0LL) ;
    rep(i,l,L-1){
        if(i<=r) dp[1][i%3]++;
    }
    //cout<<dp[1][0]<<" "<<dp[1][1]<<" "<<dp[1][2]<<"\n";
    rep(j,0,2) dp[1][j]=dp[1][j]%M;
    rep(i,2,n){
        dp[i][0] = ((dp[i-1][2]*dp[1][1])%M + (dp[i-1][0]*dp[1][0])%M + (dp[i-1][1]*dp[1][2])%M)%M ; 
        dp[i][1] = ((dp[i-1][2]*dp[1][2])%M + (dp[i-1][0]*dp[1][1])%M + (dp[i-1][1]*dp[1][0])%M)%M ; 
        dp[i][2] = ((dp[i-1][2]*dp[1][0])%M + (dp[i-1][0]*dp[1][2])%M + (dp[i-1][1]*dp[1][1])%M)%M ; 
    }
    cout<<dp[n][0];
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 