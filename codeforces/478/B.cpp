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

ll pir(ll a){
    ll ans;
    ans = a*(a-1)/2;
    return ans;
}
void solve(){
    ll n,m,kmax=0,kmin=0;
    cin>>n>>m;
    ll max = (n-m+1);
    kmax = pir(max);
    ll min = n/m;
    kmin = pir(min+1)*(n%m) + pir(min) * (m - n%m);
    cout<<kmin<<" "<<kmax;
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    return 0;
}