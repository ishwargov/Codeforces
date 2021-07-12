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

const int MAXN = 1e5+1;
ll cnt1[MAXN][2],cnt2[MAXN][2];

void solve(){
    ll n;
    cin>>n;
    vector <ll> a(n),b(n);
    rep(i,0,n-1){cin>>a[i];b[i]=a[i];}
    sort(b.begin(),b.end());
    memset(cnt1,0,sizeof(cnt1));
    memset(cnt2,0,sizeof(cnt2));
    rep(i,0,n-1){
        cnt1[a[i]][i%2]++;
        cnt2[b[i]][i%2]++;
    }
    bool ok = false;
    rep(i,0,n-1){
        if(cnt1[a[i]][0]!=cnt2[a[i]][0]||cnt1[a[i]][1]!=cnt2[a[i]][1]) {ok = true;break;}
    }
    if(ok){cout<<"NO";}
    else cout<<"YES";
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