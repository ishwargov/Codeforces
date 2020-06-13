/* XxSupremeLordxX Ishwar Govind */
#include <bits/stdc++.h>
using namespace std;
#define M 1000000009
#define ll long long int
#define fi first    
#define se second
#define pb push_back
#define mp make_pair
#define ub upper_bound
#define lb lower_bound
#define rep(i,k,n) for(ll i=k;i<=n;i++)
#define repi(i,k,n) for(ll i=k;i>=n;i--)

void solve(){
    ll n,p[100001],map[100001];
    cin>>n;
    rep(i,0,n-1){
        cin>>p[i];
    }
    vector <ll> a;
    rep(i,0,n-2){
        if(p[i]<p[i+1]){
            map[i]=1;
        }
        else if(p[i]>p[i+1]){
            map[i]=-1;
        }
        else{
            map[i]=0;
        }
    }
    a.pb(p[0]);
    map[n-1]=2;
    rep(i,1,n-1){
        if(map[i]==0){
            continue;
        }
        else if(map[i-1]!=map[i]){
            a.pb(p[i]);
        }
    }
    if((a[a.size()-2]==a[a.size()-1])&&a.size()>2){
        a.pop_back();
    }
    cout<<a.size()<<"\n";
    rep(i,0,a.size()-1){
        cout<<a[i]<<" ";
    }
    
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    int T;
    cin>>T;
    rep(t,1,T){
        solve();
        cout<<"\n";
    }
    return 0;
}