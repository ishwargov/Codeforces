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
#define rep(i,k,n) for(ll i=(k);i<=(n);i++)
#define repi(i,k,n) for(ll i=(k);i>=(n);i--)
clock_t begtime = clock();
#define timetaken() cout << "\n\nTime elapsed: " << (float)(clock() - begtime)/1000.0

void solve(){
    ll n,k;
    cin>>n>>k;
    if(n==1){
        cout<<0;
        return;
    }
    if(n > (k*(k-1))/2 + 1){
        cout<<-1;
        return;
    }
    if(n<=k){
        cout<<1;
        return;
    }
    ll l=2,r=k-1,ans=0;
    while(l<=r){
        ll m = l+(r-l)/2;
        if( (k*(k-1))/2 - (m*(m-1)/2) + k - (k-1+1-m)  >= n){
            ans =k-1-m+1;
            l = m+1;
        }
        else{
            r = m-1;
        }
    }
    cout<<ans+1;
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    return 0;
} 