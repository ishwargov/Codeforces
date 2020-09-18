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
    ll n;
    vector <ll> a;
    cin>>n;
    rep(i,0,n-1){
        ll inp;
        cin>>inp;
        a.pb(inp);
    }
    ll cnt=0,ans=0;
    rep(i,0,n-1){
        if(a[i]==1)
            ans++;
    }
    if(n==1&&a[0]==1){
        cout<<"0";
        return;
    }
    ll mx=INT_MIN;
    rep(i,0,n-1){
        rep(j,i,n-1){
            cnt=0;
            rep(k,i,j){
                if(a[k]==0)
                    cnt++;
                else
                    cnt--;
            }
            mx = max(cnt,mx);
        }
    }
    cout<<ans+mx;
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 