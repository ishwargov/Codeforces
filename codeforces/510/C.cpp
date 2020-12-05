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

int vis[27];
int e[27][27];
list <int> lex;

int dfs(int u){
    int v = 0;
    vis[u] = 1;
    for(int i=0;i<=25;i++){
        if(e[u][i]==1){
            if(vis[i]==1){
                return 1;
            }
            if(vis[i]==0){
                v = (v||dfs(i));
            }
        }
    }
    lex.push_front(u);
    vis[u] = 2; 
    return v;
}


void solve(){
    ll n;
    cin>>n;
    string s[n+1];
    rep(i,0,n-1){
        cin>>s[i];
    }
    rep(i,0,n-1){
        rep(j,i+1,n-1){
            int flag=0;
            for(ll k=0;k<s[i].size()&&k<s[j].size();k++){
                if(s[i][k]!=s[j][k]){
                    flag = 1;
                    e[s[i][k]-'a'][s[j][k]-'a']=1;
                    break;
                }
            }
            if(flag!=1&&s[j].size()<s[i].size()){
                cout<<"Impossible\n";
                return;
            }
        }
    }

    fill(vis,vis+26,0);
    rep(i,0,25){
        if(vis[i]==0){
            if(dfs(i)){
                cout<<"Impossible\n";
                return;
            }
        }
    }

    for(auto i=lex.begin();i!=lex.end();i++){
        cout<<(char)((*i)+97);
    }

}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();  
    return 0;
} 