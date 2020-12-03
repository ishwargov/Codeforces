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

ll p[2010],a[2010];
void solve(){
    ll n,cur=0;
    cin>>n;
    rep(i,1,n){
        cin>>a[i];
        p[i] = a[i];
    }
    rep(i,1,n){
        ll j = i,cnt = 0;
        while(j!=-1){
            j = p[j];
            cnt++;
        }
        cur = max(cur,cnt);
    }
    cout<<cur;
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 