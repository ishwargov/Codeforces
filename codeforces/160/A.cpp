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
    ll n,a[101],ans=0,cnt=0;
    cin>>n;
    rep(i,0,n-1){
        cin>>a[i];
    }   
    sort(a,a+n);
    ll sum = accumulate(a,a+n,0);
    repi(i,n-1,0){
        if(ans>(sum-ans)){
            break;
        }
        ans += a[i];
        cnt++;
    }
    cout<<cnt;
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 