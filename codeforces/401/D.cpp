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

const int MAXN = (1<<18)+5;
ll dp[MAXN][111];

void solve(){
    ll n,m;
    cin>>n>>m;
    ll num=0,mp[20]={0},dig[10]={0};
    while(n>0){
        mp[num++] = n%10;
        dig[n%10]++;
        n /= 10;
    }
    dp[0][0]=1;
    ll N = 1<<num;
    rep(i,0,num-1){
        if(mp[i])    
            dp[1<<i][mp[i]%m] += dp[0][0]; 
    }
    rep(i,1,N-1){
        rep(j,0,m){
            rep(k,0,num-1){
                if(!dp[i][j]) continue;
                if(!(i&1<<k)){
                    dp[i|(1<<k)][ (j*10 + mp[k])%m ] += dp[i][j];
                }
            }
        }
    }
    ll ans = dp[N-1][0];
    rep(i,0,9){
        rep(j,1,dig[i]){
            ans = ans/j;
        }
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