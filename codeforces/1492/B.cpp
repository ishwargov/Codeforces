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
    vector <ll> a(n),vis(n+1,0);
    rep(i,0,n-1){cin>>a[i];}
    stack <ll> s;
    ll cur = n;
    repi(i,n-1,0){
        if(a[i]!=cur){
            s.push(a[i]);
            vis[a[i]]++;
        }
        else{
            vis[a[i]]++;
            cout<<a[i]<<" ";
            while(s.size()!=0){
                cout<<s.top()<<" ";
                s.pop();
            }
            while(vis[cur]&&cur>0){
                cur--;
            }
        }
    }
    /*while(s.size()!=0){
        cout<<s.top()<<" ";
        s.pop();
    }*/
}

int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
    int T;cin>>T;
    rep(t,1,T){
        solve();
        cout<<"\n";
    }
    return 0;
} 