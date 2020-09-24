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
    ll n,k;
    cin>>n>>k;
    ll c = k+1;
    rep(i,1,k+1){
        cout<<c<<" ";
        c--;
    }
    c = k+2;
    rep(i,1,n-k-1){
        cout<<c<<" ";
        c++;
    }
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();   
    //timetaken();
    return 0;
} 