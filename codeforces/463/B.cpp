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
    cin>>n;
    vector <ll> a;
    rep(i,0,n-1){
        ll inp;
        cin>>inp;
        a.pb(inp);
    }
    ll prc=0,cur=0;
    rep(i,-1,n-2){
        if(i==-1){
            if(cur<a[i+1]){
                cur = 0;
                prc += a[i+1];
            }
            continue;
        }
        if(cur + (a[i]-a[i+1]) < 0 ){
            prc += -1*(cur + (a[i]-a[i+1]));
            cur = 0;
        }
        else{
            cur += a[i] - a[i+1];
        }
    }
    cout<<prc;
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 