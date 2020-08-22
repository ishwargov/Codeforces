/* XxSupremeLordxX Ishwar Govind */
#include <bits/stdc++.h>
using namespace std;
#define M 1000000009
#define ll long long int
#define fi first    
#define se second
#define pb push_back
#define mp make_pair
#define ub upper_bound
#define lb lower_bound
#define rep(i,k,n) for(ll i=k;i<=n;i++)
#define repi(i,k,n) for(ll i=k;i>=n;i--)

void solve(){
    char a[4][4];
    ll chk;
    rep(i,0,3){
        rep(j,0,3){
            cin>>a[i][j];
        }
    }
    rep(i,0,2){
        chk=0;
        rep(j,0,2){
            chk = (a[i][j]=='#')+(a[i+1][j]=='#')+(a[i][j+1]=='#')+(a[i+1][j+1]=='#');
            //cout<<chk;
            if(chk<=1||chk>=3){
                cout<<"YES";
                return;
            }
        }
    }
    cout<<"NO";

}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    return 0;
}
