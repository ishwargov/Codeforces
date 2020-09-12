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
    ll n,a[101]={0},b[101]={0},c[101]={0},inp;
    cin>>n;
    rep(i,0,n-1){
        cin>>inp;
        a[inp]++;
    }
    rep(i,0,100){
        if(a[i]>=2){
            b[i]=1;
            c[i]=1;
        }
        else if(a[i]==1){
            b[i] = 1;
            c[i] = 0;
        }
    }
    ll p=0,q=0;
    rep(i,0,100){
        if(b[i]==0){ p = i; break; }
    }
    rep(i,0,100){
        if(c[i]==0){ q = i; break; }
    }
    cout<<p+q;   
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