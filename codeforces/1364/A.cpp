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
    ll n,x,a[100001],s=0,ans=0;
    cin>>n>>x;
    rep(i,0,n-1){
        cin>>a[i];
        s+=a[i];
    }
    if(s%x!=0){
        cout<<n;
        return;
    }
    ll t1  =  s,t2  = s,fr = n+1,bk = -2;
    rep(i,0,n-1){
        if(t1%x==0){
            t1 -= a[i];
        }
        else{
            fr = i;
            break;
        }
    }
    repi(i,n-1,0){
        if(t2%x==0){
            t2 -= a[i];
        }
        else{
            bk = i;
            break;
        }
    }

    ans = max(n-fr,bk+1);
    cout<<ans;
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