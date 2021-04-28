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

const int MAXN = (int)1e5+1;
ll dp[MAXN];
void solve(){
    ll n;
    cin>>n;
    vector <ll> a(n);
    rep(i,0,n-1){ cin>>a[i];if(a[i]!=1) dp[a[i]] = 1;}
    if(n==1&&a[0]==1){
        cout<<1;
        return;
    }
    sort(a.begin(),a.end());
    rep(i,0,n-1){
        for(ll j=2;j*j<=a[i];j++){
            if(a[i]%j==0){
                //cout<<j<<" "<<dp[j]<<"\n";
                //cout<<a[i]/j<<" "<<dp[a[i]/j]<<"\n";
                dp[a[i]] = max(dp[a[i]],dp[j]+1);
                dp[a[i]] = max(dp[a[i]],dp[a[i]/j]+1);
            }
        } 
        for(ll j=2;j*j<=a[i];j++){
            if(a[i]%j==0){
                dp[j] = max(dp[j],dp[a[i]]);
                dp[a[i]/j] = max(dp[a[i]/j],dp[a[i]]);
            }
        } 
        //cout<<"$"<<a[i]<<" "<<dp[a[i]]<<"\n";
    }
    cout<<*max_element(dp,dp+(int)1e5+1);
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    return 0;
} 