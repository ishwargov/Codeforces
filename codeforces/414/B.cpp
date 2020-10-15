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

ll dp[2005][2005];
vector <ll> fp[2005];
void init(){
    rep(i,1,2004){
        rep(j,1,2004){
            dp[i][j] = (i==1||j==1)*1;
            if(i%j==0)
                fp[i].push_back(j);
        }
    }
}
void solve(){
    ll n,k,ans=0;
    init();
    cin>>n>>k;
    rep(i,2,k){
        rep(j,2,n){
            rep(l,1,fp[j].size()){
                dp[i][j] = (dp[i][j]+dp[i-1][fp[j][l-1]])%M;
            }
        }
    }

    rep(i,1,n){
        ans = (ans+dp[k][i])%M;
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