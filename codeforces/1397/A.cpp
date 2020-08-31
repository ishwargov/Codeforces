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
    ll n;
    string s[1001];
    int a[26];
    cin>>n;
    rep(i,0,25){
        a[i]=0;
    }
    rep(i,0,n-1){
        cin>>s[i];
        rep(j,0,s[i].size()-1){
            a[s[i][j]-'a']++;
        }
    }
    rep(i,0,25){
        if(a[i]%n!=0){
            cout<<"NO";
            return;
        }
    }
    cout<<"YES";


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