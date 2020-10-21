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
    ll n,inp;
    vector <ll> a;
    cin>>n;
    rep(i,0,n-1){
        cin>>inp;
        a.pb(inp);
    }
    sort(a.begin(),a.end());
    ll ans = 0;
    while(a.size()!=0){
        ll sth = a[0];
        ll cnt = 1;
        a.erase(a.begin());
        for(ll i=0;i<a.size();i++){
            if(a[i]>=cnt){
                cnt++;
                //cout<<a[i]<<" ";
                a.erase(a.begin()+i);   
                i--;
            }
        }
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