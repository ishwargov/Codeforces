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
    int n;
    cin>>n;
    vector<ll> a(n);
    ll ans = 0,prs = 0;
    for(int i=0;i<n;i++) cin>>a[i]; 
    for(int i=n-1;i>=0;i--){
        prs += a[i]/2;
        if((a[i]&1) && prs>0){
            prs--;
            ans++;
        }
    }
    ans += (2*prs)/3;
    cout<<ans;
}

int main(){   
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 