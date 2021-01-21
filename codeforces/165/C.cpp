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
    ll k;
    string s;
    cin>>k;
    cin>>s;
    ll n = s.size();
    vector <ll> sum(n+1,0),cnt(n+1,0);
    rep(i,1,n){
        sum[i] = sum[i-1] + (int)(s[i-1] - '0');
    }
    ll ans = 0;
    cnt[0]++;
    rep(i,1,n){
        if(sum[i]>=k){
            ans += cnt[sum[i] - k];
        }
        cnt[sum[i]]++;
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