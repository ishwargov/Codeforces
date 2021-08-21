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
#define timetaken() cout << "\n\nTime elapsed: " << (double)(clock() - begtime)/CLOCKS_PER_SEC

void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    vector <ll> sh;
    for(int i=0;i<s.size();i++){
        if(s[i]=='*') sh.pb(i);
    }
    ll m = sh.size(),ans=0,cnt=1;
    ll mid = m/2+(m%2!=0) - 1;
    for(int j=mid+1;j<m;j++){
        ans += sh[j] - (sh[mid]+cnt);
        cnt++;
    }
    cnt = 1;
    for(int j=mid-1;j>=0;j--){
        ans += (sh[mid]-cnt) - sh[j];
        cnt++;
    }
    cout<<ans;
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