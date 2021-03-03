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
    ll n,u,r,d,l;
    cin>>n>>u>>r>>d>>l;
    rep(i,0,15){
        ll p[4] = {u,r,d,l};
        if(i&1) p[0]--,p[3]--;
        if(i&2) p[0]--,p[1]--;
        if(i&4) p[1]--,p[2]--;
        if(i&8) p[2]--,p[3]--;
        if(max(max(p[0],p[1]),max(p[2],p[3]))>n-2) continue;
        if(min(min(p[0],p[1]),min(p[2],p[3]))<0) continue;
        cout<<"YES";
        return;
    }
    cout<<"NO";
}

int main(){   
    int T;
    cin>>T;
    rep(t,1,T){
        solve();
        cout<<"\n";
    }
    return 0;
} 