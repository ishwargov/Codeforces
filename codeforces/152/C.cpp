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
    ll n,m;
    cin>>n>>m;
    char s[n+2][m+2];
    rep(i,0,n-1){
        cin>>s[i];
    }
    ll ans = 1;
    ll alp[27] = {0};
    rep(i,0,m-1){
        ll cnt = 0;
        memset(alp,0,sizeof(alp));
        rep(j,0,n-1){
            if(alp[s[j][i]-'A']==0){
                alp[s[j][i]-'A']++;
                cnt++;
            }
        }
        ans = ((ans%M)*(cnt%M))%M;
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