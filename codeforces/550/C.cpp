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

ll dp[111][8];
ll pre[111][8];

void solve(){
    string s;
    cin>>s;
    ll n = s.size();
    memset(dp,0,sizeof(dp));
    memset(pre,-1,sizeof(pre));

    dp[0][(s[0]-'0')%8] = 1;
    //cout<<dp[0][0]<<" "<<dp[0][3]<<"\n";
    rep(i,1,n-1){
        dp[i][(s[i]-'0')%8] = 1;
        rep(j,0,7){
            if(dp[i-1][j]==1){
                dp[i][(j*10+s[i]-'0')%8] = 1;
                pre[i][(j*10 + s[i]-'0')%8] = j;
                dp[i][j] =  1;
                pre[i][j] = j;
            }
        }
    }
    rep(i,0,n-1){
        if(dp[i][0]==1){
            string ans = "";
            ll p=i,q=0;
            ll flag = 1;
            while(flag){
                if(pre[p][q]==-1||pre[p][q]!=q){
                    ans = ans + string(1,s[p]);
                    //cout<<s[p]<<" "<<p<<" "<<q<<" "<<pre[p][q]<<" ";
                }
                if(pre[p][q]==-1){
                    flag=0;
                    break;
                }
                q = pre[p][q];
                p--;
            }
            cout<<"Yes\n";
            reverse(ans.begin(),ans.end());
            cout<<ans;
            return;
        }
    }
    cout<<"No";
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 