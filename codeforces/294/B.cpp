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
    ll n,cnt[2]={0};
    cin>>n;
    vector <ll> bk[2];
    vector <ll> s[2];
    rep(i,0,n-1){
        ll x,y; 
        cin>>x>>y;
        cnt[x-1]++;
        bk[x-1].pb(y);
    }
    ll ans = cnt[0]+cnt[1]*2;
    s[0].resize(cnt[0]+1,0);
    s[1].resize(cnt[1]+1,0);
    sort(bk[0].begin(),bk[0].end());
    sort(bk[1].begin(),bk[1].end());
    for(ll i=0;i<cnt[0];i++){
        s[0][i+1] = s[0][i] + bk[0][i];
    }
    for(ll i=0;i<cnt[1];i++){
        s[1][i+1] = s[1][i] + bk[1][i];
    }

    for(ll i=0;i<=cnt[0];i++){
        for(ll j=0;j<=cnt[1];j++){
            ll ver = (cnt[0]-i)+(cnt[1]-j)*2;
            ll hz = s[0][i] + s[1][j];
            //cout<<i<<" "<<j<<" "<<hz<<" "<<ver<<"\n";
            if(hz<=ver){
                ans = min(ans,ver);
            }
        }
    }
    cout<<ans;

}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    return 0;
} 