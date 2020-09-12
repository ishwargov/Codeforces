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

int check(ll n){
    ll a1 = n/1000;
    ll a2 = (n/100)%10;
    ll a3 = (n/10)%10;
    ll a4 = (n%10);
    if(a1==a2||a1==a3||a1==a4||a2==a3||a2==a4||a3==a4)
        return 0;
    return 1;
}

void solve(){
    ll n;
    cin>>n;
    rep(i,n+1,10000){
        if(check(i)){
            cout<<i;
            break;
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