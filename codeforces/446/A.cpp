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
    vector <ll> a(n),l(n,1),r(n,1);
    rep(i,0,n-1){
        cin>>a[i];
    }
    rep(i,0,n-1){
        if(a[i]>a[i-1]&&i>0){
            l[i] = l[i-1]+1;
        }
    }
    repi(i,n-1,0){
        if(a[i]<a[i+1]&&i<n-1){
            r[i] = r[i+1]+1;
        }   
    }
    ll ans = 1;
    rep(i,0,n-1){
        //cout<<l[i]<<" "<<r[i]<<"\n";    
        if(i!=0){
            ans = max(ans,l[i-1]+1);
        }
        if(i!=n-1){
            ans = max(ans,r[i+1]+1);
        }
        if (i!=0&&i+1<n&&a[i-1]+1<a[i+1]) {
            ans = max(ans, l[i-1] + r[i+1] + 1);                                
        }
    }
    cout<<ans;
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    return 0;
}   