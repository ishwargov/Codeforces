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
#define timetaken() cout << "\n\nTime elapsed: " << (double)(clock() - begtime)/CLOCKS_PER_SEC

double dp[101][101][101];

void solve(){
    ll r,s,p;
    cin>>r>>s>>p;   
    dp[r][s][p] = 1;
    for(int i=r;i>=0;i--){
        for(int j=s;j>=0;j--){
            for(int k=p;k>=0;k--){
                if(i+j==0||j+k==0||k+i==0) continue;
                double cur = dp[i][j][k];
                if(i-1>=0) dp[i-1][j][k] += cur * (double)(k*i) / (double)(i*j + j*k + k*i);
                if(j-1>=0) dp[i][j-1][k] += cur * (double)(j*i) / (double)(i*j + j*k + k*i);
                if(k-1>=0) dp[i][j][k-1] += cur * (double)(k*j) / (double)(i*j + j*k + k*i);
            }
        }
    }
    double cur = 0;
    for(int i=1;i<=r;i++) cur+=dp[i][0][0];
    cout<<fixed<<setprecision(12)<<cur<<"\n";cur=0;
    for(int i=1;i<=s;i++) cur+=dp[0][i][0];
    cout<<fixed<<setprecision(12)<<cur<<"\n";cur=0;
    for(int i=1;i<=p;i++) cur+=dp[0][0][i];
    cout<<fixed<<setprecision(12)<<cur<<"\n";cur=0;
    
}

int main(){   
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 