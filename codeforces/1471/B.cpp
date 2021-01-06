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

void solve(){
    ll n,x;
    cin>>n>>x;
    vector <ll> a(n),b(n);
    rep(i,0,n-1){cin>>a[i];}
    rep(i,0,n-1){
        ll cur = a[i],pw = 0;
        while(cur%x==0&&cur>0){
            cur/=x;
            pw++;
        }
        b[i] = pw;
    }
    ll pos = min_element(b.begin(),b.end())-b.begin();
    ll mn = b[pos];
    ll ans = 0;
    //cout<<mn<<" "<<pos<<"\n";
    rep(i,0,n-1){
        if(i<pos){
            ll pw = min(mn+1,b[i]);
            ans += a[i]*(pw+1);
        }
        else{
            ll pw = min(mn,b[i]);
            ans += a[i]*(pw+1);
        }
    }
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