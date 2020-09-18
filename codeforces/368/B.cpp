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
ll chk[(int)1e5+1]={0};
ll dp[(int)1e5+1]={0};
void solve(){
    ll n,m,inp;
    cin>>n>>m;
    vector <ll> a,b;
    rep(i,0,n-1){
        cin>>inp;
        a.pb(inp);
    }
    rep(i,0,m-1){
        cin>>inp;
        b.pb(inp);
    }
    
    dp[n-1]=1,chk[a[n-1]]++;
    repi(i,n-2,0){
        dp[i] = dp[i+1];
        if(chk[a[i]]<1){
            dp[i]++;
        }
        chk[a[i]]++;
    }
    rep(i,0,m-1){
        cout<<dp[b[i]-1]<<"\n";
    }
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 