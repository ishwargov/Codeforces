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

const int MAXN = 555;
ll d[MAXN][MAXN];
ll vis[MAXN];

void solve(){
    ll n;
    cin>>n;
    vector <ll> a(n),ans;
    rep(i,0,n-1){
        rep(j,0,n-1){
            cin>>d[i][j];
        }
    }
    rep(i,0,n-1){ cin>>a[i]; a[i]--;}
    reverse(a.begin(),a.end());
    for(ll k=0;k<n;k++){
        ll cnt = 0;
        for(ll i=0;i<n;i++){
            for(ll j=0;j<n;j++){
                if(i==j) continue;
                d[a[i]][a[j]] = min(d[a[i]][a[j]],d[a[i]][a[k]]+d[a[k]][a[j]]);
                if(i<=k&&j<=k) cnt+= d[a[i]][a[j]];
            }
        }
        ans.pb(cnt);
    }
    reverse(ans.begin(),ans.end());
    for(auto x:ans){
        cout<<x<<" ";
    }
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 