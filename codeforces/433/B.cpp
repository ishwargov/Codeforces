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
    ll n,m,inp;
    cin>>n;
    vector <ll> a,b;
    rep(i,0,n-1){
        cin>>inp;
        a.pb(inp);
        b.pb(inp);
    }
    sort(b.begin(),b.end());
    rep(i,0,n-2){
        a[i+1] += a[i];
        b[i+1] += b[i];
    }
    cin>>m;
    rep(i,0,m-1){
        ll l,r;
        cin>>inp>>l>>r;
        if(inp==1){
            cout<<a[r-1]-a[l-2]*(l!=1)<<"\n";
        }
        else{
            cout<<b[r-1]-b[l-2]*(l!=1)<<"\n";
        }
    }
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 