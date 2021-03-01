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
    vector <ll> a(n),cur(n+1,0);
    rep(i,0,n-1){cin>>a[i];}
    rep(i,0,n-1){
        ll mx = 0;
        mx = cur[i];
        if(mx<a[i]-1){
            ans += a[i]-1-mx;
            mx += a[i]-1-mx;
        }
        cur[i+1] += mx - a[i]+1;
        ll tm = min(n-1,a[i]+i);
        if(i+2<n)
        rep(j,i+2,tm){
            cur[j]++;
        }
    }
    cout<<ans;
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    int T;
    cin>>T;
    rep(t,1,T){
    //    cout<<"Case #"<<t<<": ";
        solve();
        cout<<"\n";
    }
    //timetaken();
    return 0;
} 