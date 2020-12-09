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
    ll a[3],mx=0;
    cin>>a[0]>>a[1]>>a[2];
    sort(a,a+3);
    rep(i,0,3){
        if(a[0]-i<0)
            break;
        mx = max(mx, (a[0]-i)/3 + (a[1]-i)/3 + (a[2]-i)/3 + i);
    }
    cout<<mx;
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 