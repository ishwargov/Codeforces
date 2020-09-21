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
ll chk[1001]={0};
void solve(){
    ll n,inp1,inp2;
    cin>>n;
    ll k=n;
    vector <ll> a,b;
    rep(i,0,n-1){
        cin>>inp1>>inp2;
        a.pb(inp1);
        b.pb(inp2);
    }
    rep(i,0,n-1){
        rep(j,0,n-1){
            if(a[j]==b[i]&&i!=j)
                chk[j+1]++;
        }
    }
    ll ans=0;
    rep(i,1,n){
        if(chk[i]==0)
            ans++;
    }   
    cout<<ans;
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 