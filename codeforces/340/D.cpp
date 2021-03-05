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
    ll n,ans=0;
    cin>>n;
    vector <ll> a(n),d(n+1,0);
    rep(i,0,n-1){cin>>a[i];}
    ll ln = 1;
    d[0] = a[0];
    rep(i,1,n-1){
        ll cur = a[i];
        ll pos = lower_bound(d.begin(),d.begin()+ln,cur)-d.begin();
        if(pos==ln){
            d[ln] = cur;
            ln++;
        }
        else{
            d[pos] = cur;
        }
    }
    cout<<ln;
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    return 0;
} 