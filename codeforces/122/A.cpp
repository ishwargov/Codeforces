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
    vector <ll> lck;
    for(ll i=4;i<1111;i++){
        ll flg = 0,cur = i;
        while(cur>0){
            if(cur%10!=4&&cur%10!=7){flg++;break;}
            cur/=10;
        }
        if(flg==0) lck.pb(i);
    }
    for(auto x:lck){
        if(n%x==0){cout<<"YES";return;}
    }
    cout<<"NO";
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    return 0;
} 