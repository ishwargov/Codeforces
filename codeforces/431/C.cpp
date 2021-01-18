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

ll dp1[111],dp2[111];
void solve(){
    ll n,k,d;
    cin>>n>>k>>d;
    rep(i,1,k){
        if(i>=d) dp2[i] = 1;
        else dp1[i] = 1;
    }
    rep(i,1,n){
        rep(j,1,min(i,k)){
            if(j<d){
                dp1[i] += dp1[i-j];
                dp2[i] += dp2[i-j];
            }
            else{
                dp2[i] += dp1[i-j];
                dp2[i] += dp2[i-j];
            }
            dp1[i] = dp1[i]%M;
            dp2[i] = dp2[i]%M;
        }
    }
    cout<<dp2[n];
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 