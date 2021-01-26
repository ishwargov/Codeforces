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
    ll a,b,k,ans=0;
    cin>>a>>b>>k;
    vector <ll> x(k),y(k),cnt1(a+1,0),cnt2(b+1,0);
    rep(i,0,k-1){cin>>x[i];}
    rep(i,0,k-1){cin>>y[i];}
    rep(i,0,k-1){
        cnt1[x[i]]++;
        cnt2[y[i]]++;
    }
    rep(i,0,k-1){
        ans += k - cnt1[x[i]] - cnt2[y[i]] + 1;
    }
    cout<<ans/2;
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