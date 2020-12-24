/* XxSupremeLordxX Ishwar Govind */
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
#define rep(i,k,n) for(ll i=k;i<=n;i++)
#define repi(i,k,n) for(ll i=k;i>=n;i--)
clock_t begtime = clock();
#define timetaken() cout << "\n\nTime elapsed: " << (float)(clock() - begtime)/1000.0

void solve(){
    ll n;
    cin>>n;
    vector <ll> a(n),s(n+1);
    s[0]=0;
    rep(i,0,n-1){
        cin>>a[i];
        s[i+1] = s[i] + a[i];
    }
    if(s[n]%3!=0){
        cout<<"0";
        return;
    }
    ll ans=0;
    ll u = s[n] / 3, v = 2 * s[n] / 3;
    ll cnt = 0;
    for (int i = 1; i < n; i++) {
      if (s[i] == v) {
        ans += cnt;
      }
      if (s[i] == u) {
        cnt++;
      }
    }
    cout<<ans;
    
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 