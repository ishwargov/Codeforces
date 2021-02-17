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
 
void solve(){
    ll n;
    cin>>n;
    set <ll> cub;
    rep(i,1,1e4){
        cub.insert((i*i*i));
    }
    rep(i,1,1e4){
        ll cur = n - (i*i*i);
        if(cur<0) break;
        if(cub.find(cur)!=cub.end()){
            cout<<"YES";
            return;
        }
    }
    cout<<"NO";
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