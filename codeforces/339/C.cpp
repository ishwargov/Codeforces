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

int dp[12][12][1111];
pair<int,int> pre[12][12][1111];

void solve(){
    string s;ll m;
    stack <ll> ans;
    cin>>s;
    cin>>m;
    vector <ll> w;
    rep(i,0,s.size()-1){
        if(s[i]=='1'){
            w.pb(i+1);
        }
    }
    if(w.size()==0){cout<<"NO\n";return;}
    //(i,j,k) -> (x-i,x!=j,k+1)
    ll k=1;

    rep(q,0,w.size()-1){
        dp[w[q]][w[q]][k] = 1;
    }
    k=2;
    while(k<=m){
        rep(p,1,10){
            rep(j,1,10)
            rep(q,0,w.size()-1){
                if(dp[p][j][k-1]&&w[q]-p>0&&w[q]!=j&&w[q]-p<=10){
                    dp[w[q]-p][w[q]][k] = 1;
                    pre[w[q]-p][w[q]][k] = {p,j};
                }
            }
        }
        k++;
    }
    rep(i,0,10){
        rep(j,0,10){
            if(dp[i][j][m]){
                cout<<"YES\n";
                pair<int,int> cur = {i,j};
                k = m;
                while(k>0){
                    ans.push(cur.se);
                    cur = pre[cur.fi][cur.se][k];
                    k--;
                }
                while(ans.size()>0){cout<<ans.top()<<" ";ans.pop();}
                return;
            }
        }
    }
    cout<<"NO\n";
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 