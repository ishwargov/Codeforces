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

ll sod(ll n){
    ll d = 0;
    while(n>0){
        d += n%10;
        n/=10;
    }
    return d;
}

void solve(){
    ll n;
    cin>>n;
    ll ans = sod(n); 
    while(ans>=10){
        ans = sod(n);
        n = ans;
    }    
    cout<<ans;
}

int main(){   
    solve();
    return 0;
} 