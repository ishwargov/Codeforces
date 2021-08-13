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
#define timetaken() cout << "\n\nTime elapsed: " << (float)(clock() - begtime)/1000.0

ll binExp(ll a,ll b){
    ll res = 1;
    while(b>0){
        if(b&1) res=(res*a)%M;
        a=(a*a)%M;
        b>>=1;
    }
    return res%M;
}

void solve(){
    ll n;
    cin>>n;
    cout<<((binExp(27,n)-binExp(7,n))+M)%M;
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 