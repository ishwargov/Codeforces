/* XxSupremeLordxX Ishwar Govind */
#include <bits/stdc++.h>
using namespace std;
#define M 1000000007
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
    string s;
    cin>>s;
    ll n =  s.size(),m;
    vector <ll> l(n,0);
    rep(i,1,n-1){
        if(s[i-1]==s[i])
            l[i] = l[i-1]+1;
        else
            l[i] = l[i-1];
    }
    cin>>m;
    rep(i,0,m-1){
        ll x,y;
        cin>>x>>y;
        cout<<(l[y-1]-l[x-1])<<"\n";
    }


}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 