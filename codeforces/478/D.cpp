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

int a,b,i,sum,dp[200005],j,ans;
bool FLAG;

void solve(){
    cin>>a>>b;
    dp[0]=1;
    int maxh = 1000;//(int)sqrt(2*(a+b+1));
    for (i=1; i<=maxh; i++)
    {
        sum=i*(i+1)/2; FLAG=0;
        for (j=a; j>=0; j--)
        {
            if (sum-j>b) dp[j]=0;
            if (j>=i) dp[j]=(dp[j]+dp[j-i])%M;
            if (dp[j]>0) FLAG=true;
        }
        if (!FLAG) {cout<<ans;return;}
        ans=0;
        for (j=0; j<=a; j++) ans=(ans+dp[j])%M;
    }
    return;
}

int main(){   
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    //timetaken();
    return 0;
}