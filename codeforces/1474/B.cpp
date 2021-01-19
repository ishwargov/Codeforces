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

bool isprime[22222];
void sieve(int n){
    memset(isprime,true,sizeof(isprime));
    for(ll p=2;p*p<=n;p++){
        if (isprime[p] == true){  
            for (ll i=p*p; i<=n; i += p) 
                isprime[i] = false; 
        }
    }
}

void solve(){
    ll d;
    cin>>d;
    ll nxt = 1+d;
    //cout<<isprime[2];
    while(!isprime[nxt]){
        nxt++;
    }
    ll nxt2 = nxt+d;
    while(!isprime[nxt2]){
        nxt2++;
    }
    ll ans = nxt*nxt2;
    cout<<ans;
}   

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    sieve(22221);
    int T;
    cin>>T;
    rep(t,1,T){
    //    cout<<"Case #"<<t<<": ";
        solve();
        cout<<"\n";
    }
    //timetaken();
    return 0;
} 