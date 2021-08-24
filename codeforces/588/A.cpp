/* SupremeLord Ishwar Govind */
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
#define timetaken() cout << "\n\nTime elapsed: " << (double)(clock() - begtime)/CLOCKS_PER_SEC

void solve(){
    ll n,cur=INT_MAX,ans=0;
    cin>>n;
    vector <ll> a(n),p(n);
    rep(i,0,n-1){
        cin>>a[i]>>p[i];
    }
    rep(i,0,n-1){
        cur = min(cur,p[i]);
        ans += a[i]*cur;
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