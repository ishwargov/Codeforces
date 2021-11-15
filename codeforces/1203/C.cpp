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

ll divi(ll n){
    ll cnt = 0;
    for(ll i=1;i*i<=n;i++){
        if(n%i==0 && i*i!=n) cnt+=2;
        else if(n%i==0) cnt+=1;
    }
    return cnt;
}

void solve(){
    ll n;
    cin>>n;
    ll gc = 0;
    vector<ll> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        gc = __gcd(a[i],gc);
    }
    //cout<<gc;
    cout<<divi(gc);
}

int main(){   
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 