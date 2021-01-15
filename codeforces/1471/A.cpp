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
    ll n,x;
    cin>>n>>x;
    vector <ll> a(n);
    ll mx=0,mn=0,s=0;
    rep(i,0,n-1){
        cin>>a[i];
        s+=a[i];
    }
    rep(i,0,n-1){
        mx += a[i]/x + (a[i]%x!=0);
    }
    mn = s/x + (s%x!=0);
    cout<<mn<<" "<<mx;
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