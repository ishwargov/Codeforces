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

void solve(){
    ll x,y,a,b,ans=0;
    cin>>x>>y>>a>>b;
    ll l=0,r=1e9+1;
    if(a<b){swap(a,b);}

    while(l<=r){
        ll m = l+(r-l)/2;
        ll flg = 0; 
        ll p=0,q=m,m1;
        while(p<=q){
            m1 = p+(q-p)/2;
            if(x>=m1*a+(m-m1)*b&&y>=m1*b+(m-m1)*a){flg=1;break;}
            else if(y>=m1*b+(m-m1)*a){q=m1-1;}
            else{p=m1+1;}
        }
        if(flg){
            l = m+1;
            ans = m;
        }
        else{
            r= m-1;
        }
    }
    cout<<ans;
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