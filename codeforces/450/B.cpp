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
    ll f1,f2,n;
    cin>>f1>>f2>>n;
    ll f3 = f2 - f1,k=(n-1)/3;
    if(n%3==0){
        ll ans =  (-1*(k%2) + 1*((k+1)%2))*(f3);
        cout<< ((ans%M)+M)%M;
    }
    else if(n%3==1){
        ll ans =  (-1*(k%2) + 1*((k+1)%2))*(f1);
        cout<< ((ans%M)+M)%M;
    }
    else if(n%3==2){
        ll ans =  (-1*(k%2) + 1*((k+1)%2))*(f2);
        cout<< ((ans%M)+M)%M;
    }
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 