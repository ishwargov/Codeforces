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
    ll n,a,b;
    cin>>n>>a>>b;
    if((a*b)>=6*n){
        cout<<a*b<<"\n";
        cout<<a<<" "<<b;
        return;
    }
    ll req = 6*n,ans = 9e18,flg=0,a1=1e9,b1=1e9;
    if(a>b){
        swap(a,b);++flg;
    }
    rep(i,a,1e5){
        ll x = i,y = req/i + (req%i!=0);
        if(y<b) break;
        if(x*y>=req&&x*y<ans){
            a1 = x,b1 = y,ans = x*y;
        }
    }
    if(flg){cout<<ans<<"\n"<<b1<<" "<<a1;}
    else{cout<<ans<<"\n"<<a1<<" "<<b1;}
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 