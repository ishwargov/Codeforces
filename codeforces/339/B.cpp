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
    ll n,m;
    ll a[100001],ans=0;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    ans += a[0]-1;
    for(int i=1;i<m;i++){
        if(a[i-1]<=a[i]){
            ans += a[i]-a[i-1];
        }
        else{
            ans+=n-a[i-1]+a[i];
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