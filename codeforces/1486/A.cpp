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
    ll n,flg=0;
    cin>>n;
    vector <ll> a(n);
    ll s = 0;
    rep(i,0,n-1){
        cin>>a[i];
        s+=a[i];
        if(s<i*(i+1)/2){flg++;}
    }
    if(flg!=0){cout<<"NO";}
    else{cout<<"YES";}
    
}

int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
    int T;cin>>T;
    rep(t,1,T){
        solve();
        cout<<"\n";
    }   
    return 0;
} 