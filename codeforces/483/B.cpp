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
ll cnt1,cnt2,x,y;

bool chk(ll n){
    ll crdx = n - n/x;
    ll crdy = n - n/y;
    ll crdxny = n - n/x - n/y + n/lcm(x,y);
    crdx -= crdxny;
    crdy -= crdxny;
    ll req1 = cnt1,req2 = cnt2;
    req1 = (req1<crdx)?0:(req1-crdx);
    req2 = (req2<crdy)?0:(req2-crdy);
    if((req1==0&&req2==0)||(req1+req2)<=crdxny) return true;
    else return false;
}

void solve(){    
    cin>>cnt1>>cnt2>>x>>y;
    ll l=1,r=1e10,ans = 1e10,m;
    while(l<=r){
        m = l+(r-l)/2;
        if(chk(m)){
            r = m-1;
            ans = m;
        }
        else{
            l = m+1;
        }
    }
    cout<<ans;
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 