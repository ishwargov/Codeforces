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
    ll n,ans=0;
    cin>>n;
    vector <ll> w(n),deg(n+1,0),vert;
    rep(i,0,n-1){
        cin>>w[i];
        ans += w[i];
    }
    rep(i,0,n-2){
        ll x,y;
        cin>>x>>y;
        deg[x]++;
        deg[y]++;
    }

    rep(i,1,n){
        rep(j,1,deg[i]-1){
            vert.pb(w[i-1]);
        }
    }
    sort(vert.rbegin(),vert.rend());
    cout<<ans<<" ";
    for(auto x:vert){
        ans += x;
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