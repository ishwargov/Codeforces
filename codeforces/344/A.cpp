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
    ll n;
    cin>>n;
    vector <ll> a;
    rep(i,0,n-1){
        string s;
        cin>>s;
        if(s.compare("10")==0){
            a.pb(-1);
        }
        else{
            a.pb(1);
        }
    }
    if(n==1){cout<<"1";return;}
    ll prv=a[0],ans = 1;
    rep(i,1,n-1){
        if(prv*a[i]!=-1){
            prv=a[i];
        }
        else{
            ans++;
            prv = a[i];
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