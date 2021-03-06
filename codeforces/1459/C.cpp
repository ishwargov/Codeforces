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
    ll n,m;
    cin>>n>>m;
    vector <ll> a(n),b(m);
    rep(i,0,n-1){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    rep(i,0,m-1){
        cin>>b[i];
    }
    if(n==1){
        rep(i,0,m-1){
            cout<<a[0]+b[i]<<" ";
        }
        return;
    }
    ll gc = a[1] - a[0];
    rep(i,2,n-1){
        gc = __gcd(gc,a[i]-a[0]);
    }
    rep(i,0,m-1){
        cout<<__gcd(a[0]+b[i],gc)<<" ";
    }
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 