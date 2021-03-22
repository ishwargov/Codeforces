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

vector <tuple<ll,ll,ll>> p;
ll n,curx,cury,ans;
vector <string> cmd;

void go_to(ll x,ll y){
    if(x>curx){
        cmd.pb("1 "+ to_string(abs(curx-x)) + " R");
        curx = x;
        ans++;
    }
    else if(x<curx){
        cmd.pb("1 "+ to_string(abs(curx-x)) + " L");
        curx = x;
        ans++;
    }
    if(y>cury){
        cmd.pb("1 "+ to_string(abs(cury-y)) + " U");
        cury = y;
        ans++;
    }
    else if(y<cury){
        cmd.pb("1 "+ to_string(abs(cury-y)) + " D");
        cury = y;
        ans++;
    }
}

void solve(){
    cin>>n;
    rep(i,0,n-1){
        ll x,y;
        cin>>x>>y;
        p.pb({abs(x)+abs(y),x,y});
    }
    sort(p.begin(),p.end());
    rep(i,0,n-1){
        //cout<<get<0>(p[i])<<" "<<get<1>(p[i])<<" "<<get<2>(p[i])<<"\n";
        go_to(get<1>(p[i]),get<2>(p[i]));
        cmd.pb("2");
        go_to(0,0);
        cmd.pb("3");
        ans+=2;
    }
    cout<<ans<<"\n";
    for(auto s:cmd){
        cout<<s<<"\n";
    }
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    return 0;
} 