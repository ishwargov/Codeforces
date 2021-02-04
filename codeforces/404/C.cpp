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

ll n,k,mx;
vector <ll> d[(int)1e5+1],deg;

void solve(){
    cin>>n>>k;
    deg.resize(n,0);
    rep(i,0,n-1){
        ll x;
        cin>>x;
        mx = max(mx,x);
        d[x].pb(i);
    }
    vector<pair<ll,ll>> ans;
    if(d[0].size()>1||d[0].size()<1){
        cout<<"-1";
        return;
    }
    rep(i,1,mx){
        if(k*d[i-1].size()<d[i].size()){
            cout<<"-1";
            return;
        }
        ll q=0;
        for(ll j=0;j<d[i-1].size();j++){
            while(deg[d[i-1][j]]<k&&q<d[i].size()){
                ans.pb({d[i-1][j]+1,d[i][q]+1});
                deg[d[i-1][j]]++;
                deg[d[i][q]]++;
                q++;
            }
        }
        if(q<d[i].size()){
            cout<<"-1"; return;
        }
    }
    cout<<ans.size()<<"\n";
    for(auto x:ans){
        cout<<x.fi<<" "<<x.se<<"\n";
    }
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 