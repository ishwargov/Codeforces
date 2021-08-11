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
    ll n,k,t=0;cin>>n>>k;
    vector <ll> a(n);
    rep(i,0,n-1) cin>>a[i];
    sort(a.begin(),a.end(),[](const ll &a,const ll &b){return abs(a)>abs(b);});
    rep(i,0,n-1){
        if(k<=0) break;
        if(a[i]<0) a[i]*=-1,k--;
    }
    if(k>0){
        k=k%2;
        if(k) a[n-1]*=-1;
    }
    cout<<accumulate(a.begin(),a.end(),0);
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 