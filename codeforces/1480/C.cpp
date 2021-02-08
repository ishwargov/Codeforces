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
    ll n;
    cin>>n;
    ll x,y,l = 1,r = n,m;
    vector <ll> a(n+2,-1);
    a[0] = 1e7,a[n+1] = 1e7;
    while(l<=r){
        m = l+(r-l)/2;
        if(a[m]==-1){cout<<"? "<<m<<'\n';cin>>a[m];}
        //if(a[m]==1){cout<<"! "<<m; return;}
        if(a[m+1]==-1){cout<<"? "<<m+1<<'\n';cin>>a[m+1];}
        //if(a[m+1]==1){cout<<"! "<<m+1; return;}
        if(a[m]<a[m+1]) r = m-1;
        else l = m+1;
    }
    cout<<"! "<<l;
}

int main(){   
    solve();
    //timetaken();
    return 0;
} 