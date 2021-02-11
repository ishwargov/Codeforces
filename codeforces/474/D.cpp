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

ll k,dp[(int)1e5+5],s[(int)1e5+5];

void solve(){
    ll a,b;
    cin>>a>>b;
    cout<<(s[b]-s[a-1]+M)%M;
    //cout<<dp[4];
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    int T;
    cin>>T>>k;
    dp[0] = 1;
    rep(i,1,1e5+1){
        dp[i] = (dp[i-1] + (i>=k?dp[i-k]:0))%M;
    }
    s[0] = 1;
    rep(i,1,1e5+1){
        s[i] = (s[i-1] + dp[i])%M;
    }
    rep(t,1,T){
        //cout<<"Case #"<<t<<": ";
        solve();
        cout<<"\n";
    }
    //timetaken();
    return 0;
} 