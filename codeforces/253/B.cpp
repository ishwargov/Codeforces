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
    ll p,q,n,ans=LLONG_MAX;
    cin>>n;
    vector <ll> c(n);
    rep(i,0,n-1){cin>>c[i];}
    sort(c.begin(),c.end());
    rep(i,0,n-1){
        ll pos  = upper_bound(c.begin(),c.end(),2*c[i])-c.begin();
        //cout<<"("<<i<<","<<pos<<")"<<"\n";
        ll cur = (pos<n)?(n-1-pos+1+i):(i);
        ans = min(ans,cur);
    }
    cout<<ans;
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    solve();
    //timetaken();
    return 0;
} 