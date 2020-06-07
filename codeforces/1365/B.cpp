/* XxSupremeLordxX Ishwar Govind */
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
#define rep(i,k,n) for(ll i=k;i<=n;i++)
#define repi(i,k,n) for(ll i=k;i>=n;i--)
int check(ll a[501],ll c[501],ll n){
    rep(i,0,n-1){
        if(a[i]!=c[i]) return 1;
    }
    return 0;
}
void solve(){
    ll n;
    cin>>n;
    ll a[501],b[501],c1=0,c0=0;
    rep(i,0,n-1){
        cin>>a[i];
    }
    rep(i,0,n-1){
        cin>>b[i];
        if(b[i]==0){
            c0++;
        }
        else{
            c1++;
        }
    }
    if(c1>0&&c0>0){
        cout<<"Yes";
        return;
    }
    ll c[501];
    rep(i,0,n-1){
        c[i]=a[i];
    }
    sort(c,c+n);
    if(check(c,a,n)){
        cout<<"No";
    }
    else{
        cout<<"Yes";
    }

}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    int T;
    cin>>T;
    rep(t,1,T){
        solve();
        cout<<"\n";
    }
    return 0;
}