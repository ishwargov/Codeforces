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
    ll n;
    cin>>n;
    vector <ll> a(n+1,0),b(n+1,0);
    rep(i,1,n){
        cin>>a[i];
    }
    repi(i,n,1){
        if(i+a[i]>n){
            b[i] = a[i];
        }
        else{
            b[i] = a[i] + b[i+a[i]];
        }
    }
    /*rep(i,1,n){
        cout<<b[i]<<" ";
    }*/
    ll ans = max_element(b.begin()+1,b.end())-b.begin();
    cout<<b[ans];
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