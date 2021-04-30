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
    map <ll,ll> uni;
    cin>>n;
    vector <ll> u(n),s(n);
    ll cnt = 0;
    rep(i,0,n-1){
        cin>>u[i];
        if(uni.find(u[i])==uni.end()){
            uni[u[i]] = cnt;
            cnt++;
        }
    }
    rep(i,0,n-1){
        u[i] = uni[u[i]];
    }
    rep(i,0,n-1){ 
        cin>>s[i];
    }
    vector <vector<ll>> a(cnt),sum(cnt);
    rep(i,0,n-1){
        a[u[i]].pb(s[i]);
    }
    rep(i,0,cnt-1){
        sort(a[i].begin(),a[i].end());
        reverse(a[i].begin(),a[i].end());
    }
    //cout<<cnt<<"\n";
    sort(a.begin(), a.end(), [](const vector<ll> & a, const vector<ll> & b){ return a.size() < b.size(); });
    reverse(a.begin(),a.end());
    rep(i,0,cnt-1){
        sum[i].resize(a[i].size()+1,0);
        ll m = a[i].size();
        rep(j,1,m){
            sum[i][j] = sum[i][j-1] + a[i][j-1];
        }
    }
    rep(i,1,n){
        ll ans = 0;
        rep(j,0,cnt-1){
            if(i>a[j].size()) break;
            ll rem = a[j].size() - a[j].size()%i;
            ans += sum[j][rem];
        }
        cout<<ans<<" ";
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