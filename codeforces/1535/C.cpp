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

const int MAXN = 2e5+1;
ll dp[MAXN][2];

void solve(){
    string s;
    cin>>s;
    memset(dp,0,sizeof(dp));
    if(s[0]!='?') dp[0][s[0]-'0']++;
    else dp[0][0]++,dp[0][1]++;

    rep(i,1,s.size()-1){
       if(s[i]!='?') dp[i][s[i]-'0'] = 1+dp[i-1][(s[i]-'0')^1];
       else dp[i][0]=dp[i-1][1]+1,dp[i][1]=1+dp[i-1][0];
    }
    ll ans = 0;
    rep(i,0,s.size()-1){
        ans+=max(dp[i][0],dp[i][1]);
    }
    cout<<ans;
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
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