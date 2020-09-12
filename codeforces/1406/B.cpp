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

void solve(){
    ll n,inp;
    cin>>n;
    vector <ll> a;
    rep(i,0,n-1){
        cin>>inp;
        a.pb(inp);  
    }
    sort(a.begin(),a.end(),[](ll c,ll d){return(c>d);});
    ll odd = a[0]*a[1]*a[2]*a[3]*a[4];
    ll even = a[0]*a[1]*a[2]*a[n-1]*a[n-2];
    ll temp=a[0] * a[n-1]*a[n-2]*a[n-3]*a[n-4];
    ll ans = max(max(odd,even),temp);
    cout<<ans;
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
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