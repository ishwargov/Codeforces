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
    ll n,m;
    vector <ll> a;
    cin>>n>>m;
    rep(i,0,m-1){
        ll inp;
        cin>>inp;
        a.pb(inp);
    }
    ll mn=LLONG_MAX;
    sort(a.begin(),a.end());
    rep(i,0,m-n){
        ll chk=0;
        rep(j,0,n-2){
            //cout<<a[i+j]<<" "<<a[i+j+1]<<"\n";
            chk += abs(a[i+j]-a[i+j+1]);
        }
        mn = min(chk,mn);
    }
    cout<<mn;
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 