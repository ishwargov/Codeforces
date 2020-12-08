/* XxSupremeLordxX Ishwar Govind */
#include <bits/stdc++.h>
using namespace std;
#define M 1000000007
#define ll long long int
#define fi first    
#define se second
#define pb push_back
#define mp make_pair
#define ub upper_bound
#define lb lower_bound
#define rep(i,k,n) for(ll i=k;i<=n;i++)
#define repi(i,k,n) for(ll i=k;i>=n;i--)
clock_t begtime = clock();
#define timetaken() cout << "\n\nTime elapsed: " << (float)(clock() - begtime)/1000.0

ll a[100005],a2[100005];
void solve(){
    ll n;
    cin>>n;
    rep(i,0,n-1){
        cin>>a[i];
        a2[i] = a[i];
    }
    sort(a2,a2+n);
    ll cnt=0;
    rep(i,0,n-1){
        if(a[i]!=a2[i]) cnt++;
    }
    if(cnt<=2) cout<<"Yes";
    else cout<<"No";    
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
}   