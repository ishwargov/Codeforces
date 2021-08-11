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
#define timetaken() cout << "\n\nTime elapsed: " << (float)(clock() - begtime)/1000.0

void solve(){
    ll n,s;
    cin>>n>>s;
    vector <ll> a(n);
    rep(i,0,n-1) cin>>a[i];
    ll l=0,r=n,k=0,t=0;
    while(l<=r){
        ll m = l+(r-l)/2;
        vector <ll> b;
        rep(i,0,n-1) b.pb(a[i]+m*(i+1));
        make_heap(b.begin(),b.end(),greater<int>());  
        ll cost = 0;
        rep(i,1,m){
            pop_heap(b.begin(),b.end(),greater<int>());
            //if(m==2) cout<<b.back()<<" ";
            cost += b.back();
            b.pop_back();
        }
        //cout<<m<<" "<<cost<<" ";
        if(cost<=s){
            k = m;
            t = cost;
            l = m+1;
        }
        else{
            r = m-1;
        }
    }
    cout<<k<<" "<<t;
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 