/* SupremeLord Ishwar Govind */
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
    cin>>k;
    vector <ll> a(12);
    rep(i,0,11) cin>>a[i];
    sort(a.rbegin(),a.rend());
    ll cur=0,cnt=0;
    rep(i,0,11){
        if(cur>=k) break;
        cur+=a[i];
        cnt++;
        if(cur>=k) break;
    }
    if(cur<k){cout<<-1;return;}
    cout<<cnt;
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 