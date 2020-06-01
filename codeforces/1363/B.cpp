#include <bits/stdc++.h>
using namespace std;
#define M 1000000009
#define ll long long int
#define fi first    
#define se second
#define pb push_back
#define mp make_pair
#define ub upper_bound
#define lb lower_bound


void solve(){
    string s;
    ll c1=0,c0=0,p1=0,p0=0;
    cin>>s;
    for(auto i:s){
        c1 += (i=='1');
        c0 += (i=='0');
    }
    ll ans = min(c1,c0);
    for(auto i:s){
        c1 -= (i=='1');
        p1 += (i=='1');
        c0 -= (i=='0');
        p0 += (i=='0');
        ans = min(ans,p1+c0);
        ans = min(ans,p0+c1);
    }
   cout<<ans;
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    int T;
    cin>>T;
    for(int t=1;t<=T;t++){
        solve();
        cout<<"\n";
    }
    return 0;
}