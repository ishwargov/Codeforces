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
#define rep(i,k,n) for(ll i=k;i<=n;i++)
#define repi(i,k,n) for(ll i=k;i>=n;i--)
clock_t begtime = clock();
#define timetaken() cout << "\n\nTime elapsed: " << (float)(clock() - begtime)/1000.0

void solve(){
    ll n,alice=0,bob=0;
    cin>>n;
    vector <ll> a(n);
    rep(i,0,n-1){
        cin>>a[i];
    }
    sort(a.rbegin(),a.rend());
    rep(i,0,n-1){
        if(i%2==0){
            if(a[i]%2==0) alice += a[i];
        }
        else{
            if(a[i]&1) bob += a[i];
        }
    }
    //cout<<alice<<' '<<bob<<"\n";
    if(alice>bob){cout<<"Alice";}
    else if(alice==bob){cout<<"Tie";}
    else{cout<<"Bob";}
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