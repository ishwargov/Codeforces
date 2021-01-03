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
#define rep(i,k,n) for(ll i=k;i<=n;i++)
#define repi(i,k,n) for(ll i=k;i>=n;i--)
clock_t begtime = clock();
#define timetaken() cout << "\n\nTime elapsed: " << (float)(clock() - begtime)/1000.0

ll t[4*(1<<18)];
ll a[1<<18];

int build(ll v,ll tl,ll tr){
    if(tl==tr){
        t[v] = a[tl];
        return 1;
    }
    else{
        ll tm = tl + (tr-tl)/2;
        ll rv1 = build(v*2+1,tl,tm);
        ll rv2 = build(v*2+2,tm+1,tr);
        if(rv1||rv2){
            t[v] = t[v*2+1]|t[v*2+2];
            return 0;
        }
        else{
            t[v] = t[v*2+1]^t[v*2+2];
            return 1;
        }
    }
}

int update(ll v,ll tl,ll tr,ll a,ll b){
    if(tl==tr){
        t[v] = b;
        return 1;
    }
    else{
        ll tm = tl + (tr-tl)/2;
        ll rv;
        if(tm>=a){
            rv = update(v*2+1,tl,tm,a,b);
        }
        else{
            rv = update(v*2+2,tm+1,tr,a,b);
        }
        if(rv){
            t[v] = t[2*v+1]|t[2*v+2];
            return 0;
        }
        else{
            t[v] = t[2*v+1]^t[2*v+2];
            return 1;
        }
    }
}

void solve(){
    ll n,m;
    cin>>n>>m;
    ll sz = (1<<n);
    rep(i,0,sz-1){cin>>a[i];}
    build(0,0,sz-1);
    /*rep(i,0,2*sz-1){
        cout<<t[i]<<' ';
    }*/
    rep(i,0,m-1){
        ll x,y;
        cin>>x>>y;
        --x;
        update(0,0,sz-1,x,y);
        cout<<t[0]<<'\n';
    }
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 