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
    ll n,u,v;
    cin>>n>>u>>v;
    vector <ll> a(n);
    rep(i,0,n-1){cin>>a[i];}
    rep(i,0,n-2){
        if(abs(a[i+1]-a[i])>1){
            cout<<0;
            return;
        }
    }
    rep(i,0,n-2){
        if(abs(a[i+1]-a[i])>0){
            cout<<min(u,v);
            return;
        }
    }
    cout<<v+min(u,v);
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