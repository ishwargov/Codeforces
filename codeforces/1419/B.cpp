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
unsigned ll a[32];
void init(){
    ll k=0;
    for(ll i=2;k<31;i=i<<1){
        a[k] = i*(i-1)/2;
        k++;
    }
}
void solve(){
    ll x;
    cin>>x;
    ll ans=0,k=0;
    while(x>0){
        x = x-a[k];
        k++;
        ans++;
    }
    if(x<0)
        ans--;
    cout<<ans;
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    init();
    int T;
    cin>>T;
    rep(t,1,T){
    //    cout<<"Case #"<<t<<": ";
        solve();
        cout<<"\n";
    }
    //timetaken();
    return 0;
} 