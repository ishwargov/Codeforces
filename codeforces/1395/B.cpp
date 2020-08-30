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

void check(ll n,ll m,ll x,ll y){
    ll dp[n+1][m+1];
    for(ll i = 0;i < n;i++)
        for(ll j=0;j<m;j++)
            dp[i][j]=0;
    dp[x-1][y-1] = 1;
    ll cur[2] = {x-1,y-1};
    cout<<cur[0]+1<<" "<<cur[1]+1<<"\n";
    ll t=0;
    while(cur[0]<n){
        cur[1]=0;

        while(cur[1]<m){
            if(dp[cur[0]][cur[1]]!=1){
                dp[cur[0]][cur[1]]=1;
                cout<<cur[0]+1<<" "<<cur[1]+1<<"\n";
                t = cur[1];
            }
            cur[1]++;
        }
        cur[1] = t;
        cur[0]++;
        if(dp[cur[0]][cur[1]]==0){
            cout<<cur[0]+1<<" "<<cur[1]+1<<"\n";
            dp[cur[0]][cur[1]]=1;
        }
    }
    cur[0]=x-2;
    //cout<<"the index is "<<cur[0]+1<<" "<<cur[1]+1<<"\n";
    if(dp[cur[0]][cur[1]]==0){
            cout<<cur[0]+1<<" "<<cur[1]+1<<"\n";
            dp[cur[0]][cur[1]]=1;
    }
    while(cur[0]>=0){
        cur[1]=0;
        ll t=0;
        while(cur[1]<m){
            if(dp[cur[0]][cur[1]]!=1){
                dp[cur[0]][cur[1]]=1;
                cout<<cur[0]+1<<" "<<cur[1]+1<<"\n";
                t = cur[1];
            }
            cur[1]++;
        }
        cur[1]=t;
        cur[0]--;
        if(dp[cur[0]][cur[1]]==0){
            cout<<cur[0]+1<<" "<<cur[1]+1<<"\n";
            dp[cur[0]][cur[1]]=1;
        }
    }
}

void solve(){
    ll n,m,x,y;
    cin>>n>>m;
    cin>>x>>y;
    check(n,m,x,y);
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
}