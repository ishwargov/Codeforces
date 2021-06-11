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
    ll n,s=0;
    cin>>n;
    vector <ll> a(n);
    rep(i,0,n-1) cin>>a[i],s+=a[i];
    sort(a.begin(),a.end());
    if(s%n!=0){
        cout<<-1;
        return;
    }
    ll dv = s/n,cnt=0;
    rep(i,0,n-1){
        if(a[i]>dv) cnt++;
    }
    cout<<cnt;
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