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

void solve(){
    ll c1,c0;
    cin>>c0>>c1;
    if(c1<c0-1||c1>2*c0+2){
        cout<<"-1";
        return;
    }
    ll n=c0,m=c1;
    rep(i,0,c0-1){
        if(m-2>=n){
            cout<<"110";
            m-=2;n--;
            continue;
        }
        if(m-1==n){
            cout<<"10";
            m--;n--;
            continue;
        }
        if(m==n){
            cout<<"10";
            m--;n--;
            continue;
        }
        if(m==n-1){
            cout<<"0";
            n--;
            continue;
        }
    }
    rep(i,1,m){
        cout<<"1";
    }

}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    return 0;
}