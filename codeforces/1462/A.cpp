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

ll a[333],b[333];
void solve(){
    ll n;
    cin>>n;
    rep(i,0,n-1){
        cin>>a[i];
    }
    ll cnt = 0,i=0,t=1;
    while(cnt<n){
        if(t==1){
            cout<<a[i]<<" ";
            i = n-1-i;
            cnt++;
        }
        else{
            cout<<a[i]<<" ";
            i = n-i;
            cnt++;
        }
        t = t*-1;
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
        cout<<"\n";
    }
    //timetaken();
    return 0;
} 