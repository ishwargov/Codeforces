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
    ll m,t,r;
    ll mp[333],vis[777];  
    memset(mp,0,sizeof(mp));
    memset(vis,0,sizeof(vis));
    cin>>m>>t>>r;
    vector <ll> w(m,0);
    rep(i,0,m-1){
        cin>>w[i];
        mp[w[i]]++;
    }
    ll mid = 300;
    if(t<r){
        cout<<"-1";
        return;
    }
    ll cnt = 0;
    rep(i,0,m-1){
        ll chk = 0;
        for(ll j=w[i]-1;j>=w[i]-t;j--){
            if(chk>=r) break;
            if(vis[mid+j]){
                chk++;
                continue;
            }
        }
        for(ll j=w[i]-1;j>=w[i]-t;j--){
            if(chk>=r) break;
            if(!vis[mid+j]){
                vis[mid+j]++;
                chk++;
                cnt++;
            }
        }
        if(chk<r){
            cout<<"-1";
            return;
        }
    }
    cout<<cnt;  
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 