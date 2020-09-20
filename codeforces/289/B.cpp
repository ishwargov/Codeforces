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
ll chk[(int)1e5+1];
void solve(){
    ll n,m,d,inp;
    vector<ll> a;
    cin>>n>>m>>d;
    rep(i,0,n-1){
        rep(j,0,m-1){
            cin>>inp;
            a.pb(inp);
        }
    }    
    ll k = a.size();
    ll chk = a[0]%d;
    sort(a.begin(),a.end());
    if(!all_of(a.begin(),a.end(),[&](ll z){ return (z%d==chk);})){
        cout<<"-1";
        return;
    }
    ll ans=0;
    ll mid = a[k/2];
    
    rep(i,0,k-1){
        ans += abs(a[i] - mid)/d;
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