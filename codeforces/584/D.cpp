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

bool isPrime(ll x){
    for(ll i=2;i*i<=x;i++){
        if(x%i==0) return false;
    }
    return true;
}

void solve(){
    ll n;
    cin>>n;
    if(isPrime(n)){cout<<"1\n"<<n;return;}
    ll k=n-1;
    while(!isPrime(k)){ k--; }
    ll m = n-k;
    if(isPrime(m)){
        cout<<"2\n"<<k<<" "<<m;
        return;
    }
    ll m1 = 2;
    for(;m1+1<m;m1++){
        if(isPrime(m-m1)&&isPrime(m1)){break;}
    }
    cout<<"3\n"<<k<<" "<<m1<<" "<<m-m1;
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 