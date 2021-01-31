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
    vector <ll> a(n),b(n),c(n);
    rep(i,0,n-1){cin>>c[i];}
    rep(i,0,n-1){cin>>a[i];}
    rep(i,0,n-1){cin>>b[i];}
    ll cur=0,len=0,ans=0;
    rep(i,1,n-1){
        cur = c[i] + 1 + abs(a[i]-b[i]);
        if(a[i]!=b[i]){
            cur = max(cur,c[i]+len+1-abs(a[i]-b[i]));
        }
        ans = max(ans,cur);
        len = cur;
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