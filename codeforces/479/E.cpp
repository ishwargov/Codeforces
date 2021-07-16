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

ll dp[5555][5555],s[5555];

void solve(){
    ll n,a,b,k;
    cin>>n>>a>>b>>k;
    dp[a][0] = 1;
    for(ll i=1;i<=k;i++){
        memset(s,0,sizeof(s));
        for(ll p=1;p<=n;p++){
            s[p] = (s[p-1] + dp[p][i-1])%M;
        }
        for(ll j=1;j<=n;j++){
            ll l,r,dis = abs(b-j);
            if(j<b){
                l = 1;
                r = j+(dis-1)/2;
            }
            else if(j>b){
                l = j-(dis-1)/2;
                r = n;
            }
            else{
                continue;
            }
            dp[j][i] = (s[r] - s[l-1])%M;
            dp[j][i] = dp[j][i]<0?dp[j][i]+M:dp[j][i];
            dp[j][i] = (dp[j][i] - dp[j][i-1])%M;
            dp[j][i] = dp[j][i]<0?dp[j][i]+M:dp[j][i];
        }
    }
    ll ans = 0;
    for(ll i=1;i<=n;i++){
        //cout<<dp[i][k]<<" ";
        ans = (ans+dp[i][k])%M;
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