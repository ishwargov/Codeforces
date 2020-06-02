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
    ll n,m,k,a[1001],ans=0;
    cin>>n>>m>>k;
    for(int i=0;i<m+1;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        if(__builtin_popcount((a[m]^a[i]))<=k){
            //cout<<__builtin_popcount((a[m]^a[i]));
            ans++;
        }
    }
    cout<<ans;
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    return 0;
}