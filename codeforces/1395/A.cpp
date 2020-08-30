/* XxSupremeLordxX Ishwar Govind */
#include <bits/stdc++.h>
using namespace std;
#define M 1000000007
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
    ll r,g,b,w;
    cin>>r>>g>>b>>w;
    ll n=r+g+b+w;
    ll k = r%2 + g%2 + b%2 + w%2;
    ll c = (r==0) + (g==0) + (b==0);
    if(k==0||k==1||(k==4&&c==0)||(k==3&&c==0)){
        cout<<"Yes";
        return;
    }
    cout<<"No";

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