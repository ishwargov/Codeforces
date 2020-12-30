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

ll cel(ll a,ll b){
    ll q = (a%b)?(a/b+1):(a/b);
    return q;
}
void solve(){
    ll n;
    cin>>n;
    vector <ll> a(n+1,1);
    rep(i,1,n){
        a[i] = i;
    }
    ll cnt = 0;
    vector <pair<ll,ll>> ans;
    repi(i,n-1,3){
        if(a[i]<cel(a[n],a[i])){
            a[n] = cel(a[n],a[i]);
            a[i] = 1;
            ans.pb({n,i});
            ans.pb({i,n});
            cnt+=2;
        }
        else{
            a[i] = 1;
            ans.pb({i,n});
            cnt++;
        }
    }
    while(a[n]>=a[2]){
        a[n] = cel(a[n],a[2]);
        ans.pb({n,2});
        cnt++;
    }

    cout<<cnt<<"\n";
    for(auto x:ans){
        cout<<x.fi<<" "<<x.se<<"\n";
    }
    
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    int T;
    cin>>T;
    rep(t,1,T){
    //    cout<<"Case #"<<t<<": ";
        solve();
    }
    //timetaken();
    return 0;
} 