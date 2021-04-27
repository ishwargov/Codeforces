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
    ll n,len=1,cursum=0;
    double avg = 0;
    cin>>n;
    vector <ll> a,b(n,0);
    a.pb(0);
    rep(i,0,n-1){
        ll x;
        cin>>x;
        if(x==1){
            ll y,z;
            cin>>y>>z;
            avg = (avg*len + y*z)/len;
            b[y] += z;
            //cout<<b[y]<<" "<<y<<"\n";
        }
        else if(x==2){
            ll y;
            cin>>y;
            a.pb(y);
            avg = (avg*len+y)/(len+1);
            len++; 
        }
        else{
            //cout<<b[len]<<" "<<len<<"\n";
            avg = (avg*len-b[len]-a[a.size()-1])/(len-1);
            b[len-1] += b[len];
            b[len]=0;
            a.pop_back();
            len--; 
        }
        cout<<fixed;
        cout<<setprecision(6)<<avg<<"\n";
    }
}

int main(){   
    solve();
    //timetaken();
    return 0;
} 