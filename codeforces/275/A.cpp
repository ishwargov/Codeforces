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
    ll a[4][4],b[4][4];
    rep(i,0,2){
        rep(j,0,2){
            cin>>a[i][j];
        }
    }
    rep(i,0,2){
        rep(j,0,2){
            b[i][j] = a[i][j];
            b[i][j] += (i!=0)*a[i-1][j] + (i!=2)*a[i+1][j] + (j!=0)*a[i][j-1] + (j!=2)*a[i][j+1];           
            }
    }
    rep(i,0,2){
        rep(j,0,2){
            cout<<(b[i][j]%2==0);
        }
        cout<<"\n";
    }

}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 