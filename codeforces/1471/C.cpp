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
#define rep(i,k,n) for(ll i=k;i<=n;i++)
#define repi(i,k,n) for(ll i=k;i>=n;i--)
clock_t begtime = clock();
#define timetaken() cout << "\n\nTime elapsed: " << (float)(clock() - begtime)/1000.0

void solve(){
    ll n,m;
    cin>>n>>m;
    vector <ll> k(n),c(m);
    rep(i,0,n-1){cin>>k[i];}
    rep(i,0,m-1){cin>>c[i];}
    ll ans = 0,j=0,i=0;
    sort(k.rbegin(),k.rend());
    while(i<n){
        if(c[k[i]-1]<=c[j]){
            ans += c[k[i]-1];
        }
        else{
            ans += c[j];
            j++;
        }
        i++;
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