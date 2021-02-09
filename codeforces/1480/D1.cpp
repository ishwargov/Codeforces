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

const int N = 1e5+5;
ll a[N],nxt[N],pos[N];

void solve(){
    ll n;
    cin>>n;
    rep(i,1,n){
        cin>>a[i];
    }
    rep(i,0,n){
        pos[i] = n+1;
    }
    repi(i,n,0){
        nxt[i] = pos[a[i]];
        pos[a[i]] = i;
    }
    ll p=0,q=0,ans=0;
    rep(i,1,n){
        if(a[p]==a[i]){
            ans += (a[q]!=a[i]);
            q = i;
        }
        else if(a[q]==a[i]){
            ans += (a[p]!=a[i]);
            p = i;
        }
        else if(nxt[p]<nxt[q]){
            ans++;
            p = i;
        }
        else{
            ans++;
            q = i;
        }
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