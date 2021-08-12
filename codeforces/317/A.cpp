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
    ll x,y,m,cnt=0;
    cin>>x>>y>>m;
    if(m<=x||m<=y){
        cout<<0;
        return;
    }
    if(x<=0&&y<=0){
        cout<<-1;
        return;
    }
    if(x<y) swap(x,y);
    if(y<0){
        cnt = (-y)/x;   
        y += cnt*(x);
    }
    while(max(x,y)<m){
        if(x<y) swap(x,y);
        y = x+y;
        cnt++;
    }
    cout<<cnt;
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
}   