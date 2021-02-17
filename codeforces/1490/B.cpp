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
    ll n,c[3]={0};
    cin>>n;
    vector <ll> a(n);
    rep(i,0,n-1){
        cin>>a[i];
        c[a[i]%3]++;
    }
    ll s = c[0]+c[1]+c[2];s/=3;
    ll ans = 0;
    rep(i,0,2){
        if(c[i]<s){
            while(c[(i+2)%3]>s&&c[i]<s){
                c[(i+2)%3]--;
                c[i]++;
                ans++;
            }
            while(c[(i+1)%3]>s&&c[i]<s){
                c[(i+1)%3]--;
                c[i]++;
                ans+=2;
            }
        }
    }
    cout<<ans;
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