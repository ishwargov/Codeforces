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
#define rep(i,k,n) for(ll i=(k);i<=(n);i++)
#define repi(i,k,n) for(ll i=(k);i>=(n);i--)
clock_t begtime = clock();
#define timetaken() cout << "\n\nTime elapsed: " << (float)(clock() - begtime)/1000.0

void solve(){
    ll n;
    cin>>n;
    ll ans = n;
    vector <ll> a(n),vis(n+1,0);
    rep(i,0,n-1){cin>>a[i];}
    sort(a.begin(),a.end());
    ll p=0,q=n/2,j=0;
    while(q<n&&p<n){
        if(vis[p]){ 
            p++;
            continue;
        }
        while((2*a[p]>a[q]||vis[q])&&q<n){
            q++;
        }
        if(q<n){
            ans--;
            vis[p]=1;
            vis[q]=1;
            q++;
        }
        p++;
    }
    cout<<ans;
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 