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
    ll n;cin>>n;
    string s;cin>>s;
    vector <ll> l(n,1),r(n,1);
    rep(i,1,n-1){
        if (s[i]!=s[i-1]) l[i] = l[i-1] + 1; 
    }
    repi(i,n-2,0){
        if (s[i]!=s[i+1]) r[i] = r[i+1] + 1; 
    }
    rep(i,0,n){
        ll ans = 1;
        if(i!=0){ans += (s[i-1]=='L')?l[i-1]:0;}
        if(i!=n){ans += (s[i]=='R')?r[i]:0;}
        cout<<ans<<" ";
    }
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