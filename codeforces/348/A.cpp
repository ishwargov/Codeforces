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
    ll n,ans=INT_MAX,sum=0;
    cin>>n;
    vector <ll> a(n);
    rep(i,0,n-1){cin>>a[i];sum+=a[i];}
    sort(a.begin(),a.end());
    ll l=a[n-1],r=1e10,m;
    while(l<=r){
        m = l+(r-l)/2;
        if(n*m - sum>=m){
            ans = m;
            r = m-1;
        }
        else{
            l = m+1;
        }
    }
    cout<<ans;
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    return 0;
} 