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

ll n,m,w;
vector <ll> a;

bool chk(ll md){
    vector<ll> st(n,0);
    ll cur = 0,mov=0;
    rep(i,0,n-1){
        cur -= ( i - w >= 0 ) ? st[i - w] : 0;
        if (a[i] + cur < md){
            st[i] = md - a[i] - cur;
            cur += st[i];
            mov += st[i];
        }
        if (mov > m)
            return 0;
    }
    return mov <= m;
}
void solve(){
    cin>>n>>m>>w;
    a.resize(n);
    rep(i,0,n-1){cin>>a[i];}    
    ll ans = 1,l=1,r=1e9+1e5,md;
    while(l<=r){
        md = l + (r-l)/2;
        if(chk(md)){
            ans = md;
            l = md+1;
        }
        else{
            r = md-1;
        }
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