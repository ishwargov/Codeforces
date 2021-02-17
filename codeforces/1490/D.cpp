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
 
ll n;
vector <ll> a,d;

void make_tree(ll l,ll r,ll dep){
    if(l>r) return;
    else if(l==r){
        d[l] = dep;
        return;
    }
    ll mx=0,mxi=-1;
    rep(i,l,r){
        if(a[i]>mx){mx = a[i],mxi = i;}
    }
    d[mxi] = dep;
    make_tree(l,mxi-1,dep+1);
    make_tree(mxi+1,r,dep+1);
}

void solve(){
    cin>>n;
    a.clear(),d.clear();
    a.resize(n),d.resize(n);    
    ll mx=0,mxi=-1;
    rep(i,0,n-1){
        cin>>a[i];
        if(a[i]>mx){mx = a[i],mxi = i;}
    }
    make_tree(0,mxi-1,1);
    make_tree(mxi+1,n-1,1);
    rep(i,0,n-1){
        cout<<d[i]<<" ";
    }
}
 
int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
    int T;cin>>T;
    rep(t,1,T){
        solve();
        cout<<"\n";
    }
    //timetaken();
    return 0;
} 