/* SupremeLord Ishwar Govind */
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
    ll n;
    cin>>n;
    vector <ll> a(n);
    rep(i,0,n-1) cin>>a[i];
    ll mx = *max_element(a.begin(),a.end()),mn = *min_element(a.begin(),a.end());
    ll ans = LLONG_MAX,cur[4]={0,0,0,0};
    if(mn==mx){
        cout<<1;
        return;
    }
    rep(i,0,n-1){
        if(a[i]==mn){ cur[0] = i;break;}
    }
    rep(i,0,n-1){
        if(a[i]==mx){ cur[1] = i;break;}
    }
    repi(i,n-1,0){
        if(a[i]==mn){ cur[2] = i;break;}
    }
    repi(i,n-1,0){
        if(a[i]==mx){ cur[3] = i;break;}
    }
    if(cur[1]>cur[0]) ans = min(ans,1+cur[1]);
    else ans = min(ans,1+cur[0]);
    ans = min(ans,cur[0]+1+(n-cur[3]));
    ans = min(ans,cur[1]+1+(n-cur[2]));
    if(cur[2]>cur[3]) ans = min(ans,n-cur[3]);
    else ans = min(ans,n-cur[2]);
    cout<<ans;
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    int T;
    cin>>T;
    rep(t,1,T){
    //    cout<<"Case #"<<t<<": ";
        solve();
        cout<<"\n";
    }
    //timetaken();
    return 0;
} 