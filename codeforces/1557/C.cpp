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

const int MAXN = 2e5+5;
ll dp[2][MAXN],pow2[MAXN];

void init(){
    pow2[0] = 1;
    rep(i,1,MAXN-1) pow2[i] = (pow2[i-1]*2)%M;
}

void solve(){
    ll n,k;
    cin>>n>>k;
    if(k==0){ cout<<1; return; }
    if(n&1){
        //cout<<"odd";
        dp[1][1] = pow2[n-1] + 1;
        dp[0][1] = pow2[n-1] - 1;
        rep(i,2,k){
           dp[1][i] = ((pow2[n-1]+1)*(dp[1][i-1]))%M;
           dp[0][i] = ( ((pow2[n-1]+1)*dp[0][i-1])%M + ((pow2[n-1]-1)*(dp[0][i-1]+dp[1][i-1]))%M)%M;
        }
    }
    else{
        dp[1][1] = pow2[n-1];
        dp[0][1] = pow2[n-1];
        rep(i,2,k){
           dp[1][i] = ( (dp[0][i-1] + dp[1][i-1])%M + (dp[1][i-1]*(pow2[n-1]-1)%M ) )%M;
           dp[0][i] = ( (dp[0][i-1]*(pow2[n-1]-1))%M + (pow2[n-1]*( (dp[0][i-1]+dp[1][i-1])%M ) )%M )%M;
        }
    }
    cout<<dp[1][k];
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    init();
    int T;
    cin>>T;
    rep(t,1,T){
    //    cout<<"Case #"<<t<<": ";
        solve();
        cout<<"\n";
    }
    //timetaken();
    return 0;
} 