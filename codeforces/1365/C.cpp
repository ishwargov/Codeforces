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
ll a[200005],b[200005],c[200005];
void solve(){
    ll n;
    cin>>n;
    rep(i,0,n-1){
        cin>>a[i];
        c[a[i]]=i;
    }
    ll d[200005];
    rep(i,0,n-1){
        cin>>b[i];
        d[i] = c[b[i]]-i;
    }
    rep(i,0,n-1){
        if(d[i]<0){
            d[i] += n;
        }
    }
    ll sum[200005]={0};
    rep(i,0,n-1){
        sum[d[i]]++;
    }
    cout<<*max_element(sum,sum+n);

}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    return 0;
}