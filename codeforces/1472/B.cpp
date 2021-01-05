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
#define rep(i,k,n) for(ll i=k;i<=n;i++)
#define repi(i,k,n) for(ll i=k;i>=n;i--)
clock_t begtime = clock();
#define timetaken() cout << "\n\nTime elapsed: " << (float)(clock() - begtime)/1000.0

void solve(){
    ll n,alice=0,bob=0,c1=0,c2=0;
    cin>>n;
    vector <ll> a(n);
    rep(i,0,n-1){
        cin>>a[i];
        if(a[i]==1) c1++;
        else c2++;
    }
    while(c2>0){
        if(alice>bob){
            bob += 2;
            c2--;
        }
        else{
            alice += 2;
            c2--;
        }
    }
    while(c1>0){
       if(alice>bob){
            bob += 1;
            c1--;
        }
        else{
            alice += 1;
            c1--;
        } 
    }
    if(alice==bob){cout<<"YES";}
    else{cout<<"NO";}
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
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