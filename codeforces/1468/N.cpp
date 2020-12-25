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
    ll c[3],a[5];
    rep(i,0,2){cin>>c[i];}
    rep(i,0,4){cin>>a[i];}
    rep(i,0,2){
        if(c[i]>=a[i]){
            c[i] -= a[i];
            a[i] = 0;
        }
        else{
            cout<<"NO";
            return;
        }
    }
    if(c[0]+c[2]<a[3]){
        cout<<"NO";
        return;
    }
    if(c[1]+c[2]<a[4]){
        cout<<"NO";
        return;
    }
    if(c[0]>=a[3]){
        c[0] -= a[3];
        a[3] = 0;
    }
    else{
        a[3] = a[3] - c[0];
        c[0] = 0;
    }
    if(c[1]>=a[4]){
        c[1] -= a[4];
        a[4] = 0;
    }
    else{
        a[4] = a[4] - c[1];
        c[1] = 0;
    }

    if(a[4]+a[3]>c[2]){
        cout<<"NO";
        return;
    }
    cout<<"YES";
    
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