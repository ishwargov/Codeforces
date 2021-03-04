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
    ll n,m,k;
    cin>>n>>m>>k;
    vector <ll> a(n),chg(n+1,0),l(m),r(m),d(m),q(m+1,0),cntq(m,0);
    rep(i,0,n-1){cin>>a[i];}
    rep(i,0,m-1){
        cin>>l[i]>>r[i]>>d[i];
    }
    rep(i,0,k-1){
        ll x,y;
        cin>>x>>y;
        q[x-1]++;
        q[y]--;
    }
    ll cur = 0,cnt = 0;
    rep(i,0,m-1){
        cnt += q[i];
        cntq[i] = cnt;
        chg[l[i]-1] += cntq[i]*d[i];
        chg[r[i]] -= cntq[i]*d[i];
        //cout<<cntq[i]<<" ";
    }
    //cout<<"\n";
    rep(i,0,n-1){
        cur += chg[i];  
        cout<< a[i] + cur <<" ";
    }
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    return 0;
} 