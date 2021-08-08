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
#define timetaken() cout << "\n\nTime elapsed: " << (float)(clock() - begtime)/1000.0

unordered_map<ll,ll> pre;
ll a,b;

void dfs(ll u){
    if(u>=b) return;
    else{
        //cout<<u<<" ";
        if(pre.find(2*u)==pre.end()){ 
            pre[2*u] = u;
            dfs(2*u);
        }
        if(pre.find(10*u+1)==pre.end()){
            pre[10*u+1]=u;
            dfs(10*u+1);
        }
    }
}

void solve(){
    cin>>a>>b;
    dfs(a);
    if(pre.find(b)!=pre.end()){
        cout<<"YES\n";
        vector<ll> ans;
        ll i=b;
        while(pre.find(i)!=pre.end()){
            ans.pb(i);
            i = pre[i];
        }
        ans.pb(a);
        reverse(ans.begin(),ans.end());
        cout<<ans.size()<<"\n";
        for(auto x:ans){
            cout<<x<<" ";
        }
    }
    else{
        cout<<"NO";
    }
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 