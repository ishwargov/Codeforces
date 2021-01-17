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

ll dp[5555][5555];
void solve(){
    ll n,m,k;
    cin>>n>>m>>k;
    vector <ll> a(n),s(n+1,0);
    rep(i,0,n-1){cin>>a[i];}
    s[0]=a[0];
    rep(i,1,n-1){
        s[i] = s[i-1] + a[i];
    }
    rep(i,1,k){
        rep(j,0,n-1){
            if(i*m>j+1)
                dp[i][j] = 0;
            else{
                dp[i][j] = max((j>0)?dp[i][j-1]:0 , dp[i-1][j-m]+s[j] - ((j-m<0)?0:s[j-m]) );
            }
            //cout<<dp[i][j]<<" ";
        }
        //cout<<"\n";
    }
    cout<<dp[k][n-1];
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 