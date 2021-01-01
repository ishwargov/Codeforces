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
ll n[3],p[3],r,cnt[3];
bool f(ll x){
    ll fnc = 0;
    rep(i,0,2){
        fnc += p[i]*max((ll)0, cnt[i]*x - n[i]);
    }
    return(fnc<=r);
}

void solve(){
    string s;
    cin>>s;
    for(auto  c:s){cnt[(c=='B')?0:((c=='S')?1:2)]++;}
    rep(i,0,2){cin>>n[i];}
    rep(i,0,2){cin>>p[i];}
    cin>>r;
    ll mid,lo=0,hi=1e14;
    while(lo<hi){
        mid =lo + (hi-lo)/2;
        //cout<<lo<<" "<<hi<<" "<<f(mid)<<'\n';
        if(f(mid)){
            lo = mid+1;
        }
        else{
            hi = mid-1;
        }
    }   
    ll ans = (f(lo))?(lo):(lo-1);
    cout<<ans;
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 