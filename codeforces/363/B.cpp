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
    ll n,k,sum=0;
    cin>>n>>k;
    vector <ll> a,s;
    rep(i,0,n-1){
        ll inp;
        cin>>inp;
        a.pb(inp);
    }
    rep(i,0,n-1){
        sum += a[i];
        s.pb(sum);
    }
    ll min=s[k-1],pos=0;
    rep(i,1,n-k){
        if(min>s[k+i-1] - s[i-1]){
            min = s[k+i-1] - s[i-1];
            //cout<<min<<" ";
            pos = i;
        }
    }
    cout<<pos+1;
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 