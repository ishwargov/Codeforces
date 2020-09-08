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
    ll sum=0;
    sort(a.begin(),a.end());
    rep(i,0,n-1){
        sum += abs(a[i]-(i+1));
    }
    cout<<sum;
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
}