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

void solve(){
    ll n,m,ans=0;
    cin>>n>>m;
    string s,t;
    cin>>s;
    cin>>t;
    vector <ll> lft(m+1),rgt(m+1);
    ll p=0;
    rep(i,0,n-1){
        if(p>=m) break;
        if(s[i]==t[p]){
            lft[p] = i+1;
            p++;
        }
    }
    p=m-1;
    repi(i,n-1,0){
        if(p<0) break;
        if(s[i]==t[p]){
            rgt[p] = i+1;
            p--;
        }
    }
    rep(i,0,m-2){
        ans = max(ans,rgt[i+1]-lft[i]);
    }
    cout<<ans;
}

int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
    solve();
    return 0;
} 