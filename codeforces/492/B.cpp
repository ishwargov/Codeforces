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
    ll n,l;
    double a[1001];
    double ans=0;
    cin>>n>>l;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n-1;i++){
        ans = max(ans,(a[i+1]-a[i])/2);
    }
    ans = max(ans , a[0]);
    ans = max(ans , l - a[n-1]);
    printf("%.10f",ans);
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    return 0;
}